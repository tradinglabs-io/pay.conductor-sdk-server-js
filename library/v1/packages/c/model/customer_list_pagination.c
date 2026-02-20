#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_list_pagination.h"



static customer_list_pagination_t *customer_list_pagination_create_internal(
    double current_page,
    double page_size,
    double total_items,
    double total_pages
    ) {
    customer_list_pagination_t *customer_list_pagination_local_var = malloc(sizeof(customer_list_pagination_t));
    if (!customer_list_pagination_local_var) {
        return NULL;
    }
    customer_list_pagination_local_var->current_page = current_page;
    customer_list_pagination_local_var->page_size = page_size;
    customer_list_pagination_local_var->total_items = total_items;
    customer_list_pagination_local_var->total_pages = total_pages;

    customer_list_pagination_local_var->_library_owned = 1;
    return customer_list_pagination_local_var;
}

__attribute__((deprecated)) customer_list_pagination_t *customer_list_pagination_create(
    double current_page,
    double page_size,
    double total_items,
    double total_pages
    ) {
    return customer_list_pagination_create_internal (
        current_page,
        page_size,
        total_items,
        total_pages
        );
}

void customer_list_pagination_free(customer_list_pagination_t *customer_list_pagination) {
    if(NULL == customer_list_pagination){
        return ;
    }
    if(customer_list_pagination->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_list_pagination_free");
        return ;
    }
    listEntry_t *listEntry;
    free(customer_list_pagination);
}

cJSON *customer_list_pagination_convertToJSON(customer_list_pagination_t *customer_list_pagination) {
    cJSON *item = cJSON_CreateObject();

    // customer_list_pagination->current_page
    if (!customer_list_pagination->current_page) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "currentPage", customer_list_pagination->current_page) == NULL) {
    goto fail; //Numeric
    }


    // customer_list_pagination->page_size
    if (!customer_list_pagination->page_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pageSize", customer_list_pagination->page_size) == NULL) {
    goto fail; //Numeric
    }


    // customer_list_pagination->total_items
    if (!customer_list_pagination->total_items) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "totalItems", customer_list_pagination->total_items) == NULL) {
    goto fail; //Numeric
    }


    // customer_list_pagination->total_pages
    if (!customer_list_pagination->total_pages) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "totalPages", customer_list_pagination->total_pages) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_list_pagination_t *customer_list_pagination_parseFromJSON(cJSON *customer_list_paginationJSON){

    customer_list_pagination_t *customer_list_pagination_local_var = NULL;

    // customer_list_pagination->current_page
    cJSON *current_page = cJSON_GetObjectItemCaseSensitive(customer_list_paginationJSON, "currentPage");
    if (cJSON_IsNull(current_page)) {
        current_page = NULL;
    }
    if (!current_page) {
        goto end;
    }

    
    if(!cJSON_IsNumber(current_page))
    {
    goto end; //Numeric
    }

    // customer_list_pagination->page_size
    cJSON *page_size = cJSON_GetObjectItemCaseSensitive(customer_list_paginationJSON, "pageSize");
    if (cJSON_IsNull(page_size)) {
        page_size = NULL;
    }
    if (!page_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(page_size))
    {
    goto end; //Numeric
    }

    // customer_list_pagination->total_items
    cJSON *total_items = cJSON_GetObjectItemCaseSensitive(customer_list_paginationJSON, "totalItems");
    if (cJSON_IsNull(total_items)) {
        total_items = NULL;
    }
    if (!total_items) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_items))
    {
    goto end; //Numeric
    }

    // customer_list_pagination->total_pages
    cJSON *total_pages = cJSON_GetObjectItemCaseSensitive(customer_list_paginationJSON, "totalPages");
    if (cJSON_IsNull(total_pages)) {
        total_pages = NULL;
    }
    if (!total_pages) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_pages))
    {
    goto end; //Numeric
    }


    customer_list_pagination_local_var = customer_list_pagination_create_internal (
        current_page->valuedouble,
        page_size->valuedouble,
        total_items->valuedouble,
        total_pages->valuedouble
        );

    return customer_list_pagination_local_var;
end:
    return NULL;

}
