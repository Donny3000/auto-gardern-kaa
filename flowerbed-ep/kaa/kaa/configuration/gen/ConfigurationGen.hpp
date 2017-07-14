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


#ifndef KAA_CONFIGURATION_GEN_CONFIGURATIONGEN_HPP_293169158__H_
#define KAA_CONFIGURATION_GEN_CONFIGURATIONGEN_HPP_293169158__H_


#include "boost/any.hpp"
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace kaa_configuration {
struct _configuration_avsc_Union__0__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    int32_t get_int() const;
    void set_int(const int32_t& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _configuration_avsc_Union__0__();
};

struct _configuration_avsc_Union__1__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool get_bool() const;
    void set_bool(const bool& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _configuration_avsc_Union__1__();
};

struct Configuration {
    typedef _configuration_avsc_Union__0__ samplePeriod_t;
    typedef _configuration_avsc_Union__1__ turnWaterOn_t;
    samplePeriod_t samplePeriod;
    turnWaterOn_t turnWaterOn;
};

inline
int32_t _configuration_avsc_Union__0__::get_int() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<int32_t >(value_);
}

inline
void _configuration_avsc_Union__0__::set_int(const int32_t& v) {
    idx_ = 0;
    value_ = v;
}

inline
bool _configuration_avsc_Union__1__::get_bool() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<bool >(value_);
}

inline
void _configuration_avsc_Union__1__::set_bool(const bool& v) {
    idx_ = 0;
    value_ = v;
}

inline _configuration_avsc_Union__0__::_configuration_avsc_Union__0__() : idx_(0), value_(int32_t()) { }
inline _configuration_avsc_Union__1__::_configuration_avsc_Union__1__() : idx_(0), value_(bool()) { }
}
namespace avro {
template<> struct codec_traits<kaa_configuration::_configuration_avsc_Union__0__> {
    static void encode(Encoder& e, kaa_configuration::_configuration_avsc_Union__0__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_int());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa_configuration::_configuration_avsc_Union__0__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                int32_t vv;
                avro::decode(d, vv);
                v.set_int(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa_configuration::_configuration_avsc_Union__1__> {
    static void encode(Encoder& e, kaa_configuration::_configuration_avsc_Union__1__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bool());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa_configuration::_configuration_avsc_Union__1__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                bool vv;
                avro::decode(d, vv);
                v.set_bool(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa_configuration::Configuration> {
    static void encode(Encoder& e, const kaa_configuration::Configuration& v) {
        avro::encode(e, v.samplePeriod);
        avro::encode(e, v.turnWaterOn);
    }
    static void decode(Decoder& d, kaa_configuration::Configuration& v) {
        avro::decode(d, v.samplePeriod);
        avro::decode(d, v.turnWaterOn);
    }
};

}
#endif
