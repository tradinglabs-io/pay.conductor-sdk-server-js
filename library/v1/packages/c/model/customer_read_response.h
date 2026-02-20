/*
 * customer_read_response.h
 *
 * Customer response with complete information
 */

#ifndef _customer_read_response_H_
#define _customer_read_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_read_response_t customer_read_response_t;

#include "customer_address_response.h"
#include "document_type.h"



typedef struct customer_read_response_t {
    char *id; // string
    char *name; // string
    char *email; // string
    payconductor_api_document_type__e document_type; //referenced enum
    char *document_number; // string
    char *phone_number; // string
    struct customer_address_response_t *address; //model
    char *created_at; // string
    char *updated_at; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_read_response_t;

__attribute__((deprecated)) customer_read_response_t *customer_read_response_create(
    char *id,
    char *name,
    char *email,
    payconductor_api_document_type__e document_type,
    char *document_number,
    char *phone_number,
    customer_address_response_t *address,
    char *created_at,
    char *updated_at
);

void customer_read_response_free(customer_read_response_t *customer_read_response);

customer_read_response_t *customer_read_response_parseFromJSON(cJSON *customer_read_responseJSON);

cJSON *customer_read_response_convertToJSON(customer_read_response_t *customer_read_response);

#endif /* _customer_read_response_H_ */

