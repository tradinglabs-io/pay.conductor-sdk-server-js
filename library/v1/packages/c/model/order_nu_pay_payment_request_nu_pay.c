#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_nu_pay_payment_request_nu_pay.h"



static order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_create_internal(
    char *cancel_url,
    char *merchant_name,
    char *return_url,
    char *store_name
    ) {
    order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_local_var = malloc(sizeof(order_nu_pay_payment_request_nu_pay_t));
    if (!order_nu_pay_payment_request_nu_pay_local_var) {
        return NULL;
    }
    order_nu_pay_payment_request_nu_pay_local_var->cancel_url = cancel_url;
    order_nu_pay_payment_request_nu_pay_local_var->merchant_name = merchant_name;
    order_nu_pay_payment_request_nu_pay_local_var->return_url = return_url;
    order_nu_pay_payment_request_nu_pay_local_var->store_name = store_name;

    order_nu_pay_payment_request_nu_pay_local_var->_library_owned = 1;
    return order_nu_pay_payment_request_nu_pay_local_var;
}

__attribute__((deprecated)) order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_create(
    char *cancel_url,
    char *merchant_name,
    char *return_url,
    char *store_name
    ) {
    return order_nu_pay_payment_request_nu_pay_create_internal (
        cancel_url,
        merchant_name,
        return_url,
        store_name
        );
}

void order_nu_pay_payment_request_nu_pay_free(order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay) {
    if(NULL == order_nu_pay_payment_request_nu_pay){
        return ;
    }
    if(order_nu_pay_payment_request_nu_pay->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_nu_pay_payment_request_nu_pay_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_nu_pay_payment_request_nu_pay->cancel_url) {
        free(order_nu_pay_payment_request_nu_pay->cancel_url);
        order_nu_pay_payment_request_nu_pay->cancel_url = NULL;
    }
    if (order_nu_pay_payment_request_nu_pay->merchant_name) {
        free(order_nu_pay_payment_request_nu_pay->merchant_name);
        order_nu_pay_payment_request_nu_pay->merchant_name = NULL;
    }
    if (order_nu_pay_payment_request_nu_pay->return_url) {
        free(order_nu_pay_payment_request_nu_pay->return_url);
        order_nu_pay_payment_request_nu_pay->return_url = NULL;
    }
    if (order_nu_pay_payment_request_nu_pay->store_name) {
        free(order_nu_pay_payment_request_nu_pay->store_name);
        order_nu_pay_payment_request_nu_pay->store_name = NULL;
    }
    free(order_nu_pay_payment_request_nu_pay);
}

cJSON *order_nu_pay_payment_request_nu_pay_convertToJSON(order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay) {
    cJSON *item = cJSON_CreateObject();

    // order_nu_pay_payment_request_nu_pay->cancel_url
    if (!order_nu_pay_payment_request_nu_pay->cancel_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cancelUrl", order_nu_pay_payment_request_nu_pay->cancel_url) == NULL) {
    goto fail; //String
    }


    // order_nu_pay_payment_request_nu_pay->merchant_name
    if (!order_nu_pay_payment_request_nu_pay->merchant_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "merchantName", order_nu_pay_payment_request_nu_pay->merchant_name) == NULL) {
    goto fail; //String
    }


    // order_nu_pay_payment_request_nu_pay->return_url
    if (!order_nu_pay_payment_request_nu_pay->return_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "returnUrl", order_nu_pay_payment_request_nu_pay->return_url) == NULL) {
    goto fail; //String
    }


    // order_nu_pay_payment_request_nu_pay->store_name
    if(order_nu_pay_payment_request_nu_pay->store_name) {
    if(cJSON_AddStringToObject(item, "storeName", order_nu_pay_payment_request_nu_pay->store_name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_parseFromJSON(cJSON *order_nu_pay_payment_request_nu_payJSON){

    order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_local_var = NULL;

    // order_nu_pay_payment_request_nu_pay->cancel_url
    cJSON *cancel_url = cJSON_GetObjectItemCaseSensitive(order_nu_pay_payment_request_nu_payJSON, "cancelUrl");
    if (cJSON_IsNull(cancel_url)) {
        cancel_url = NULL;
    }
    if (!cancel_url) {
        goto end;
    }

    
    if(!cJSON_IsString(cancel_url))
    {
    goto end; //String
    }

    // order_nu_pay_payment_request_nu_pay->merchant_name
    cJSON *merchant_name = cJSON_GetObjectItemCaseSensitive(order_nu_pay_payment_request_nu_payJSON, "merchantName");
    if (cJSON_IsNull(merchant_name)) {
        merchant_name = NULL;
    }
    if (!merchant_name) {
        goto end;
    }

    
    if(!cJSON_IsString(merchant_name))
    {
    goto end; //String
    }

    // order_nu_pay_payment_request_nu_pay->return_url
    cJSON *return_url = cJSON_GetObjectItemCaseSensitive(order_nu_pay_payment_request_nu_payJSON, "returnUrl");
    if (cJSON_IsNull(return_url)) {
        return_url = NULL;
    }
    if (!return_url) {
        goto end;
    }

    
    if(!cJSON_IsString(return_url))
    {
    goto end; //String
    }

    // order_nu_pay_payment_request_nu_pay->store_name
    cJSON *store_name = cJSON_GetObjectItemCaseSensitive(order_nu_pay_payment_request_nu_payJSON, "storeName");
    if (cJSON_IsNull(store_name)) {
        store_name = NULL;
    }
    if (store_name) { 
    if(!cJSON_IsString(store_name) && !cJSON_IsNull(store_name))
    {
    goto end; //String
    }
    }


    order_nu_pay_payment_request_nu_pay_local_var = order_nu_pay_payment_request_nu_pay_create_internal (
        strdup(cancel_url->valuestring),
        strdup(merchant_name->valuestring),
        strdup(return_url->valuestring),
        store_name && !cJSON_IsNull(store_name) ? strdup(store_name->valuestring) : NULL
        );

    return order_nu_pay_payment_request_nu_pay_local_var;
end:
    return NULL;

}
