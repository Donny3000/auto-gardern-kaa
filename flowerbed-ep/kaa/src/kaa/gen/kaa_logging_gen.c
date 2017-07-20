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

# include <inttypes.h>
# include <string.h>
# include "platform/stdio.h"
# include "kaa_logging_gen.h"
# include "avro_src/avro/io.h"
# include "avro_src/encoding.h"
# include "utilities/kaa_mem.h"

/*
 * AUTO-GENERATED CODE
 */



# ifndef KAA_LOGGING_UNION_DOUBLE_OR_NULL_C_
# define KAA_LOGGING_UNION_DOUBLE_OR_NULL_C_
static void kaa_logging_union_double_or_null_destroy(void *data)
{
    if (data) {
        kaa_union_t *kaa_union = (kaa_union_t *)data;

        switch (kaa_union->type) {
        case KAA_LOGGING_UNION_DOUBLE_OR_NULL_BRANCH_0:
        {
            if (kaa_union->data) {
                kaa_data_destroy(kaa_union->data);
            }
            break;
        }
        default:
            break;
        }

        kaa_data_destroy(kaa_union);
    }
}

static size_t kaa_logging_union_double_or_null_get_size(void *data)
{
    if (data) {
        kaa_union_t *kaa_union = (kaa_union_t *)data;
        size_t union_size = avro_long_get_size(kaa_union->type);

        switch (kaa_union->type) {
        case KAA_LOGGING_UNION_DOUBLE_OR_NULL_BRANCH_0:
        {
            if (kaa_union->data) {
                union_size += AVRO_DOUBLE_SIZE;
            }
            break;
        }
        default:
            break;
        }

        return union_size;
    }

    return 0;
}

static void kaa_logging_union_double_or_null_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        kaa_union_t *kaa_union = (kaa_union_t *)data;
        avro_binary_encoding.write_long(writer, kaa_union->type);

        switch (kaa_union->type) {
        case KAA_LOGGING_UNION_DOUBLE_OR_NULL_BRANCH_0:
        {
            if (kaa_union->data) {
                kaa_double_serialize(writer, kaa_union->data);
            }
            break;
        }
        default:
            break;
        }
    }
}
static kaa_union_t *kaa_logging_union_double_or_null_create(void)
{
    kaa_union_t *kaa_union = KAA_CALLOC(1, sizeof(kaa_union_t));

    if (kaa_union) {
        kaa_union->serialize = kaa_logging_union_double_or_null_serialize;
        kaa_union->get_size = kaa_logging_union_double_or_null_get_size;
        kaa_union->destroy = kaa_logging_union_double_or_null_destroy;
    }

    return kaa_union; 
}

kaa_union_t *kaa_logging_union_double_or_null_branch_0_create(void)
{
    kaa_union_t *kaa_union = kaa_logging_union_double_or_null_create();
    if (kaa_union) {
        kaa_union->type = KAA_LOGGING_UNION_DOUBLE_OR_NULL_BRANCH_0;
    }
    return kaa_union;
}

kaa_union_t *kaa_logging_union_double_or_null_branch_1_create(void)
{
    kaa_union_t *kaa_union = kaa_logging_union_double_or_null_create();
    if (kaa_union) {
        kaa_union->type = KAA_LOGGING_UNION_DOUBLE_OR_NULL_BRANCH_1;
    }
    return kaa_union;
}

kaa_union_t *kaa_logging_union_double_or_null_deserialize(avro_reader_t reader)
{
    kaa_union_t *kaa_union = kaa_logging_union_double_or_null_create();

    if (kaa_union) {
        int64_t branch;
        avro_binary_encoding.read_long(reader, &branch);
        kaa_union->type = branch;

        switch (kaa_union->type) {
        case KAA_LOGGING_UNION_DOUBLE_OR_NULL_BRANCH_0: {
            kaa_union->data = kaa_double_deserialize(reader);
            break;
        }
        default:
            break;
        }
    }

    return kaa_union;
}
# endif // KAA_LOGGING_UNION_DOUBLE_OR_NULL_C_



static void kaa_logging_data_collection_destroy(void *data)
{
    if (data) {
        kaa_logging_data_collection_t *record = (kaa_logging_data_collection_t *)data;

        if (record->soil_temperature && record->soil_temperature->destroy) {
            record->soil_temperature->destroy(record->soil_temperature);
        }
        if (record->soil_volmetric_water_content && record->soil_volmetric_water_content->destroy) {
            record->soil_volmetric_water_content->destroy(record->soil_volmetric_water_content);
        }
        if (record->ambient_air_temp && record->ambient_air_temp->destroy) {
            record->ambient_air_temp->destroy(record->ambient_air_temp);
        }
        if (record->ambient_air_humidity && record->ambient_air_humidity->destroy) {
            record->ambient_air_humidity->destroy(record->ambient_air_humidity);
        }
        if (record->ambient_luminosity && record->ambient_luminosity->destroy) {
            record->ambient_luminosity->destroy(record->ambient_luminosity);
        }
        kaa_data_destroy(record);
    }
}

static void kaa_logging_data_collection_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        kaa_logging_data_collection_t *record = (kaa_logging_data_collection_t *)data;

        record->soil_temperature->serialize(writer, record->soil_temperature);
        record->soil_volmetric_water_content->serialize(writer, record->soil_volmetric_water_content);
        record->ambient_air_temp->serialize(writer, record->ambient_air_temp);
        record->ambient_air_humidity->serialize(writer, record->ambient_air_humidity);
        record->ambient_luminosity->serialize(writer, record->ambient_luminosity);
    }
}

static size_t kaa_logging_data_collection_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        kaa_logging_data_collection_t *record = (kaa_logging_data_collection_t *)data;

        record_size += record->soil_temperature->get_size(record->soil_temperature);
        record_size += record->soil_volmetric_water_content->get_size(record->soil_volmetric_water_content);
        record_size += record->ambient_air_temp->get_size(record->ambient_air_temp);
        record_size += record->ambient_air_humidity->get_size(record->ambient_air_humidity);
        record_size += record->ambient_luminosity->get_size(record->ambient_luminosity);

        return record_size;
    }

    return 0;
}

kaa_logging_data_collection_t *kaa_logging_data_collection_create(void)
{
    kaa_logging_data_collection_t *record = 
            (kaa_logging_data_collection_t *)KAA_CALLOC(1, sizeof(kaa_logging_data_collection_t));

    if (record) {
        record->serialize = kaa_logging_data_collection_serialize;
        record->get_size = kaa_logging_data_collection_get_size;
        record->destroy = kaa_logging_data_collection_destroy;
    }

    return record;
}

kaa_logging_data_collection_t *kaa_logging_data_collection_deserialize(avro_reader_t reader)
{
    kaa_logging_data_collection_t *record = 
            (kaa_logging_data_collection_t *)KAA_MALLOC(sizeof(kaa_logging_data_collection_t));

    if (record) {
        record->serialize = kaa_logging_data_collection_serialize;
        record->get_size = kaa_logging_data_collection_get_size;
        record->destroy = kaa_logging_data_collection_destroy;

        record->soil_temperature = kaa_logging_union_double_or_null_deserialize(reader);
        record->soil_volmetric_water_content = kaa_logging_union_double_or_null_deserialize(reader);
        record->ambient_air_temp = kaa_logging_union_double_or_null_deserialize(reader);
        record->ambient_air_humidity = kaa_logging_union_double_or_null_deserialize(reader);
        record->ambient_luminosity = kaa_logging_union_double_or_null_deserialize(reader);
    }

    return record;
}

