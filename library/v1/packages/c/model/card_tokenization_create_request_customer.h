/*
 * card_tokenization_create_request_customer.h
 *
 * 
 */

#ifndef _card_tokenization_create_request_customer_H_
#define _card_tokenization_create_request_customer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct card_tokenization_create_request_customer_t card_tokenization_create_request_customer_t;

#include "address_create_request.h"
#include "card_tokenization_customer_by_id_data.h"
#include "customer_create_request.h"
#include "document_type.h"



typedef struct card_tokenization_create_request_customer_t {
    struct address_create_request_t *address; //model
    char *document_number; // string
    payconductor_api_document_type__e document_type; //referenced enum
    char *email; // string
    char *name; // string
    char *phone_number; // string
    char *id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} card_tokenization_create_request_customer_t;

__attribute__((deprecated)) card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_create(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number,
    char *id
);

void card_tokenization_create_request_customer_free(card_tokenization_create_request_customer_t *card_tokenization_create_request_customer);

card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_parseFromJSON(cJSON *card_tokenization_create_request_customerJSON);

cJSON *card_tokenization_create_request_customer_convertToJSON(card_tokenization_create_request_customer_t *card_tokenization_create_request_customer);

#endif /* _card_tokenization_create_request_customer_H_ */

