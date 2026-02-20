#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_nu_pay_info.h"



static order_nu_pay_info_t *order_nu_pay_info_create_internal(
    char *payment_url
    ) {
    order_nu_pay_info_t *order_nu_pay_info_local_var = malloc(sizeof(order_nu_pay_info_t));
    if (!order_nu_pay_info_local_var) {
        return NULL;
    }
    order_nu_pay_info_local_var->payment_url = payment_url;

    order_nu_pay_info_local_var->_library_owned = 1;
    return order_nu_pay_info_local_var;
}

__attribute__((deprecated)) order_nu_pay_info_t *order_nu_pay_info_create(
    char *payment_url
    ) {
    return order_nu_pay_info_create_internal (
        payment_url
        );
}

void order_nu_pay_info_free(order_nu_pay_info_t *order_nu_pay_info) {
    if(NULL == order_nu_pay_info){
        return ;
    }
    if(order_nu_pay_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_nu_pay_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_nu_pay_info->payment_url) {
        free(order_nu_pay_info->payment_url);
        order_nu_pay_info->payment_url = NULL;
    }
    free(order_nu_pay_info);
}

cJSON *order_nu_pay_info_convertToJSON(order_nu_pay_info_t *order_nu_pay_info) {
    cJSON *item = cJSON_CreateObject();

    // order_nu_pay_info->payment_url
    if (!order_nu_pay_info->payment_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "paymentUrl", order_nu_pay_info->payment_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_nu_pay_info_t *order_nu_pay_info_parseFromJSON(cJSON *order_nu_pay_infoJSON){

    order_nu_pay_info_t *order_nu_pay_info_local_var = NULL;

    // order_nu_pay_info->payment_url
    cJSON *payment_url = cJSON_GetObjectItemCaseSensitive(order_nu_pay_infoJSON, "paymentUrl");
    if (cJSON_IsNull(payment_url)) {
        payment_url = NULL;
    }
    if (!payment_url) {
        goto end;
    }

    
    if(!cJSON_IsString(payment_url))
    {
    goto end; //String
    }


    order_nu_pay_info_local_var = order_nu_pay_info_create_internal (
        strdup(payment_url->valuestring)
        );

    return order_nu_pay_info_local_var;
end:
    return NULL;

}
