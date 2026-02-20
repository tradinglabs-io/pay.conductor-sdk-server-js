/*
 * customer_update_request.h
 *
 * Schema for updating customer information
 */

#ifndef _customer_update_request_H_
#define _customer_update_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_update_request_t customer_update_request_t;

#include "address_create_request.h"
#include "document_type.h"



typedef struct customer_update_request_t {
    struct address_create_request_t *address; //model
    char *document_number; // string
    payconductor_api_document_type__e document_type; //referenced enum
    char *email; // string
    char *name; // string
    char *phone_number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_update_request_t;

__attribute__((deprecated)) customer_update_request_t *customer_update_request_create(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number
);

void customer_update_request_free(customer_update_request_t *customer_update_request);

customer_update_request_t *customer_update_request_parseFromJSON(cJSON *customer_update_requestJSON);

cJSON *customer_update_request_convertToJSON(customer_update_request_t *customer_update_request);

#endif /* _customer_update_request_H_ */

