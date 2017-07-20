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

# ifndef KAA_DEFAULTS_H_
# define KAA_DEFAULTS_H_

/**
 *
 * DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED.
 *
 */

# include "kaa_common.h"

# ifdef __cplusplus
extern "C" {
# endif

# define KAA_BUILD_VERSION             "0.10.0"
# define KAA_BUILD_COMMIT_HASH         ""

# define KAA_SDK_TOKEN                 "ls0z2sF7XxPLT_JtWoly5xgC-Tw"

# define KAA_PROFILE_SCHEMA_VERSION    0


# define KAA_SYNC_TIMEOUT               60000L


/**
 * @brief Uses to represent transport-specific connection data to establish
 * connection to Bootstrap servers.
 *
 * @see kaa_transport_protocol_id_t
 * @see kaa_access_point_t
 */
typedef struct {
    kaa_transport_protocol_id_t    protocol_id;
    kaa_access_point_t             access_point;
} kaa_bootstrap_server_connection_data_t;

# define KAA_BOOTSTRAP_ACCESS_POINT_COUNT    2

static const kaa_bootstrap_server_connection_data_t KAA_BOOTSTRAP_ACCESS_POINTS[KAA_BOOTSTRAP_ACCESS_POINT_COUNT] =
{
    {
        { 0x56c8ff92, 1 },
        {
            0x929a2016,
            317,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -117 , 81 , -34 , 12 , -123 , 5 , -79 , 84 , -122 , 67 , -54 , 24 , -88 , -97 , -65 , -112 , 33 , 98 , 13 , 68 , -42 , 7 , 23 , 122 , 71 , -58 , 71 , 69 , 61 , 72 , 61 , 118 , 119 , -48 , 27 , -34 , 124 , -27 , 81 , 40 , 38 , 4 , 65 , 54 , -111 , -2 , 81 , 15 , 36 , 5 , 19 , 34 , -6 , 22 , 93 , -121 , 127 , 36 , -67 , 108 , -87 , 98 , 70 , -7 , 118 , 123 , 76 , 86 , -68 , 109 , -105 , 2 , -2 , 112 , 25 , -55 , -37 , 5 , -88 , 17 , -109 , -25 , -25 , -117 , 5 , -79 , -4 , 89 , -22 , -54 , -14 , -107 , 92 , -83 , 36 , 90 , 41 , 74 , 9 , -16 , -93 , -11 , 56 , 104 , 99 , 12 , 123 , -3 , -27 , 65 , 122 , 12 , 3 , 97 , -9 , 8 , 19 , 37 , -42 , 99 , -121 , 98 , 122 , 75 , -55 , -105 , 72 , 37 , 14 , 49 , 56 , -34 , -84 , 44 , -8 , 50 , 115 , -56 , 56 , 21 , -84 , 34 , 59 , -6 , -125 , 56 , 105 , 23 , 89 , 87 , -58 , 51 , -63 , -61 , 121 , 92 , -70 , -25 , -83 , 79 , 126 , -42 , -107 , 73 , -72 , 75 , -50 , -69 , 118 , -51 , 56 , -63 , -88 , 4 , 115 , -79 , -36 , 36 , 55 , 33 , 50 , -61 , 87 , 90 , -30 , -111 , 33 , -123 , 63 , -7 , 3 , -115 , 113 , 81 , -95 , 109 , 5 , 83 , -91 , -104 , 9 , -30 , 60 , -99 , 77 , 104 , -49 , -116 , 102 , -99 , 7 , 21 , -65 , 77 , 112 , 31 , -87 , 8 , -49 , 70 , 40 , 100 , -2 , 58 , -63 , -96 , 73 , -91 , -99 , -62 , 45 , 122 , -89 , -52 , -28 , -14 , -5 , 79 , 121 , 101 , -50 , 40 , -99 , -69 , -113 , 23 , -66 , -51 , 1 , 24 , 77 , 94 , 78 , -116 , -108 , 41 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 11 , 49 , 57 , 50 , 46 , 49 , 54 , 56 , 46 , 49 , 46 , 50 , 0 , 0 , 38 , -96             }
        }
    },
    {
        { 0xfb9a3cf0, 1 },
        {
            0x929a2016,
            317,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -117 , 81 , -34 , 12 , -123 , 5 , -79 , 84 , -122 , 67 , -54 , 24 , -88 , -97 , -65 , -112 , 33 , 98 , 13 , 68 , -42 , 7 , 23 , 122 , 71 , -58 , 71 , 69 , 61 , 72 , 61 , 118 , 119 , -48 , 27 , -34 , 124 , -27 , 81 , 40 , 38 , 4 , 65 , 54 , -111 , -2 , 81 , 15 , 36 , 5 , 19 , 34 , -6 , 22 , 93 , -121 , 127 , 36 , -67 , 108 , -87 , 98 , 70 , -7 , 118 , 123 , 76 , 86 , -68 , 109 , -105 , 2 , -2 , 112 , 25 , -55 , -37 , 5 , -88 , 17 , -109 , -25 , -25 , -117 , 5 , -79 , -4 , 89 , -22 , -54 , -14 , -107 , 92 , -83 , 36 , 90 , 41 , 74 , 9 , -16 , -93 , -11 , 56 , 104 , 99 , 12 , 123 , -3 , -27 , 65 , 122 , 12 , 3 , 97 , -9 , 8 , 19 , 37 , -42 , 99 , -121 , 98 , 122 , 75 , -55 , -105 , 72 , 37 , 14 , 49 , 56 , -34 , -84 , 44 , -8 , 50 , 115 , -56 , 56 , 21 , -84 , 34 , 59 , -6 , -125 , 56 , 105 , 23 , 89 , 87 , -58 , 51 , -63 , -61 , 121 , 92 , -70 , -25 , -83 , 79 , 126 , -42 , -107 , 73 , -72 , 75 , -50 , -69 , 118 , -51 , 56 , -63 , -88 , 4 , 115 , -79 , -36 , 36 , 55 , 33 , 50 , -61 , 87 , 90 , -30 , -111 , 33 , -123 , 63 , -7 , 3 , -115 , 113 , 81 , -95 , 109 , 5 , 83 , -91 , -104 , 9 , -30 , 60 , -99 , 77 , 104 , -49 , -116 , 102 , -99 , 7 , 21 , -65 , 77 , 112 , 31 , -87 , 8 , -49 , 70 , 40 , 100 , -2 , 58 , -63 , -96 , 73 , -91 , -99 , -62 , 45 , 122 , -89 , -52 , -28 , -14 , -5 , 79 , 121 , 101 , -50 , 40 , -99 , -69 , -113 , 23 , -66 , -51 , 1 , 24 , 77 , 94 , 78 , -116 , -108 , 41 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 11 , 49 , 57 , 50 , 46 , 49 , 54 , 56 , 46 , 49 , 46 , 50 , 0 , 0 , 38 , -95             }
        }
    }};



# define KAA_CONFIGURATION_DATA_LENGTH    4

static const char KAA_CONFIGURATION_DATA[KAA_CONFIGURATION_DATA_LENGTH] =
{
0 , 2 , 0 , 0 };

# ifdef __cplusplus
} // extern "C"
# endif

# endif /* KAA_DEFAULTS_H_ */
