#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_credit_card_payment_request.h"



static order_credit_card_payment_request_t *order_credit_card_payment_request_create_internal(
    payconductor_api_payment_method__e payment_method,
    order_credit_card_payment_request_card_t *card,
    double installments,
    char *soft_descriptor
    ) {
    order_credit_card_payment_request_t *order_credit_card_payment_request_local_var = malloc(sizeof(order_credit_card_payment_request_t));
    if (!order_credit_card_payment_request_local_var) {
        return NULL;
    }
    order_credit_card_payment_request_local_var->payment_method = payment_method;
    order_credit_card_payment_request_local_var->card = card;
    order_credit_card_payment_request_local_var->installments = installments;
    order_credit_card_payment_request_local_var->soft_descriptor = soft_descriptor;

    order_credit_card_payment_request_local_var->_library_owned = 1;
    return order_credit_card_payment_request_local_var;
}

__attribute__((deprecated)) order_credit_card_payment_request_t *order_credit_card_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    order_credit_card_payment_request_card_t *card,
    double installments,
    char *soft_descriptor
    ) {
    return order_credit_card_payment_request_create_internal (
        payment_method,
        card,
        installments,
        soft_descriptor
        );
}

void order_credit_card_payment_request_free(order_credit_card_payment_request_t *order_credit_card_payment_request) {
    if(NULL == order_credit_card_payment_request){
        return ;
    }
    if(order_credit_card_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_credit_card_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_credit_card_payment_request->card) {
        order_credit_card_payment_request_card_free(order_credit_card_payment_request->card);
        order_credit_card_payment_request->card = NULL;
    }
    if (order_credit_card_payment_request->soft_descriptor) {
        free(order_credit_card_payment_request->soft_descriptor);
        order_credit_card_payment_request->soft_descriptor = NULL;
    }
    free(order_credit_card_payment_request);
}

cJSON *order_credit_card_payment_request_convertToJSON(order_credit_card_payment_request_t *order_credit_card_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_credit_card_payment_request->payment_method
    if (payconductor_api_payment_method__NULL == order_credit_card_payment_request->payment_method) {
        goto fail;
    }
    cJSON *payment_method_local_JSON = payment_method_convertToJSON(order_credit_card_payment_request->payment_method);
    if(payment_method_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "paymentMethod", payment_method_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // order_credit_card_payment_request->card
    if (!order_credit_card_payment_request->card) {
        goto fail;
    }
    cJSON *card_local_JSON = order_credit_card_payment_request_card_convertToJSON(order_credit_card_payment_request->card);
    if(card_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "card", card_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // order_credit_card_payment_request->installments
    if (!order_credit_card_payment_request->installments) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "installments", order_credit_card_payment_request->installments) == NULL) {
    goto fail; //Numeric
    }


    // order_credit_card_payment_request->soft_descriptor
    if(order_credit_card_payment_request->soft_descriptor) {
    if(cJSON_AddStringToObject(item, "softDescriptor", order_credit_card_payment_request->soft_descriptor) == NULL) {
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

order_credit_card_payment_request_t *order_credit_card_payment_request_parseFromJSON(cJSON *order_credit_card_payment_requestJSON){

    order_credit_card_payment_request_t *order_credit_card_payment_request_local_var = NULL;

    // define the local variable for order_credit_card_payment_request->payment_method
    payconductor_api_payment_method__e payment_method_local_nonprim = 0;

    // define the local variable for order_credit_card_payment_request->card
    order_credit_card_payment_request_card_t *card_local_nonprim = NULL;

    // order_credit_card_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_requestJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    payment_method_local_nonprim = payment_method_parseFromJSON(payment_method); //custom

    // order_credit_card_payment_request->card
    cJSON *card = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_requestJSON, "card");
    if (cJSON_IsNull(card)) {
        card = NULL;
    }
    if (!card) {
        goto end;
    }

    
    card_local_nonprim = order_credit_card_payment_request_card_parseFromJSON(card); //nonprimitive

    // order_credit_card_payment_request->installments
    cJSON *installments = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_requestJSON, "installments");
    if (cJSON_IsNull(installments)) {
        installments = NULL;
    }
    if (!installments) {
        goto end;
    }

    
    if(!cJSON_IsNumber(installments))
    {
    goto end; //Numeric
    }

    // order_credit_card_payment_request->soft_descriptor
    cJSON *soft_descriptor = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_requestJSON, "softDescriptor");
    if (cJSON_IsNull(soft_descriptor)) {
        soft_descriptor = NULL;
    }
    if (soft_descriptor) { 
    if(!cJSON_IsString(soft_descriptor) && !cJSON_IsNull(soft_descriptor))
    {
    goto end; //String
    }
    }


    order_credit_card_payment_request_local_var = order_credit_card_payment_request_create_internal (
        payment_method_local_nonprim,
        card_local_nonprim,
        installments->valuedouble,
        soft_descriptor && !cJSON_IsNull(soft_descriptor) ? strdup(soft_descriptor->valuestring) : NULL
        );

    return order_credit_card_payment_request_local_var;
end:
    if (payment_method_local_nonprim) {
        payment_method_local_nonprim = 0;
    }
    if (card_local_nonprim) {
        order_credit_card_payment_request_card_free(card_local_nonprim);
        card_local_nonprim = NULL;
    }
    return NULL;

}
