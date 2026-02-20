#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_create_response_order_items_inner.h"



static order_create_response_order_items_inner_t *order_create_response_order_items_inner_create_internal(
    char *external_id,
    char *id,
    char *name,
    double qty,
    double total_amount,
    double total_net_amount,
    double unity_price
    ) {
    order_create_response_order_items_inner_t *order_create_response_order_items_inner_local_var = malloc(sizeof(order_create_response_order_items_inner_t));
    if (!order_create_response_order_items_inner_local_var) {
        return NULL;
    }
    order_create_response_order_items_inner_local_var->external_id = external_id;
    order_create_response_order_items_inner_local_var->id = id;
    order_create_response_order_items_inner_local_var->name = name;
    order_create_response_order_items_inner_local_var->qty = qty;
    order_create_response_order_items_inner_local_var->total_amount = total_amount;
    order_create_response_order_items_inner_local_var->total_net_amount = total_net_amount;
    order_create_response_order_items_inner_local_var->unity_price = unity_price;

    order_create_response_order_items_inner_local_var->_library_owned = 1;
    return order_create_response_order_items_inner_local_var;
}

__attribute__((deprecated)) order_create_response_order_items_inner_t *order_create_response_order_items_inner_create(
    char *external_id,
    char *id,
    char *name,
    double qty,
    double total_amount,
    double total_net_amount,
    double unity_price
    ) {
    return order_create_response_order_items_inner_create_internal (
        external_id,
        id,
        name,
        qty,
        total_amount,
        total_net_amount,
        unity_price
        );
}

void order_create_response_order_items_inner_free(order_create_response_order_items_inner_t *order_create_response_order_items_inner) {
    if(NULL == order_create_response_order_items_inner){
        return ;
    }
    if(order_create_response_order_items_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_create_response_order_items_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_create_response_order_items_inner->external_id) {
        free(order_create_response_order_items_inner->external_id);
        order_create_response_order_items_inner->external_id = NULL;
    }
    if (order_create_response_order_items_inner->id) {
        free(order_create_response_order_items_inner->id);
        order_create_response_order_items_inner->id = NULL;
    }
    if (order_create_response_order_items_inner->name) {
        free(order_create_response_order_items_inner->name);
        order_create_response_order_items_inner->name = NULL;
    }
    free(order_create_response_order_items_inner);
}

cJSON *order_create_response_order_items_inner_convertToJSON(order_create_response_order_items_inner_t *order_create_response_order_items_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_create_response_order_items_inner->external_id
    if (!order_create_response_order_items_inner->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "externalId", order_create_response_order_items_inner->external_id) == NULL) {
    goto fail; //String
    }


    // order_create_response_order_items_inner->id
    if (!order_create_response_order_items_inner->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", order_create_response_order_items_inner->id) == NULL) {
    goto fail; //String
    }


    // order_create_response_order_items_inner->name
    if (!order_create_response_order_items_inner->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", order_create_response_order_items_inner->name) == NULL) {
    goto fail; //String
    }


    // order_create_response_order_items_inner->qty
    if (!order_create_response_order_items_inner->qty) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "qty", order_create_response_order_items_inner->qty) == NULL) {
    goto fail; //Numeric
    }


    // order_create_response_order_items_inner->total_amount
    if (!order_create_response_order_items_inner->total_amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "totalAmount", order_create_response_order_items_inner->total_amount) == NULL) {
    goto fail; //Numeric
    }


    // order_create_response_order_items_inner->total_net_amount
    if (!order_create_response_order_items_inner->total_net_amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "totalNetAmount", order_create_response_order_items_inner->total_net_amount) == NULL) {
    goto fail; //Numeric
    }


    // order_create_response_order_items_inner->unity_price
    if (!order_create_response_order_items_inner->unity_price) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "unityPrice", order_create_response_order_items_inner->unity_price) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_create_response_order_items_inner_t *order_create_response_order_items_inner_parseFromJSON(cJSON *order_create_response_order_items_innerJSON){

    order_create_response_order_items_inner_t *order_create_response_order_items_inner_local_var = NULL;

    // order_create_response_order_items_inner->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "externalId");
    if (cJSON_IsNull(external_id)) {
        external_id = NULL;
    }
    if (!external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }

    // order_create_response_order_items_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "id");
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

    // order_create_response_order_items_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "name");
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

    // order_create_response_order_items_inner->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "qty");
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

    // order_create_response_order_items_inner->total_amount
    cJSON *total_amount = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "totalAmount");
    if (cJSON_IsNull(total_amount)) {
        total_amount = NULL;
    }
    if (!total_amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_amount))
    {
    goto end; //Numeric
    }

    // order_create_response_order_items_inner->total_net_amount
    cJSON *total_net_amount = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "totalNetAmount");
    if (cJSON_IsNull(total_net_amount)) {
        total_net_amount = NULL;
    }
    if (!total_net_amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_net_amount))
    {
    goto end; //Numeric
    }

    // order_create_response_order_items_inner->unity_price
    cJSON *unity_price = cJSON_GetObjectItemCaseSensitive(order_create_response_order_items_innerJSON, "unityPrice");
    if (cJSON_IsNull(unity_price)) {
        unity_price = NULL;
    }
    if (!unity_price) {
        goto end;
    }

    
    if(!cJSON_IsNumber(unity_price))
    {
    goto end; //Numeric
    }


    order_create_response_order_items_inner_local_var = order_create_response_order_items_inner_create_internal (
        strdup(external_id->valuestring),
        strdup(id->valuestring),
        strdup(name->valuestring),
        qty->valuedouble,
        total_amount->valuedouble,
        total_net_amount->valuedouble,
        unity_price->valuedouble
        );

    return order_create_response_order_items_inner_local_var;
end:
    return NULL;

}
