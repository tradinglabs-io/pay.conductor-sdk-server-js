/*
 * order_tokenized_card_data.h
 *
 * 
 */

#ifndef _order_tokenized_card_data_H_
#define _order_tokenized_card_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_tokenized_card_data_t order_tokenized_card_data_t;




typedef struct order_tokenized_card_data_t {
    char *first_six_card_number; // string
    char *token; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_tokenized_card_data_t;

__attribute__((deprecated)) order_tokenized_card_data_t *order_tokenized_card_data_create(
    char *first_six_card_number,
    char *token
);

void order_tokenized_card_data_free(order_tokenized_card_data_t *order_tokenized_card_data);

order_tokenized_card_data_t *order_tokenized_card_data_parseFromJSON(cJSON *order_tokenized_card_dataJSON);

cJSON *order_tokenized_card_data_convertToJSON(order_tokenized_card_data_t *order_tokenized_card_data);

#endif /* _order_tokenized_card_data_H_ */

