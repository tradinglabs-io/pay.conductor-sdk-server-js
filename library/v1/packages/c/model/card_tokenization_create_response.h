/*
 * card_tokenization_create_response.h
 *
 * Response containing customer ID and card token
 */

#ifndef _card_tokenization_create_response_H_
#define _card_tokenization_create_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct card_tokenization_create_response_t card_tokenization_create_response_t;




typedef struct card_tokenization_create_response_t {
    char *customer_id; // string
    char *token; // string

    int _library_owned; // Is the library responsible for freeing this object?
} card_tokenization_create_response_t;

__attribute__((deprecated)) card_tokenization_create_response_t *card_tokenization_create_response_create(
    char *customer_id,
    char *token
);

void card_tokenization_create_response_free(card_tokenization_create_response_t *card_tokenization_create_response);

card_tokenization_create_response_t *card_tokenization_create_response_parseFromJSON(cJSON *card_tokenization_create_responseJSON);

cJSON *card_tokenization_create_response_convertToJSON(card_tokenization_create_response_t *card_tokenization_create_response);

#endif /* _card_tokenization_create_response_H_ */

