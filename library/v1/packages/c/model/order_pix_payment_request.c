#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_pix_payment_request.h"



static order_pix_payment_request_t *order_pix_payment_request_create_internal(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds
    ) {
    order_pix_payment_request_t *order_pix_payment_request_local_var = malloc(sizeof(order_pix_payment_request_t));
    if (!order_pix_payment_request_local_var) {
        return NULL;
    }
    order_pix_payment_request_local_var->payment_method = payment_method;
    order_pix_payment_request_local_var->expiration_in_seconds = expiration_in_seconds;

    order_pix_payment_request_local_var->_library_owned = 1;
    return order_pix_payment_request_local_var;
}

__attribute__((deprecated)) order_pix_payment_request_t *order_pix_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds
    ) {
    return order_pix_payment_request_create_internal (
        payment_method,
        expiration_in_seconds
        );
}

void order_pix_payment_request_free(order_pix_payment_request_t *order_pix_payment_request) {
    if(NULL == order_pix_payment_request){
        return ;
    }
    if(order_pix_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_pix_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    free(order_pix_payment_request);
}

cJSON *order_pix_payment_request_convertToJSON(order_pix_payment_request_t *order_pix_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_pix_payment_request->payment_method
    if (payconductor_api_payment_method__NULL == order_pix_payment_request->payment_method) {
        goto fail;
    }
    cJSON *payment_method_local_JSON = payment_method_convertToJSON(order_pix_payment_request->payment_method);
    if(payment_method_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "paymentMethod", payment_method_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // order_pix_payment_request->expiration_in_seconds
    if(order_pix_payment_request->expiration_in_seconds) {
    if(cJSON_AddNumberToObject(item, "expirationInSeconds", order_pix_payment_request->expiration_in_seconds) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_pix_payment_request_t *order_pix_payment_request_parseFromJSON(cJSON *order_pix_payment_requestJSON){

    order_pix_payment_request_t *order_pix_payment_request_local_var = NULL;

    // define the local variable for order_pix_payment_request->payment_method
    payconductor_api_payment_method__e payment_method_local_nonprim = 0;

    // order_pix_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_pix_payment_requestJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    payment_method_local_nonprim = payment_method_parseFromJSON(payment_method); //custom

    // order_pix_payment_request->expiration_in_seconds
    cJSON *expiration_in_seconds = cJSON_GetObjectItemCaseSensitive(order_pix_payment_requestJSON, "expirationInSeconds");
    if (cJSON_IsNull(expiration_in_seconds)) {
        expiration_in_seconds = NULL;
    }
    if (expiration_in_seconds) { 
    if(!cJSON_IsNumber(expiration_in_seconds))
    {
    goto end; //Numeric
    }
    }


    order_pix_payment_request_local_var = order_pix_payment_request_create_internal (
        payment_method_local_nonprim,
        expiration_in_seconds ? expiration_in_seconds->valuedouble : 0
        );

    return order_pix_payment_request_local_var;
end:
    if (payment_method_local_nonprim) {
        payment_method_local_nonprim = 0;
    }
    return NULL;

}
