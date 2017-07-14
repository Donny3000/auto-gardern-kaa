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

struct _log_avsc_Union__1__ {
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
    _log_avsc_Union__1__();
};

struct _log_avsc_Union__2__ {
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
    _log_avsc_Union__2__();
};

struct _log_avsc_Union__3__ {
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
    _log_avsc_Union__3__();
};

struct _log_avsc_Union__4__ {
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
    _log_avsc_Union__4__();
};

struct DataCollection {
    typedef _log_avsc_Union__0__ soil_temperature_t;
    typedef _log_avsc_Union__1__ soil_volmetric_water_content_t;
    typedef _log_avsc_Union__2__ ambient_air_temp_t;
    typedef _log_avsc_Union__3__ ambient_air_humidity_t;
    typedef _log_avsc_Union__4__ ambient_luminosity_t;
    soil_temperature_t soil_temperature;
    soil_volmetric_water_content_t soil_volmetric_water_content;
    ambient_air_temp_t ambient_air_temp;
    ambient_air_humidity_t ambient_air_humidity;
    ambient_luminosity_t ambient_luminosity;
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

inline
double _log_avsc_Union__1__::get_double() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void _log_avsc_Union__1__::set_double(const double& v) {
    idx_ = 0;
    value_ = v;
}

inline
double _log_avsc_Union__2__::get_double() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void _log_avsc_Union__2__::set_double(const double& v) {
    idx_ = 0;
    value_ = v;
}

inline
double _log_avsc_Union__3__::get_double() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void _log_avsc_Union__3__::set_double(const double& v) {
    idx_ = 0;
    value_ = v;
}

inline
double _log_avsc_Union__4__::get_double() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void _log_avsc_Union__4__::set_double(const double& v) {
    idx_ = 0;
    value_ = v;
}

inline _log_avsc_Union__0__::_log_avsc_Union__0__() : idx_(0), value_(double()) { }
inline _log_avsc_Union__1__::_log_avsc_Union__1__() : idx_(0), value_(double()) { }
inline _log_avsc_Union__2__::_log_avsc_Union__2__() : idx_(0), value_(double()) { }
inline _log_avsc_Union__3__::_log_avsc_Union__3__() : idx_(0), value_(double()) { }
inline _log_avsc_Union__4__::_log_avsc_Union__4__() : idx_(0), value_(double()) { }
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

template<> struct codec_traits<kaa_log::_log_avsc_Union__1__> {
    static void encode(Encoder& e, kaa_log::_log_avsc_Union__1__ v) {
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
    static void decode(Decoder& d, kaa_log::_log_avsc_Union__1__& v) {
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

template<> struct codec_traits<kaa_log::_log_avsc_Union__2__> {
    static void encode(Encoder& e, kaa_log::_log_avsc_Union__2__ v) {
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
    static void decode(Decoder& d, kaa_log::_log_avsc_Union__2__& v) {
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

template<> struct codec_traits<kaa_log::_log_avsc_Union__3__> {
    static void encode(Encoder& e, kaa_log::_log_avsc_Union__3__ v) {
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
    static void decode(Decoder& d, kaa_log::_log_avsc_Union__3__& v) {
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

template<> struct codec_traits<kaa_log::_log_avsc_Union__4__> {
    static void encode(Encoder& e, kaa_log::_log_avsc_Union__4__ v) {
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
    static void decode(Decoder& d, kaa_log::_log_avsc_Union__4__& v) {
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

template<> struct codec_traits<kaa_log::DataCollection> {
    static void encode(Encoder& e, const kaa_log::DataCollection& v) {
        avro::encode(e, v.soil_temperature);
        avro::encode(e, v.soil_volmetric_water_content);
        avro::encode(e, v.ambient_air_temp);
        avro::encode(e, v.ambient_air_humidity);
        avro::encode(e, v.ambient_luminosity);
    }
    static void decode(Decoder& d, kaa_log::DataCollection& v) {
        avro::decode(d, v.soil_temperature);
        avro::decode(d, v.soil_volmetric_water_content);
        avro::decode(d, v.ambient_air_temp);
        avro::decode(d, v.ambient_air_humidity);
        avro::decode(d, v.ambient_luminosity);
    }
};

}
#endif
