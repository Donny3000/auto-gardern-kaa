/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef KAA_LOG_GEN_LOGGEN_HPP_293169158__H_
#define KAA_LOG_GEN_LOGGEN_HPP_293169158__H_


#include "boost/any.hpp"
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace kaa_log {
struct _log_avsc_Union__0__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    double get_double() const;
    void set_double(const double& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _log_avsc_Union__0__();
};

struct SensorCollection {
    typedef _log_avsc_Union__0__ soil_temperature_t;
    soil_temperature_t soil_temperature;
};

inline
double _log_avsc_Union__0__::get_double() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void _log_avsc_Union__0__::set_double(const double& v) {
    idx_ = 0;
    value_ = v;
}

inline _log_avsc_Union__0__::_log_avsc_Union__0__() : idx_(0), value_(double()) { }
}
namespace avro {
template<> struct codec_traits<kaa_log::_log_avsc_Union__0__> {
    static void encode(Encoder& e, kaa_log::_log_avsc_Union__0__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_double());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa_log::_log_avsc_Union__0__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa_log::SensorCollection> {
    static void encode(Encoder& e, const kaa_log::SensorCollection& v) {
        avro::encode(e, v.soil_temperature);
    }
    static void decode(Decoder& d, kaa_log::SensorCollection& v) {
        avro::decode(d, v.soil_temperature);
    }
};

}
#endif
