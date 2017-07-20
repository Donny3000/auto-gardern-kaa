/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

# ifndef KAA_PROFILE_DEFINITIONS_H_
# define KAA_PROFILE_DEFINITIONS_H_

# include "kaa_profile_gen.h"

# ifdef __cplusplus
extern "C" {
# endif

/**
 * @typedef User-defined endpoint profile structure.
 */
<<<<<<< HEAD:flowerbed-ep/kaa/src/kaa/gen/kaa_profile_definitions.h
typedef kaa_profile_empty_data_t kaa_profile_t;

# define KAA_PROFILE_DESERIALIZE(reader)  kaa_profile_empty_data_deserialize(reader)
=======
typedef kaa_log::DataCollection KaaUserLogRecord;
>>>>>>> de48f4fba7114fea0c209a5fd2da2c8045c70ec6:flowerbed-ep/kaa/kaa/log/gen/LogDefinitions.hpp

# ifdef __cplusplus
}      /* extern "C" */
# endif

# endif /* KAA_PROFILE_DEFINITIONS_H_ */
