/*
 * address_create_request.h
 *
 * Schema for creating a new address
 */

#ifndef _address_create_request_H_
#define _address_create_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_create_request_t address_create_request_t;




typedef struct address_create_request_t {
    char *city; // string
    char *country; // string
    char *neighborhood; // string
    char *number; // string
    char *state; // string
    char *street; // string
    char *zip_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} address_create_request_t;

__attribute__((deprecated)) address_create_request_t *address_create_request_create(
    char *city,
    char *country,
    char *neighborhood,
    char *number,
    char *state,
    char *street,
    char *zip_code
);

void address_create_request_free(address_create_request_t *address_create_request);

address_create_request_t *address_create_request_parseFromJSON(cJSON *address_create_requestJSON);

cJSON *address_create_request_convertToJSON(address_create_request_t *address_create_request);

#endif /* _address_create_request_H_ */

