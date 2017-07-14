#include <boost/asio.hpp>
#include <kaa/Kaa.hpp>
#include <kaa/IKaaClient.hpp>
#include <kaa/configuration/manager/IConfigurationReceiver.hpp>
#include <kaa/configuration/storage/FileConfigurationStorage.hpp>
#include <kaa/log/strategies/RecordCountLogUploadStrategy.hpp>
#include <iostream>
#include <memory>
#include <string>
#include <cstdint>

using namespace std;

class ConfigurationCollection : public kaa::IConfigurationReceiver {
public:
    ConfigurationCollection()
            : kaaClient_(kaa::Kaa::newClient())
            , sampleFrequency_(0)
            , interval_(sampleFrequency_)
            , timer_(service_, interval_)
    {
        // Set a custom strategy for uploading logs.
        kaaClient_->setLogUploadStrategy(
                std::make_shared<kaa::RecordCountLogUploadStrategy>(1, kaaClient_->getKaaClientContext()));
        // Set up a configuration subsystem.
        kaa::IConfigurationStoragePtr storage(
                std::make_shared<kaa::FileConfigurationStorage>(std::string(savedConfig_)));
        kaaClient_->setConfigurationStorage(storage);
        kaaClient_->addConfigurationListener(*this);
        auto handlerUpdate = [this](const boost::system::error_code& err)
        {
            this->update();
        };
        timer_.async_wait(handlerUpdate);
    }

    ~ConfigurationCollection()
    {
        // Stop the Kaa endpoint.
        kaaClient_->stop();
        std::cout << "Simple client demo stopped" << std::endl;
    }

    void run()
    {
        // Run the Kaa endpoint.
        kaaClient_->start();
        // Read default sample period
        sampleFrequency_ = kaaClient_->getConfiguration().sampleFrequency;
        std::cout << "Default sample frequency: " << sampleFrequency_<< std::endl;
        // Default sample period
        timer_.expires_from_now(boost::posix_time::seconds(sampleFrequency_));
        service_.run();
    }

private:
    static constexpr auto savedConfig_ = "saved_config.cfg";
    std::shared_ptr<kaa::IKaaClient> kaaClient_;
    int32_t sampleFrequency_;
    boost::asio::io_service service_;
    boost::posix_time::seconds interval_;
    boost::asio::deadline_timer timer_;

    double getTemperature()
    {
        // For sake of example random data is used
        return rand() % 10 + 25.0;
    }

    void update()
    {
        kaa::KaaUserLogRecord logRecord;
        logRecord.soil_temperature.set_double( getTemperature() );
        // Send value of temperature
        kaaClient_->addLogRecord(logRecord);
        // Show log
        std::cout << "Sampled temperature: " << logRecord.soil_temperature.get_double() << std::endl;
        // Set a new  period of the send data
        timer_.expires_at(timer_.expires_at() + boost::posix_time::seconds(sampleFrequency_));
        // Posts the timer event
        auto handlerUpdate = [this](const boost::system::error_code& err)
        {
            this->update();
        };
        timer_.async_wait(handlerUpdate);
    }

    void updateConfiguration(const kaa::KaaRootConfiguration &configuration)
    {
        std::cout << "Received configuration data. New sample frequency: "
                  << configuration.sampleFrequency << " frequency" << std::endl;
        sampleFrequency_ = configuration.sampleFrequency;
    }

    void onConfigurationUpdated(const kaa::KaaRootConfiguration &configuration)
    {
        updateConfiguration(configuration);
    }
};

int main()
{
    ConfigurationCollection configurationCollection;

    try {
        // It does control of the transmit and receive data
        configurationCollection.run();
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what();
    }

    return 0;
}