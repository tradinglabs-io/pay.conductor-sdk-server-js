/*
 * order_item_data.h
 *
 * Product or service item in the order
 */

#ifndef _order_item_data_H_
#define _order_item_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_item_data_t order_item_data_t;




typedef struct order_item_data_t {
    char *id; // string
    int is_physical; //boolean
    char *name; // string
    double qty; //numeric
    double unit_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_item_data_t;

__attribute__((deprecated)) order_item_data_t *order_item_data_create(
    char *id,
    int is_physical,
    char *name,
    double qty,
    double unit_price
);

void order_item_data_free(order_item_data_t *order_item_data);

order_item_data_t *order_item_data_parseFromJSON(cJSON *order_item_dataJSON);

cJSON *order_item_data_convertToJSON(order_item_data_t *order_item_data);

#endif /* _order_item_data_H_ */

