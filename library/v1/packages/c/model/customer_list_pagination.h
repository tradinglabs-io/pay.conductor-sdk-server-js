/*
 * customer_list_pagination.h
 *
 * Pagination information for customer list
 */

#ifndef _customer_list_pagination_H_
#define _customer_list_pagination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_list_pagination_t customer_list_pagination_t;




typedef struct customer_list_pagination_t {
    double current_page; //numeric
    double page_size; //numeric
    double total_items; //numeric
    double total_pages; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} customer_list_pagination_t;

__attribute__((deprecated)) customer_list_pagination_t *customer_list_pagination_create(
    double current_page,
    double page_size,
    double total_items,
    double total_pages
);

void customer_list_pagination_free(customer_list_pagination_t *customer_list_pagination);

customer_list_pagination_t *customer_list_pagination_parseFromJSON(cJSON *customer_list_paginationJSON);

cJSON *customer_list_pagination_convertToJSON(customer_list_pagination_t *customer_list_pagination);

#endif /* _customer_list_pagination_H_ */

