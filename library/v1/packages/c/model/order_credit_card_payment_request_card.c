#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_credit_card_payment_request_card.h"



static order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_create_internal(
    char *first_six_card_number,
    char *token,
    char *cvv,
    card_expiration_data_t *expiration,
    char *holder_name,
    char *number
    ) {
    order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_local_var = malloc(sizeof(order_credit_card_payment_request_card_t));
    if (!order_credit_card_payment_request_card_local_var) {
        return NULL;
    }
    order_credit_card_payment_request_card_local_var->first_six_card_number = first_six_card_number;
    order_credit_card_payment_request_card_local_var->token = token;
    order_credit_card_payment_request_card_local_var->cvv = cvv;
    order_credit_card_payment_request_card_local_var->expiration = expiration;
    order_credit_card_payment_request_card_local_var->holder_name = holder_name;
    order_credit_card_payment_request_card_local_var->number = number;

    order_credit_card_payment_request_card_local_var->_library_owned = 1;
    return order_credit_card_payment_request_card_local_var;
}

__attribute__((deprecated)) order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_create(
    char *first_six_card_number,
    char *token,
    char *cvv,
    card_expiration_data_t *expiration,
    char *holder_name,
    char *number
    ) {
    return order_credit_card_payment_request_card_create_internal (
        first_six_card_number,
        token,
        cvv,
        expiration,
        holder_name,
        number
        );
}

void order_credit_card_payment_request_card_free(order_credit_card_payment_request_card_t *order_credit_card_payment_request_card) {
    if(NULL == order_credit_card_payment_request_card){
        return ;
    }
    if(order_credit_card_payment_request_card->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_credit_card_payment_request_card_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_credit_card_payment_request_card->first_six_card_number) {
        free(order_credit_card_payment_request_card->first_six_card_number);
        order_credit_card_payment_request_card->first_six_card_number = NULL;
    }
    if (order_credit_card_payment_request_card->token) {
        free(order_credit_card_payment_request_card->token);
        order_credit_card_payment_request_card->token = NULL;
    }
    if (order_credit_card_payment_request_card->cvv) {
        free(order_credit_card_payment_request_card->cvv);
        order_credit_card_payment_request_card->cvv = NULL;
    }
    if (order_credit_card_payment_request_card->expiration) {
        card_expiration_data_free(order_credit_card_payment_request_card->expiration);
        order_credit_card_payment_request_card->expiration = NULL;
    }
    if (order_credit_card_payment_request_card->holder_name) {
        free(order_credit_card_payment_request_card->holder_name);
        order_credit_card_payment_request_card->holder_name = NULL;
    }
    if (order_credit_card_payment_request_card->number) {
        free(order_credit_card_payment_request_card->number);
        order_credit_card_payment_request_card->number = NULL;
    }
    free(order_credit_card_payment_request_card);
}

cJSON *order_credit_card_payment_request_card_convertToJSON(order_credit_card_payment_request_card_t *order_credit_card_payment_request_card) {
    cJSON *item = cJSON_CreateObject();

    // order_credit_card_payment_request_card->first_six_card_number
    if(order_credit_card_payment_request_card->first_six_card_number) {
    if(cJSON_AddStringToObject(item, "firstSixCardNumber", order_credit_card_payment_request_card->first_six_card_number) == NULL) {
    goto fail; //String
    }
    }


    // order_credit_card_payment_request_card->token
    if (!order_credit_card_payment_request_card->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", order_credit_card_payment_request_card->token) == NULL) {
    goto fail; //String
    }


    // order_credit_card_payment_request_card->cvv
    if (!order_credit_card_payment_request_card->cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cvv", order_credit_card_payment_request_card->cvv) == NULL) {
    goto fail; //String
    }


    // order_credit_card_payment_request_card->expiration
    if (!order_credit_card_payment_request_card->expiration) {
        goto fail;
    }
    cJSON *expiration_local_JSON = card_expiration_data_convertToJSON(order_credit_card_payment_request_card->expiration);
    if(expiration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expiration", expiration_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // order_credit_card_payment_request_card->holder_name
    if (!order_credit_card_payment_request_card->holder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "holderName", order_credit_card_payment_request_card->holder_name) == NULL) {
    goto fail; //String
    }


    // order_credit_card_payment_request_card->number
    if (!order_credit_card_payment_request_card->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", order_credit_card_payment_request_card->number) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_parseFromJSON(cJSON *order_credit_card_payment_request_cardJSON){

    order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_local_var = NULL;

    // define the local variable for order_credit_card_payment_request_card->expiration
    card_expiration_data_t *expiration_local_nonprim = NULL;

    // order_credit_card_payment_request_card->first_six_card_number
    cJSON *first_six_card_number = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_request_cardJSON, "firstSixCardNumber");
    if (cJSON_IsNull(first_six_card_number)) {
        first_six_card_number = NULL;
    }
    if (first_six_card_number) { 
    if(!cJSON_IsString(first_six_card_number) && !cJSON_IsNull(first_six_card_number))
    {
    goto end; //String
    }
    }

    // order_credit_card_payment_request_card->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_request_cardJSON, "token");
    if (cJSON_IsNull(token)) {
        token = NULL;
    }
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }

    // order_credit_card_payment_request_card->cvv
    cJSON *cvv = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_request_cardJSON, "cvv");
    if (cJSON_IsNull(cvv)) {
        cvv = NULL;
    }
    if (!cvv) {
        goto end;
    }

    
    if(!cJSON_IsString(cvv))
    {
    goto end; //String
    }

    // order_credit_card_payment_request_card->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_request_cardJSON, "expiration");
    if (cJSON_IsNull(expiration)) {
        expiration = NULL;
    }
    if (!expiration) {
        goto end;
    }

    
    expiration_local_nonprim = card_expiration_data_parseFromJSON(expiration); //nonprimitive

    // order_credit_card_payment_request_card->holder_name
    cJSON *holder_name = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_request_cardJSON, "holderName");
    if (cJSON_IsNull(holder_name)) {
        holder_name = NULL;
    }
    if (!holder_name) {
        goto end;
    }

    
    if(!cJSON_IsString(holder_name))
    {
    goto end; //String
    }

    // order_credit_card_payment_request_card->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(order_credit_card_payment_request_cardJSON, "number");
    if (cJSON_IsNull(number)) {
        number = NULL;
    }
    if (!number) {
        goto end;
    }

    
    if(!cJSON_IsString(number))
    {
    goto end; //String
    }


    order_credit_card_payment_request_card_local_var = order_credit_card_payment_request_card_create_internal (
        first_six_card_number && !cJSON_IsNull(first_six_card_number) ? strdup(first_six_card_number->valuestring) : NULL,
        strdup(token->valuestring),
        strdup(cvv->valuestring),
        expiration_local_nonprim,
        strdup(holder_name->valuestring),
        strdup(number->valuestring)
        );

    return order_credit_card_payment_request_card_local_var;
end:
    if (expiration_local_nonprim) {
        card_expiration_data_free(expiration_local_nonprim);
        expiration_local_nonprim = NULL;
    }
    return NULL;

}
