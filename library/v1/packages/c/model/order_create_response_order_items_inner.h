/*
 * order_create_response_order_items_inner.h
 *
 * 
 */

#ifndef _order_create_response_order_items_inner_H_
#define _order_create_response_order_items_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_create_response_order_items_inner_t order_create_response_order_items_inner_t;




typedef struct order_create_response_order_items_inner_t {
    char *external_id; // string
    char *id; // string
    char *name; // string
    double qty; //numeric
    double total_amount; //numeric
    double total_net_amount; //numeric
    double unity_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_create_response_order_items_inner_t;

__attribute__((deprecated)) order_create_response_order_items_inner_t *order_create_response_order_items_inner_create(
    char *external_id,
    char *id,
    char *name,
    double qty,
    double total_amount,
    double total_net_amount,
    double unity_price
);

void order_create_response_order_items_inner_free(order_create_response_order_items_inner_t *order_create_response_order_items_inner);

order_create_response_order_items_inner_t *order_create_response_order_items_inner_parseFromJSON(cJSON *order_create_response_order_items_innerJSON);

cJSON *order_create_response_order_items_inner_convertToJSON(order_create_response_order_items_inner_t *order_create_response_order_items_inner);

#endif /* _order_create_response_order_items_inner_H_ */

