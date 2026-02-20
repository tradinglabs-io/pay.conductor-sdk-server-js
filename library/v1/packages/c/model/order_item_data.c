#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_item_data.h"



static order_item_data_t *order_item_data_create_internal(
    char *id,
    int is_physical,
    char *name,
    double qty,
    double unit_price
    ) {
    order_item_data_t *order_item_data_local_var = malloc(sizeof(order_item_data_t));
    if (!order_item_data_local_var) {
        return NULL;
    }
    order_item_data_local_var->id = id;
    order_item_data_local_var->is_physical = is_physical;
    order_item_data_local_var->name = name;
    order_item_data_local_var->qty = qty;
    order_item_data_local_var->unit_price = unit_price;

    order_item_data_local_var->_library_owned = 1;
    return order_item_data_local_var;
}

__attribute__((deprecated)) order_item_data_t *order_item_data_create(
    char *id,
    int is_physical,
    char *name,
    double qty,
    double unit_price
    ) {
    return order_item_data_create_internal (
        id,
        is_physical,
        name,
        qty,
        unit_price
        );
}

void order_item_data_free(order_item_data_t *order_item_data) {
    if(NULL == order_item_data){
        return ;
    }
    if(order_item_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_item_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_item_data->id) {
        free(order_item_data->id);
        order_item_data->id = NULL;
    }
    if (order_item_data->name) {
        free(order_item_data->name);
        order_item_data->name = NULL;
    }
    free(order_item_data);
}

cJSON *order_item_data_convertToJSON(order_item_data_t *order_item_data) {
    cJSON *item = cJSON_CreateObject();

    // order_item_data->id
    if (!order_item_data->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", order_item_data->id) == NULL) {
    goto fail; //String
    }


    // order_item_data->is_physical
    if (!order_item_data->is_physical) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "isPhysical", order_item_data->is_physical) == NULL) {
    goto fail; //Bool
    }


    // order_item_data->name
    if (!order_item_data->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", order_item_data->name) == NULL) {
    goto fail; //String
    }


    // order_item_data->qty
    if (!order_item_data->qty) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "qty", order_item_data->qty) == NULL) {
    goto fail; //Numeric
    }


    // order_item_data->unit_price
    if (!order_item_data->unit_price) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "unitPrice", order_item_data->unit_price) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_item_data_t *order_item_data_parseFromJSON(cJSON *order_item_dataJSON){

    order_item_data_t *order_item_data_local_var = NULL;

    // order_item_data->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_item_dataJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // order_item_data->is_physical
    cJSON *is_physical = cJSON_GetObjectItemCaseSensitive(order_item_dataJSON, "isPhysical");
    if (cJSON_IsNull(is_physical)) {
        is_physical = NULL;
    }
    if (!is_physical) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_physical))
    {
    goto end; //Bool
    }

    // order_item_data->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_item_dataJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // order_item_data->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(order_item_dataJSON, "qty");
    if (cJSON_IsNull(qty)) {
        qty = NULL;
    }
    if (!qty) {
        goto end;
    }

    
    if(!cJSON_IsNumber(qty))
    {
    goto end; //Numeric
    }

    // order_item_data->unit_price
    cJSON *unit_price = cJSON_GetObjectItemCaseSensitive(order_item_dataJSON, "unitPrice");
    if (cJSON_IsNull(unit_price)) {
        unit_price = NULL;
    }
    if (!unit_price) {
        goto end;
    }

    
    if(!cJSON_IsNumber(unit_price))
    {
    goto end; //Numeric
    }


    order_item_data_local_var = order_item_data_create_internal (
        strdup(id->valuestring),
        is_physical->valueint,
        strdup(name->valuestring),
        qty->valuedouble,
        unit_price->valuedouble
        );

    return order_item_data_local_var;
end:
    return NULL;

}
