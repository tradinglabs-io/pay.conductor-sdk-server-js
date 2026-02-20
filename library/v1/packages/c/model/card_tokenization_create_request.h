/*
 * card_tokenization_create_request.h
 *
 * Data for creating a customer card with customer information
 */

#ifndef _card_tokenization_create_request_H_
#define _card_tokenization_create_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct card_tokenization_create_request_t card_tokenization_create_request_t;

#include "card_create_request.h"
#include "card_tokenization_create_request_customer.h"



typedef struct card_tokenization_create_request_t {
    struct card_create_request_t *card; //model
    int save_card; //boolean
    struct card_tokenization_create_request_customer_t *customer; //model

    int _library_owned; // Is the library responsible for freeing this object?
} card_tokenization_create_request_t;

__attribute__((deprecated)) card_tokenization_create_request_t *card_tokenization_create_request_create(
    card_create_request_t *card,
    int save_card,
    card_tokenization_create_request_customer_t *customer
);

void card_tokenization_create_request_free(card_tokenization_create_request_t *card_tokenization_create_request);

card_tokenization_create_request_t *card_tokenization_create_request_parseFromJSON(cJSON *card_tokenization_create_requestJSON);

cJSON *card_tokenization_create_request_convertToJSON(card_tokenization_create_request_t *card_tokenization_create_request);

#endif /* _card_tokenization_create_request_H_ */

