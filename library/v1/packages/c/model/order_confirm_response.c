#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_confirm_response.h"



static order_confirm_response_t *order_confirm_response_create_internal(
    char *id,
    char *external_id,
    double amount,
    double cost_fee,
    order_pix_info_t *pix,
    order_bank_slip_info_t *bank_slip,
    order_nu_pay_info_t *nu_pay,
    order_pic_pay_info_t *pic_pay,
    payconductor_api_status__e status,
    payconductor_api_payment_method__e payment_method,
    char *payed_at,
    char *error_code,
    char *error_message
    ) {
    order_confirm_response_t *order_confirm_response_local_var = malloc(sizeof(order_confirm_response_t));
    if (!order_confirm_response_local_var) {
        return NULL;
    }
    order_confirm_response_local_var->id = id;
    order_confirm_response_local_var->external_id = external_id;
    order_confirm_response_local_var->amount = amount;
    order_confirm_response_local_var->cost_fee = cost_fee;
    order_confirm_response_local_var->pix = pix;
    order_confirm_response_local_var->bank_slip = bank_slip;
    order_confirm_response_local_var->nu_pay = nu_pay;
    order_confirm_response_local_var->pic_pay = pic_pay;
    order_confirm_response_local_var->status = status;
    order_confirm_response_local_var->payment_method = payment_method;
    order_confirm_response_local_var->payed_at = payed_at;
    order_confirm_response_local_var->error_code = error_code;
    order_confirm_response_local_var->error_message = error_message;

    order_confirm_response_local_var->_library_owned = 1;
    return order_confirm_response_local_var;
}

__attribute__((deprecated)) order_confirm_response_t *order_confirm_response_create(
    char *id,
    char *external_id,
    double amount,
    double cost_fee,
    order_pix_info_t *pix,
    order_bank_slip_info_t *bank_slip,
    order_nu_pay_info_t *nu_pay,
    order_pic_pay_info_t *pic_pay,
    payconductor_api_status__e status,
    payconductor_api_payment_method__e payment_method,
    char *payed_at,
    char *error_code,
    char *error_message
    ) {
    return order_confirm_response_create_internal (
        id,
        external_id,
        amount,
        cost_fee,
        pix,
        bank_slip,
        nu_pay,
        pic_pay,
        status,
        payment_method,
        payed_at,
        error_code,
        error_message
        );
}

void order_confirm_response_free(order_confirm_response_t *order_confirm_response) {
    if(NULL == order_confirm_response){
        return ;
    }
    if(order_confirm_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_confirm_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_confirm_response->id) {
        free(order_confirm_response->id);
        order_confirm_response->id = NULL;
    }
    if (order_confirm_response->external_id) {
        free(order_confirm_response->external_id);
        order_confirm_response->external_id = NULL;
    }
    if (order_confirm_response->pix) {
        order_pix_info_free(order_confirm_response->pix);
        order_confirm_response->pix = NULL;
    }
    if (order_confirm_response->bank_slip) {
        order_bank_slip_info_free(order_confirm_response->bank_slip);
        order_confirm_response->bank_slip = NULL;
    }
    if (order_confirm_response->nu_pay) {
        order_nu_pay_info_free(order_confirm_response->nu_pay);
        order_confirm_response->nu_pay = NULL;
    }
    if (order_confirm_response->pic_pay) {
        order_pic_pay_info_free(order_confirm_response->pic_pay);
        order_confirm_response->pic_pay = NULL;
    }
    if (order_confirm_response->payed_at) {
        free(order_confirm_response->payed_at);
        order_confirm_response->payed_at = NULL;
    }
    if (order_confirm_response->error_code) {
        free(order_confirm_response->error_code);
        order_confirm_response->error_code = NULL;
    }
    if (order_confirm_response->error_message) {
        free(order_confirm_response->error_message);
        order_confirm_response->error_message = NULL;
    }
    free(order_confirm_response);
}

cJSON *order_confirm_response_convertToJSON(order_confirm_response_t *order_confirm_response) {
    cJSON *item = cJSON_CreateObject();

    // order_confirm_response->id
    if (!order_confirm_response->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", order_confirm_response->id) == NULL) {
    goto fail; //String
    }


    // order_confirm_response->external_id
    if (!order_confirm_response->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "externalId", order_confirm_response->external_id) == NULL) {
    goto fail; //String
    }


    // order_confirm_response->amount
    if (!order_confirm_response->amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "amount", order_confirm_response->amount) == NULL) {
    goto fail; //Numeric
    }


    // order_confirm_response->cost_fee
    if (!order_confirm_response->cost_fee) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "costFee", order_confirm_response->cost_fee) == NULL) {
    goto fail; //Numeric
    }


    // order_confirm_response->pix
    if(order_confirm_response->pix) {
    cJSON *pix_local_JSON = order_pix_info_convertToJSON(order_confirm_response->pix);
    if(pix_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pix", pix_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_confirm_response->bank_slip
    if(order_confirm_response->bank_slip) {
    cJSON *bank_slip_local_JSON = order_bank_slip_info_convertToJSON(order_confirm_response->bank_slip);
    if(bank_slip_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bankSlip", bank_slip_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_confirm_response->nu_pay
    if(order_confirm_response->nu_pay) {
    cJSON *nu_pay_local_JSON = order_nu_pay_info_convertToJSON(order_confirm_response->nu_pay);
    if(nu_pay_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nuPay", nu_pay_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_confirm_response->pic_pay
    if(order_confirm_response->pic_pay) {
    cJSON *pic_pay_local_JSON = order_pic_pay_info_convertToJSON(order_confirm_response->pic_pay);
    if(pic_pay_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "picPay", pic_pay_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_confirm_response->status
    if (payconductor_api_status__NULL == order_confirm_response->status) {
        goto fail;
    }
    cJSON *status_local_JSON = status_convertToJSON(order_confirm_response->status);
    if(status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // order_confirm_response->payment_method
    if (payconductor_api_payment_method__NULL == order_confirm_response->payment_method) {
        goto fail;
    }
    cJSON *payment_method_local_JSON = payment_method_convertToJSON(order_confirm_response->payment_method);
    if(payment_method_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "paymentMethod", payment_method_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // order_confirm_response->payed_at
    if (!order_confirm_response->payed_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "payedAt", order_confirm_response->payed_at) == NULL) {
    goto fail; //String
    }


    // order_confirm_response->error_code
    if (!order_confirm_response->error_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorCode", order_confirm_response->error_code) == NULL) {
    goto fail; //String
    }


    // order_confirm_response->error_message
    if (!order_confirm_response->error_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorMessage", order_confirm_response->error_message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_confirm_response_t *order_confirm_response_parseFromJSON(cJSON *order_confirm_responseJSON){

    order_confirm_response_t *order_confirm_response_local_var = NULL;

    // define the local variable for order_confirm_response->pix
    order_pix_info_t *pix_local_nonprim = NULL;

    // define the local variable for order_confirm_response->bank_slip
    order_bank_slip_info_t *bank_slip_local_nonprim = NULL;

    // define the local variable for order_confirm_response->nu_pay
    order_nu_pay_info_t *nu_pay_local_nonprim = NULL;

    // define the local variable for order_confirm_response->pic_pay
    order_pic_pay_info_t *pic_pay_local_nonprim = NULL;

    // define the local variable for order_confirm_response->status
    payconductor_api_status__e status_local_nonprim = 0;

    // define the local variable for order_confirm_response->payment_method
    payconductor_api_payment_method__e payment_method_local_nonprim = 0;

    // order_confirm_response->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "id");
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

    // order_confirm_response->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "externalId");
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

    // order_confirm_response->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }

    // order_confirm_response->cost_fee
    cJSON *cost_fee = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "costFee");
    if (cJSON_IsNull(cost_fee)) {
        cost_fee = NULL;
    }
    if (!cost_fee) {
        goto end;
    }

    
    if(!cJSON_IsNumber(cost_fee))
    {
    goto end; //Numeric
    }

    // order_confirm_response->pix
    cJSON *pix = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "pix");
    if (cJSON_IsNull(pix)) {
        pix = NULL;
    }
    if (pix) { 
    pix_local_nonprim = order_pix_info_parseFromJSON(pix); //nonprimitive
    }

    // order_confirm_response->bank_slip
    cJSON *bank_slip = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "bankSlip");
    if (cJSON_IsNull(bank_slip)) {
        bank_slip = NULL;
    }
    if (bank_slip) { 
    bank_slip_local_nonprim = order_bank_slip_info_parseFromJSON(bank_slip); //nonprimitive
    }

    // order_confirm_response->nu_pay
    cJSON *nu_pay = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "nuPay");
    if (cJSON_IsNull(nu_pay)) {
        nu_pay = NULL;
    }
    if (nu_pay) { 
    nu_pay_local_nonprim = order_nu_pay_info_parseFromJSON(nu_pay); //nonprimitive
    }

    // order_confirm_response->pic_pay
    cJSON *pic_pay = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "picPay");
    if (cJSON_IsNull(pic_pay)) {
        pic_pay = NULL;
    }
    if (pic_pay) { 
    pic_pay_local_nonprim = order_pic_pay_info_parseFromJSON(pic_pay); //nonprimitive
    }

    // order_confirm_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    status_local_nonprim = status_parseFromJSON(status); //custom

    // order_confirm_response->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    payment_method_local_nonprim = payment_method_parseFromJSON(payment_method); //custom

    // order_confirm_response->payed_at
    cJSON *payed_at = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "payedAt");
    if (cJSON_IsNull(payed_at)) {
        payed_at = NULL;
    }
    if (!payed_at) {
        goto end;
    }

    
    if(!cJSON_IsString(payed_at))
    {
    goto end; //String
    }

    // order_confirm_response->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "errorCode");
    if (cJSON_IsNull(error_code)) {
        error_code = NULL;
    }
    if (!error_code) {
        goto end;
    }

    
    if(!cJSON_IsString(error_code))
    {
    goto end; //String
    }

    // order_confirm_response->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(order_confirm_responseJSON, "errorMessage");
    if (cJSON_IsNull(error_message)) {
        error_message = NULL;
    }
    if (!error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(error_message))
    {
    goto end; //String
    }


    order_confirm_response_local_var = order_confirm_response_create_internal (
        strdup(id->valuestring),
        strdup(external_id->valuestring),
        amount->valuedouble,
        cost_fee->valuedouble,
        pix ? pix_local_nonprim : NULL,
        bank_slip ? bank_slip_local_nonprim : NULL,
        nu_pay ? nu_pay_local_nonprim : NULL,
        pic_pay ? pic_pay_local_nonprim : NULL,
        status_local_nonprim,
        payment_method_local_nonprim,
        strdup(payed_at->valuestring),
        strdup(error_code->valuestring),
        strdup(error_message->valuestring)
        );

    return order_confirm_response_local_var;
end:
    if (pix_local_nonprim) {
        order_pix_info_free(pix_local_nonprim);
        pix_local_nonprim = NULL;
    }
    if (bank_slip_local_nonprim) {
        order_bank_slip_info_free(bank_slip_local_nonprim);
        bank_slip_local_nonprim = NULL;
    }
    if (nu_pay_local_nonprim) {
        order_nu_pay_info_free(nu_pay_local_nonprim);
        nu_pay_local_nonprim = NULL;
    }
    if (pic_pay_local_nonprim) {
        order_pic_pay_info_free(pic_pay_local_nonprim);
        pic_pay_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_local_nonprim = 0;
    }
    if (payment_method_local_nonprim) {
        payment_method_local_nonprim = 0;
    }
    return NULL;

}
