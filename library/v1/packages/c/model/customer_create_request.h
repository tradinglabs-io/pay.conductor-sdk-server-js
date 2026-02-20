/*
 * customer_create_request.h
 *
 * Schema for creating a new customer
 */

#ifndef _customer_create_request_H_
#define _customer_create_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_create_request_t customer_create_request_t;

#include "address_create_request.h"
#include "document_type.h"



typedef struct customer_create_request_t {
    struct address_create_request_t *address; //model
    char *document_number; // string
    payconductor_api_document_type__e document_type; //referenced enum
    char *email; // string
    char *name; // string
    char *phone_number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_create_request_t;

__attribute__((deprecated)) customer_create_request_t *customer_create_request_create(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number
);

void customer_create_request_free(customer_create_request_t *customer_create_request);

customer_create_request_t *customer_create_request_parseFromJSON(cJSON *customer_create_requestJSON);

cJSON *customer_create_request_convertToJSON(customer_create_request_t *customer_create_request);

#endif /* _customer_create_request_H_ */

