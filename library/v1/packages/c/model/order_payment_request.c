#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_payment_request.h"


char* order_payment_request_available_payment_methods_ToString(payconductor_api_order_payment_request__e available_payment_methods) {
    char *available_payment_methodsArray[] =  { "NULL", "Pix", "CreditCard", "DebitCard", "BankSlip", "Crypto", "ApplePay", "NuPay", "PicPay", "AmazonPay", "SepaDebit", "GooglePay", "Draft" };
    return available_payment_methodsArray[available_payment_methods - 1];
}

payconductor_api_order_payment_request__e order_payment_request_available_payment_methods_FromString(char* available_payment_methods) {
    int stringToReturn = 0;
    char *available_payment_methodsArray[] =  { "NULL", "Pix", "CreditCard", "DebitCard", "BankSlip", "Crypto", "ApplePay", "NuPay", "PicPay", "AmazonPay", "SepaDebit", "GooglePay", "Draft" };
    size_t sizeofArray = sizeof(available_payment_methodsArray) / sizeof(available_payment_methodsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(available_payment_methods, available_payment_methodsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

static order_payment_request_t *order_payment_request_create_internal(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds,
    order_credit_card_payment_request_card_t *card,
    double installments,
    char *soft_descriptor,
    double expiration_in_days,
    order_nu_pay_payment_request_nu_pay_t *nu_pay,
    list_t *available_payment_methods
    ) {
    order_payment_request_t *order_payment_request_local_var = malloc(sizeof(order_payment_request_t));
    if (!order_payment_request_local_var) {
        return NULL;
    }
    order_payment_request_local_var->payment_method = payment_method;
    order_payment_request_local_var->expiration_in_seconds = expiration_in_seconds;
    order_payment_request_local_var->card = card;
    order_payment_request_local_var->installments = installments;
    order_payment_request_local_var->soft_descriptor = soft_descriptor;
    order_payment_request_local_var->expiration_in_days = expiration_in_days;
    order_payment_request_local_var->nu_pay = nu_pay;
    order_payment_request_local_var->available_payment_methods = available_payment_methods;

    order_payment_request_local_var->_library_owned = 1;
    return order_payment_request_local_var;
}

__attribute__((deprecated)) order_payment_request_t *order_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds,
    order_credit_card_payment_request_card_t *card,
    double installments,
    char *soft_descriptor,
    double expiration_in_days,
    order_nu_pay_payment_request_nu_pay_t *nu_pay,
    list_t *available_payment_methods
    ) {
    return order_payment_request_create_internal (
        payment_method,
        expiration_in_seconds,
        card,
        installments,
        soft_descriptor,
        expiration_in_days,
        nu_pay,
        available_payment_methods
        );
}

void order_payment_request_free(order_payment_request_t *order_payment_request) {
    if(NULL == order_payment_request){
        return ;
    }
    if(order_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_payment_request->card) {
        order_credit_card_payment_request_card_free(order_payment_request->card);
        order_payment_request->card = NULL;
    }
    if (order_payment_request->soft_descriptor) {
        free(order_payment_request->soft_descriptor);
        order_payment_request->soft_descriptor = NULL;
    }
    if (order_payment_request->nu_pay) {
        order_nu_pay_payment_request_nu_pay_free(order_payment_request->nu_pay);
        order_payment_request->nu_pay = NULL;
    }
    if (order_payment_request->available_payment_methods) {
        list_ForEach(listEntry, order_payment_request->available_payment_methods) {
            available_payment_methods_free(listEntry->data);
        }
        list_freeList(order_payment_request->available_payment_methods);
        order_payment_request->available_payment_methods = NULL;
    }
    free(order_payment_request);
}

cJSON *order_payment_request_convertToJSON(order_payment_request_t *order_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_payment_request->payment_method
    if (payconductor_api_payment_method__NULL == order_payment_request->payment_method) {
        goto fail;
    }
    cJSON *payment_method_local_JSON = payment_method_convertToJSON(order_payment_request->payment_method);
    if(payment_method_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "paymentMethod", payment_method_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // order_payment_request->expiration_in_seconds
    if(order_payment_request->expiration_in_seconds) {
    if(cJSON_AddNumberToObject(item, "expirationInSeconds", order_payment_request->expiration_in_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_payment_request->card
    if (!order_payment_request->card) {
        goto fail;
    }
    cJSON *card_local_JSON = order_credit_card_payment_request_card_convertToJSON(order_payment_request->card);
    if(card_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "card", card_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // order_payment_request->installments
    if (!order_payment_request->installments) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "installments", order_payment_request->installments) == NULL) {
    goto fail; //Numeric
    }


    // order_payment_request->soft_descriptor
    if(order_payment_request->soft_descriptor) {
    if(cJSON_AddStringToObject(item, "softDescriptor", order_payment_request->soft_descriptor) == NULL) {
    goto fail; //String
    }
    }


    // order_payment_request->expiration_in_days
    if(order_payment_request->expiration_in_days) {
    if(cJSON_AddNumberToObject(item, "expirationInDays", order_payment_request->expiration_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_payment_request->nu_pay
    if (!order_payment_request->nu_pay) {
        goto fail;
    }
    cJSON *nu_pay_local_JSON = order_nu_pay_payment_request_nu_pay_convertToJSON(order_payment_request->nu_pay);
    if(nu_pay_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nuPay", nu_pay_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // order_payment_request->available_payment_methods
    if(order_payment_request->available_payment_methods != payconductor_api_list_AVAILABLEPAYMENTMETHODS_NULL) {
    cJSON *available_payment_methods = cJSON_AddArrayToObject(item, "availablePaymentMethods");
    if(available_payment_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *available_payment_methodsListEntry;
    if (order_payment_request->available_payment_methods) {
    list_ForEach(available_payment_methodsListEntry, order_payment_request->available_payment_methods) {
    cJSON *itemLocal = available_payment_methods_convertToJSON((payconductor_api_order_payment_request__e)available_payment_methodsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(available_payment_methods, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_payment_request_t *order_payment_request_parseFromJSON(cJSON *order_payment_requestJSON){

    order_payment_request_t *order_payment_request_local_var = NULL;

    // define the local variable for order_payment_request->payment_method
    payconductor_api_payment_method__e payment_method_local_nonprim = 0;

    // define the local variable for order_payment_request->card
    order_credit_card_payment_request_card_t *card_local_nonprim = NULL;

    // define the local variable for order_payment_request->nu_pay
    order_nu_pay_payment_request_nu_pay_t *nu_pay_local_nonprim = NULL;

    // define the local list for order_payment_request->available_payment_methods
    list_t *available_payment_methodsList = NULL;

    // order_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    payment_method_local_nonprim = payment_method_parseFromJSON(payment_method); //custom

    // order_payment_request->expiration_in_seconds
    cJSON *expiration_in_seconds = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "expirationInSeconds");
    if (cJSON_IsNull(expiration_in_seconds)) {
        expiration_in_seconds = NULL;
    }
    if (expiration_in_seconds) { 
    if(!cJSON_IsNumber(expiration_in_seconds))
    {
    goto end; //Numeric
    }
    }

    // order_payment_request->card
    cJSON *card = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "card");
    if (cJSON_IsNull(card)) {
        card = NULL;
    }
    if (!card) {
        goto end;
    }

    
    card_local_nonprim = order_credit_card_payment_request_card_parseFromJSON(card); //nonprimitive

    // order_payment_request->installments
    cJSON *installments = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "installments");
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

    // order_payment_request->soft_descriptor
    cJSON *soft_descriptor = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "softDescriptor");
    if (cJSON_IsNull(soft_descriptor)) {
        soft_descriptor = NULL;
    }
    if (soft_descriptor) { 
    if(!cJSON_IsString(soft_descriptor) && !cJSON_IsNull(soft_descriptor))
    {
    goto end; //String
    }
    }

    // order_payment_request->expiration_in_days
    cJSON *expiration_in_days = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "expirationInDays");
    if (cJSON_IsNull(expiration_in_days)) {
        expiration_in_days = NULL;
    }
    if (expiration_in_days) { 
    if(!cJSON_IsNumber(expiration_in_days))
    {
    goto end; //Numeric
    }
    }

    // order_payment_request->nu_pay
    cJSON *nu_pay = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "nuPay");
    if (cJSON_IsNull(nu_pay)) {
        nu_pay = NULL;
    }
    if (!nu_pay) {
        goto end;
    }

    
    nu_pay_local_nonprim = order_nu_pay_payment_request_nu_pay_parseFromJSON(nu_pay); //nonprimitive

    // order_payment_request->available_payment_methods
    cJSON *available_payment_methods = cJSON_GetObjectItemCaseSensitive(order_payment_requestJSON, "availablePaymentMethods");
    if (cJSON_IsNull(available_payment_methods)) {
        available_payment_methods = NULL;
    }
    if (available_payment_methods) { 
    cJSON *available_payment_methods_local_nonprimitive = NULL;
    if(!cJSON_IsArray(available_payment_methods)){
        goto end; //nonprimitive container
    }

    available_payment_methodsList = list_createList();

    cJSON_ArrayForEach(available_payment_methods_local_nonprimitive,available_payment_methods )
    {
        if(!cJSON_IsObject(available_payment_methods_local_nonprimitive)){
            goto end;
        }
        order_payment_request_available_payment_methods_e available_payment_methodsItem = available_payment_methods_parseFromJSON(available_payment_methods_local_nonprimitive);

        list_addElement(available_payment_methodsList, (void *)available_payment_methodsItem);
    }
    }


    order_payment_request_local_var = order_payment_request_create_internal (
        payment_method_local_nonprim,
        expiration_in_seconds ? expiration_in_seconds->valuedouble : 0,
        card_local_nonprim,
        installments->valuedouble,
        soft_descriptor && !cJSON_IsNull(soft_descriptor) ? strdup(soft_descriptor->valuestring) : NULL,
        expiration_in_days ? expiration_in_days->valuedouble : 0,
        nu_pay_local_nonprim,
        available_payment_methods ? available_payment_methodsList : NULL
        );

    return order_payment_request_local_var;
end:
    if (payment_method_local_nonprim) {
        payment_method_local_nonprim = 0;
    }
    if (card_local_nonprim) {
        order_credit_card_payment_request_card_free(card_local_nonprim);
        card_local_nonprim = NULL;
    }
    if (nu_pay_local_nonprim) {
        order_nu_pay_payment_request_nu_pay_free(nu_pay_local_nonprim);
        nu_pay_local_nonprim = NULL;
    }
    if (available_payment_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, available_payment_methodsList) {
            available_payment_methods_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(available_payment_methodsList);
        available_payment_methodsList = NULL;
    }
    return NULL;

}
