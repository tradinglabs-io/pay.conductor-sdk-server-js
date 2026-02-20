#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_list_response.h"



static customer_list_response_t *customer_list_response_create_internal(
    list_t *data,
    customer_list_pagination_t *pagination
    ) {
    customer_list_response_t *customer_list_response_local_var = malloc(sizeof(customer_list_response_t));
    if (!customer_list_response_local_var) {
        return NULL;
    }
    customer_list_response_local_var->data = data;
    customer_list_response_local_var->pagination = pagination;

    customer_list_response_local_var->_library_owned = 1;
    return customer_list_response_local_var;
}

__attribute__((deprecated)) customer_list_response_t *customer_list_response_create(
    list_t *data,
    customer_list_pagination_t *pagination
    ) {
    return customer_list_response_create_internal (
        data,
        pagination
        );
}

void customer_list_response_free(customer_list_response_t *customer_list_response) {
    if(NULL == customer_list_response){
        return ;
    }
    if(customer_list_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_list_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_list_response->data) {
        list_ForEach(listEntry, customer_list_response->data) {
            customer_read_response_free(listEntry->data);
        }
        list_freeList(customer_list_response->data);
        customer_list_response->data = NULL;
    }
    if (customer_list_response->pagination) {
        customer_list_pagination_free(customer_list_response->pagination);
        customer_list_response->pagination = NULL;
    }
    free(customer_list_response);
}

cJSON *customer_list_response_convertToJSON(customer_list_response_t *customer_list_response) {
    cJSON *item = cJSON_CreateObject();

    // customer_list_response->data
    if (!customer_list_response->data) {
        goto fail;
    }
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (customer_list_response->data) {
    list_ForEach(dataListEntry, customer_list_response->data) {
    cJSON *itemLocal = customer_read_response_convertToJSON(dataListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(data, itemLocal);
    }
    }


    // customer_list_response->pagination
    if (!customer_list_response->pagination) {
        goto fail;
    }
    cJSON *pagination_local_JSON = customer_list_pagination_convertToJSON(customer_list_response->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_list_response_t *customer_list_response_parseFromJSON(cJSON *customer_list_responseJSON){

    customer_list_response_t *customer_list_response_local_var = NULL;

    // define the local list for customer_list_response->data
    list_t *dataList = NULL;

    // define the local variable for customer_list_response->pagination
    customer_list_pagination_t *pagination_local_nonprim = NULL;

    // customer_list_response->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(customer_list_responseJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (!data) {
        goto end;
    }

    
    cJSON *data_local_nonprimitive = NULL;
    if(!cJSON_IsArray(data)){
        goto end; //nonprimitive container
    }

    dataList = list_createList();

    cJSON_ArrayForEach(data_local_nonprimitive,data )
    {
        if(!cJSON_IsObject(data_local_nonprimitive)){
            goto end;
        }
        customer_read_response_t *dataItem = customer_read_response_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }

    // customer_list_response->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(customer_list_responseJSON, "pagination");
    if (cJSON_IsNull(pagination)) {
        pagination = NULL;
    }
    if (!pagination) {
        goto end;
    }

    
    pagination_local_nonprim = customer_list_pagination_parseFromJSON(pagination); //nonprimitive


    customer_list_response_local_var = customer_list_response_create_internal (
        dataList,
        pagination_local_nonprim
        );

    return customer_list_response_local_var;
end:
    if (dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dataList) {
            customer_read_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    if (pagination_local_nonprim) {
        customer_list_pagination_free(pagination_local_nonprim);
        pagination_local_nonprim = NULL;
    }
    return NULL;

}
