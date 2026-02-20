/*
 * customer_address_response.h
 *
 * Customer address information
 */

#ifndef _customer_address_response_H_
#define _customer_address_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_address_response_t customer_address_response_t;




typedef struct customer_address_response_t {
    char *id; // string
    char *street; // string
    char *number; // string
    char *neighborhood; // string
    char *city; // string
    char *state; // string
    char *zip_code; // string
    char *country; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_address_response_t;

__attribute__((deprecated)) customer_address_response_t *customer_address_response_create(
    char *id,
    char *street,
    char *number,
    char *neighborhood,
    char *city,
    char *state,
    char *zip_code,
    char *country
);

void customer_address_response_free(customer_address_response_t *customer_address_response);

customer_address_response_t *customer_address_response_parseFromJSON(cJSON *customer_address_responseJSON);

cJSON *customer_address_response_convertToJSON(customer_address_response_t *customer_address_response);

#endif /* _customer_address_response_H_ */

