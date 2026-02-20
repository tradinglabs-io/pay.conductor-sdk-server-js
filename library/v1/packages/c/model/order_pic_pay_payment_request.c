#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_pic_pay_payment_request.h"



static order_pic_pay_payment_request_t *order_pic_pay_payment_request_create_internal(
    char *payment_method
    ) {
    order_pic_pay_payment_request_t *order_pic_pay_payment_request_local_var = malloc(sizeof(order_pic_pay_payment_request_t));
    if (!order_pic_pay_payment_request_local_var) {
        return NULL;
    }
    order_pic_pay_payment_request_local_var->payment_method = payment_method;

    order_pic_pay_payment_request_local_var->_library_owned = 1;
    return order_pic_pay_payment_request_local_var;
}

__attribute__((deprecated)) order_pic_pay_payment_request_t *order_pic_pay_payment_request_create(
    char *payment_method
    ) {
    return order_pic_pay_payment_request_create_internal (
        payment_method
        );
}

void order_pic_pay_payment_request_free(order_pic_pay_payment_request_t *order_pic_pay_payment_request) {
    if(NULL == order_pic_pay_payment_request){
        return ;
    }
    if(order_pic_pay_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_pic_pay_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_pic_pay_payment_request->payment_method) {
        free(order_pic_pay_payment_request->payment_method);
        order_pic_pay_payment_request->payment_method = NULL;
    }
    free(order_pic_pay_payment_request);
}

cJSON *order_pic_pay_payment_request_convertToJSON(order_pic_pay_payment_request_t *order_pic_pay_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_pic_pay_payment_request->payment_method
    if (!order_pic_pay_payment_request->payment_method) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "paymentMethod", order_pic_pay_payment_request->payment_method) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_pic_pay_payment_request_t *order_pic_pay_payment_request_parseFromJSON(cJSON *order_pic_pay_payment_requestJSON){

    order_pic_pay_payment_request_t *order_pic_pay_payment_request_local_var = NULL;

    // order_pic_pay_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_pic_pay_payment_requestJSON, "paymentMethod");
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


    order_pic_pay_payment_request_local_var = order_pic_pay_payment_request_create_internal (
        strdup(payment_method->valuestring)
        );

    return order_pic_pay_payment_request_local_var;
end:
    return NULL;

}
