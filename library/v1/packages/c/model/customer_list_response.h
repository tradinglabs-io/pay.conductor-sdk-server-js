/*
 * customer_list_response.h
 *
 * Paginated list of customers
 */

#ifndef _customer_list_response_H_
#define _customer_list_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_list_response_t customer_list_response_t;

#include "customer_list_pagination.h"
#include "customer_read_response.h"



typedef struct customer_list_response_t {
    list_t *data; //nonprimitive container
    struct customer_list_pagination_t *pagination; //model

    int _library_owned; // Is the library responsible for freeing this object?
} customer_list_response_t;

__attribute__((deprecated)) customer_list_response_t *customer_list_response_create(
    list_t *data,
    customer_list_pagination_t *pagination
);

void customer_list_response_free(customer_list_response_t *customer_list_response);

customer_list_response_t *customer_list_response_parseFromJSON(cJSON *customer_list_responseJSON);

cJSON *customer_list_response_convertToJSON(customer_list_response_t *customer_list_response);

#endif /* _customer_list_response_H_ */

