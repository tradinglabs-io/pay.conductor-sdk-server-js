#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_nu_pay_payment_request.h"



static order_nu_pay_payment_request_t *order_nu_pay_payment_request_create_internal(
    char *payment_method,
    order_nu_pay_payment_request_nu_pay_t *nu_pay
    ) {
    order_nu_pay_payment_request_t *order_nu_pay_payment_request_local_var = malloc(sizeof(order_nu_pay_payment_request_t));
    if (!order_nu_pay_payment_request_local_var) {
        return NULL;
    }
    order_nu_pay_payment_request_local_var->payment_method = payment_method;
    order_nu_pay_payment_request_local_var->nu_pay = nu_pay;

    order_nu_pay_payment_request_local_var->_library_owned = 1;
    return order_nu_pay_payment_request_local_var;
}

__attribute__((deprecated)) order_nu_pay_payment_request_t *order_nu_pay_payment_request_create(
    char *payment_method,
    order_nu_pay_payment_request_nu_pay_t *nu_pay
    ) {
    return order_nu_pay_payment_request_create_internal (
        payment_method,
        nu_pay
        );
}

void order_nu_pay_payment_request_free(order_nu_pay_payment_request_t *order_nu_pay_payment_request) {
    if(NULL == order_nu_pay_payment_request){
        return ;
    }
    if(order_nu_pay_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_nu_pay_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_nu_pay_payment_request->payment_method) {
        free(order_nu_pay_payment_request->payment_method);
        order_nu_pay_payment_request->payment_method = NULL;
    }
    if (order_nu_pay_payment_request->nu_pay) {
        order_nu_pay_payment_request_nu_pay_free(order_nu_pay_payment_request->nu_pay);
        order_nu_pay_payment_request->nu_pay = NULL;
    }
    free(order_nu_pay_payment_request);
}

cJSON *order_nu_pay_payment_request_convertToJSON(order_nu_pay_payment_request_t *order_nu_pay_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_nu_pay_payment_request->payment_method
    if (!order_nu_pay_payment_request->payment_method) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "paymentMethod", order_nu_pay_payment_request->payment_method) == NULL) {
    goto fail; //String
    }


    // order_nu_pay_payment_request->nu_pay
    if (!order_nu_pay_payment_request->nu_pay) {
        goto fail;
    }
    cJSON *nu_pay_local_JSON = order_nu_pay_payment_request_nu_pay_convertToJSON(order_nu_pay_payment_request->nu_pay);
    if(nu_pay_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nuPay", nu_pay_local_JSON);
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

order_nu_pay_payment_request_t *order_nu_pay_payment_request_parseFromJSON(cJSON *order_nu_pay_payment_requestJSON){

    order_nu_pay_payment_request_t *order_nu_pay_payment_request_local_var = NULL;

    // define the local variable for order_nu_pay_payment_request->nu_pay
    order_nu_pay_payment_request_nu_pay_t *nu_pay_local_nonprim = NULL;

    // order_nu_pay_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_nu_pay_payment_requestJSON, "paymentMethod");
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

    // order_nu_pay_payment_request->nu_pay
    cJSON *nu_pay = cJSON_GetObjectItemCaseSensitive(order_nu_pay_payment_requestJSON, "nuPay");
    if (cJSON_IsNull(nu_pay)) {
        nu_pay = NULL;
    }
    if (!nu_pay) {
        goto end;
    }

    
    nu_pay_local_nonprim = order_nu_pay_payment_request_nu_pay_parseFromJSON(nu_pay); //nonprimitive


    order_nu_pay_payment_request_local_var = order_nu_pay_payment_request_create_internal (
        strdup(payment_method->valuestring),
        nu_pay_local_nonprim
        );

    return order_nu_pay_payment_request_local_var;
end:
    if (nu_pay_local_nonprim) {
        order_nu_pay_payment_request_nu_pay_free(nu_pay_local_nonprim);
        nu_pay_local_nonprim = NULL;
    }
    return NULL;

}
