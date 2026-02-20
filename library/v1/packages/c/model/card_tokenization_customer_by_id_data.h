/*
 * card_tokenization_customer_by_id_data.h
 *
 * Reference to an existing customer by ID
 */

#ifndef _card_tokenization_customer_by_id_data_H_
#define _card_tokenization_customer_by_id_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct card_tokenization_customer_by_id_data_t card_tokenization_customer_by_id_data_t;




typedef struct card_tokenization_customer_by_id_data_t {
    char *id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} card_tokenization_customer_by_id_data_t;

__attribute__((deprecated)) card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_create(
    char *id
);

void card_tokenization_customer_by_id_data_free(card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data);

card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_parseFromJSON(cJSON *card_tokenization_customer_by_id_dataJSON);

cJSON *card_tokenization_customer_by_id_data_convertToJSON(card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data);

#endif /* _card_tokenization_customer_by_id_data_H_ */

