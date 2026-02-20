/*
 * card_create_request.h
 *
 * Complete card data for payment processing
 */

#ifndef _card_create_request_H_
#define _card_create_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct card_create_request_t card_create_request_t;

#include "card_expiration_data.h"



typedef struct card_create_request_t {
    char *cvv; // string
    struct card_expiration_data_t *expiration; //model
    char *holder_name; // string
    char *number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} card_create_request_t;

__attribute__((deprecated)) card_create_request_t *card_create_request_create(
    char *cvv,
    card_expiration_data_t *expiration,
    char *holder_name,
    char *number
);

void card_create_request_free(card_create_request_t *card_create_request);

card_create_request_t *card_create_request_parseFromJSON(cJSON *card_create_requestJSON);

cJSON *card_create_request_convertToJSON(card_create_request_t *card_create_request);

#endif /* _card_create_request_H_ */

