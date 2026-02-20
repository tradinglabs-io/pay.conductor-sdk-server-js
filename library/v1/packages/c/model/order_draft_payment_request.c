#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_draft_payment_request.h"


char* order_draft_payment_request_available_payment_methods_ToString(payconductor_api_order_draft_payment_request__e available_payment_methods) {
    char *available_payment_methodsArray[] =  { "NULL", "Pix", "CreditCard", "DebitCard", "BankSlip", "Crypto", "ApplePay", "NuPay", "PicPay", "AmazonPay", "SepaDebit", "GooglePay", "Draft" };
    return available_payment_methodsArray[available_payment_methods - 1];
}

payconductor_api_order_draft_payment_request__e order_draft_payment_request_available_payment_methods_FromString(char* available_payment_methods) {
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

static order_draft_payment_request_t *order_draft_payment_request_create_internal(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds,
    list_t *available_payment_methods
    ) {
    order_draft_payment_request_t *order_draft_payment_request_local_var = malloc(sizeof(order_draft_payment_request_t));
    if (!order_draft_payment_request_local_var) {
        return NULL;
    }
    order_draft_payment_request_local_var->payment_method = payment_method;
    order_draft_payment_request_local_var->expiration_in_seconds = expiration_in_seconds;
    order_draft_payment_request_local_var->available_payment_methods = available_payment_methods;

    order_draft_payment_request_local_var->_library_owned = 1;
    return order_draft_payment_request_local_var;
}

__attribute__((deprecated)) order_draft_payment_request_t *order_draft_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds,
    list_t *available_payment_methods
    ) {
    return order_draft_payment_request_create_internal (
        payment_method,
        expiration_in_seconds,
        available_payment_methods
        );
}

void order_draft_payment_request_free(order_draft_payment_request_t *order_draft_payment_request) {
    if(NULL == order_draft_payment_request){
        return ;
    }
    if(order_draft_payment_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_draft_payment_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_draft_payment_request->available_payment_methods) {
        list_ForEach(listEntry, order_draft_payment_request->available_payment_methods) {
            available_payment_methods_free(listEntry->data);
        }
        list_freeList(order_draft_payment_request->available_payment_methods);
        order_draft_payment_request->available_payment_methods = NULL;
    }
    free(order_draft_payment_request);
}

cJSON *order_draft_payment_request_convertToJSON(order_draft_payment_request_t *order_draft_payment_request) {
    cJSON *item = cJSON_CreateObject();

    // order_draft_payment_request->payment_method
    if (payconductor_api_payment_method__NULL == order_draft_payment_request->payment_method) {
        goto fail;
    }
    cJSON *payment_method_local_JSON = payment_method_convertToJSON(order_draft_payment_request->payment_method);
    if(payment_method_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "paymentMethod", payment_method_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // order_draft_payment_request->expiration_in_seconds
    if(order_draft_payment_request->expiration_in_seconds) {
    if(cJSON_AddNumberToObject(item, "expirationInSeconds", order_draft_payment_request->expiration_in_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_draft_payment_request->available_payment_methods
    if(order_draft_payment_request->available_payment_methods != payconductor_api_list_AVAILABLEPAYMENTMETHODS_NULL) {
    cJSON *available_payment_methods = cJSON_AddArrayToObject(item, "availablePaymentMethods");
    if(available_payment_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *available_payment_methodsListEntry;
    if (order_draft_payment_request->available_payment_methods) {
    list_ForEach(available_payment_methodsListEntry, order_draft_payment_request->available_payment_methods) {
    cJSON *itemLocal = available_payment_methods_convertToJSON((payconductor_api_order_draft_payment_request__e)available_payment_methodsListEntry->data);
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

order_draft_payment_request_t *order_draft_payment_request_parseFromJSON(cJSON *order_draft_payment_requestJSON){

    order_draft_payment_request_t *order_draft_payment_request_local_var = NULL;

    // define the local variable for order_draft_payment_request->payment_method
    payconductor_api_payment_method__e payment_method_local_nonprim = 0;

    // define the local list for order_draft_payment_request->available_payment_methods
    list_t *available_payment_methodsList = NULL;

    // order_draft_payment_request->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(order_draft_payment_requestJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    payment_method_local_nonprim = payment_method_parseFromJSON(payment_method); //custom

    // order_draft_payment_request->expiration_in_seconds
    cJSON *expiration_in_seconds = cJSON_GetObjectItemCaseSensitive(order_draft_payment_requestJSON, "expirationInSeconds");
    if (cJSON_IsNull(expiration_in_seconds)) {
        expiration_in_seconds = NULL;
    }
    if (expiration_in_seconds) { 
    if(!cJSON_IsNumber(expiration_in_seconds))
    {
    goto end; //Numeric
    }
    }

    // order_draft_payment_request->available_payment_methods
    cJSON *available_payment_methods = cJSON_GetObjectItemCaseSensitive(order_draft_payment_requestJSON, "availablePaymentMethods");
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
        order_draft_payment_request_available_payment_methods_e available_payment_methodsItem = available_payment_methods_parseFromJSON(available_payment_methods_local_nonprimitive);

        list_addElement(available_payment_methodsList, (void *)available_payment_methodsItem);
    }
    }


    order_draft_payment_request_local_var = order_draft_payment_request_create_internal (
        payment_method_local_nonprim,
        expiration_in_seconds ? expiration_in_seconds->valuedouble : 0,
        available_payment_methods ? available_payment_methodsList : NULL
        );

    return order_draft_payment_request_local_var;
end:
    if (payment_method_local_nonprim) {
        payment_method_local_nonprim = 0;
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
