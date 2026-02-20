#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_bank_slip_payment_request.h"



static order_bank_slip_payment_request_t *order_bank_slip_payment_request_create_internal(
    char *payment_method,
    double expiration_in_days
    ) {
    order_bank_slip_payment_request_t *order_bank_slip_payment_request_local_var = malloc(sizeof(order_bank_slip_payment_request_t));
    if (!order_bank_slip_payment_request_local_var) {
        return NULL;
    }
    order_bank_slip_payment_request_local_var->payment_method = payment_method;
    order_bank_slip_payment_request_local_var->expiration_in_days = expiration_in_days;

    order_bank_slip_payment_request_local_var->_library_owned = 1;
    return order_bank_slip_payment_request_local_var;
}

__attribute__((deprecated)) order_bank_slip_payment_request_t *order_bank_slip_payment_request_create(
    char *payment_method,
    double expiration_in_days
    ) {
    return order_bank_slip_payment_request_create_internal (
        payment_method,
        expiration_in_days
        );
}

void order_bank_slip_payment_request_free(order_bank_slip_payment_request_t *order_bank_slip_payment_request) {
    if(NULL == order_bank_slip_payment_request){
        return ;
    }
    if(order_bank_slip_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_bank_slip_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_bank_slip_payment_request->payment_method) {
        free(order_bank_slip_payment_request->payment_method);
        order_bank_slip_payment_request->payment_method = NULL;
    }
    free(order_bank_slip_payment_request);
}

cJSON *order_bank_slip_payment_request_convertToJSON(order_bank_slip_payment_request_t *order_bank_slip_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_bank_slip_payment_request->payment_method
    if (!order_bank_slip_payment_request->payment_method) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "paymentMethod", order_bank_slip_payment_request->payment_method) == NULL) {
    goto fail; //String
    }


    // order_bank_slip_payment_request->expiration_in_days
    if(order_bank_slip_payment_request->expiration_in_days) {
    if(cJSON_AddNumberToObject(item, "expirationInDays", order_bank_slip_payment_request->expiration_in_days) == NULL) {
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

order_bank_slip_payment_request_t *order_bank_slip_payment_request_parseFromJSON(cJSON *order_bank_slip_payment_requestJSON){

    order_bank_slip_payment_request_t *order_bank_slip_payment_request_local_var = NULL;

    // order_bank_slip_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_bank_slip_payment_requestJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    if(!cJSON_IsString(payment_method))
    {
    goto end; //String
    }

    // order_bank_slip_payment_request->expiration_in_days
    cJSON *expiration_in_days = cJSON_GetObjectItemCaseSensitive(order_bank_slip_payment_requestJSON, "expirationInDays");
    if (cJSON_IsNull(expiration_in_days)) {
        expiration_in_days = NULL;
    }
    if (expiration_in_days) { 
    if(!cJSON_IsNumber(expiration_in_days))
    {
    goto end; //Numeric
    }
    }


    order_bank_slip_payment_request_local_var = order_bank_slip_payment_request_create_internal (
        strdup(payment_method->valuestring),
        expiration_in_days ? expiration_in_days->valuedouble : 0
        );

    return order_bank_slip_payment_request_local_var;
end:
    return NULL;

}
