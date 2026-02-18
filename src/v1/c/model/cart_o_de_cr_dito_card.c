#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_o_de_cr_dito_card.h"



static cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_create_internal(
    char *first_six_card_number,
    char *token,
    char *cvv,
    dados_completos_do_cart_o_expiration_t *expiration,
    char *holder_name,
    char *number
    ) {
    cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_local_var = malloc(sizeof(cart_o_de_cr_dito_card_t));
    if (!cart_o_de_cr_dito_card_local_var) {
        return NULL;
    }
    cart_o_de_cr_dito_card_local_var->first_six_card_number = first_six_card_number;
    cart_o_de_cr_dito_card_local_var->token = token;
    cart_o_de_cr_dito_card_local_var->cvv = cvv;
    cart_o_de_cr_dito_card_local_var->expiration = expiration;
    cart_o_de_cr_dito_card_local_var->holder_name = holder_name;
    cart_o_de_cr_dito_card_local_var->number = number;

    cart_o_de_cr_dito_card_local_var->_library_owned = 1;
    return cart_o_de_cr_dito_card_local_var;
}

__attribute__((deprecated)) cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_create(
    char *first_six_card_number,
    char *token,
    char *cvv,
    dados_completos_do_cart_o_expiration_t *expiration,
    char *holder_name,
    char *number
    ) {
    return cart_o_de_cr_dito_card_create_internal (
        first_six_card_number,
        token,
        cvv,
        expiration,
        holder_name,
        number
        );
}

void cart_o_de_cr_dito_card_free(cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card) {
    if(NULL == cart_o_de_cr_dito_card){
        return ;
    }
    if(cart_o_de_cr_dito_card->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_o_de_cr_dito_card_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_o_de_cr_dito_card->first_six_card_number) {
        free(cart_o_de_cr_dito_card->first_six_card_number);
        cart_o_de_cr_dito_card->first_six_card_number = NULL;
    }
    if (cart_o_de_cr_dito_card->token) {
        free(cart_o_de_cr_dito_card->token);
        cart_o_de_cr_dito_card->token = NULL;
    }
    if (cart_o_de_cr_dito_card->cvv) {
        free(cart_o_de_cr_dito_card->cvv);
        cart_o_de_cr_dito_card->cvv = NULL;
    }
    if (cart_o_de_cr_dito_card->expiration) {
        dados_completos_do_cart_o_expiration_free(cart_o_de_cr_dito_card->expiration);
        cart_o_de_cr_dito_card->expiration = NULL;
    }
    if (cart_o_de_cr_dito_card->holder_name) {
        free(cart_o_de_cr_dito_card->holder_name);
        cart_o_de_cr_dito_card->holder_name = NULL;
    }
    if (cart_o_de_cr_dito_card->number) {
        free(cart_o_de_cr_dito_card->number);
        cart_o_de_cr_dito_card->number = NULL;
    }
    free(cart_o_de_cr_dito_card);
}

cJSON *cart_o_de_cr_dito_card_convertToJSON(cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card) {
    cJSON *item = cJSON_CreateObject();

    // cart_o_de_cr_dito_card->first_six_card_number
    if(cart_o_de_cr_dito_card->first_six_card_number) {
    if(cJSON_AddStringToObject(item, "firstSixCardNumber", cart_o_de_cr_dito_card->first_six_card_number) == NULL) {
    goto fail; //String
    }
    }


    // cart_o_de_cr_dito_card->token
    if (!cart_o_de_cr_dito_card->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", cart_o_de_cr_dito_card->token) == NULL) {
    goto fail; //String
    }


    // cart_o_de_cr_dito_card->cvv
    if (!cart_o_de_cr_dito_card->cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cvv", cart_o_de_cr_dito_card->cvv) == NULL) {
    goto fail; //String
    }


    // cart_o_de_cr_dito_card->expiration
    if (!cart_o_de_cr_dito_card->expiration) {
        goto fail;
    }
    cJSON *expiration_local_JSON = dados_completos_do_cart_o_expiration_convertToJSON(cart_o_de_cr_dito_card->expiration);
    if(expiration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expiration", expiration_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // cart_o_de_cr_dito_card->holder_name
    if (!cart_o_de_cr_dito_card->holder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "holderName", cart_o_de_cr_dito_card->holder_name) == NULL) {
    goto fail; //String
    }


    // cart_o_de_cr_dito_card->number
    if (!cart_o_de_cr_dito_card->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", cart_o_de_cr_dito_card->number) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_parseFromJSON(cJSON *cart_o_de_cr_dito_cardJSON){

    cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_local_var = NULL;

    // define the local variable for cart_o_de_cr_dito_card->expiration
    dados_completos_do_cart_o_expiration_t *expiration_local_nonprim = NULL;

    // cart_o_de_cr_dito_card->first_six_card_number
    cJSON *first_six_card_number = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_dito_cardJSON, "firstSixCardNumber");
    if (cJSON_IsNull(first_six_card_number)) {
        first_six_card_number = NULL;
    }
    if (first_six_card_number) { 
    if(!cJSON_IsString(first_six_card_number) && !cJSON_IsNull(first_six_card_number))
    {
    goto end; //String
    }
    }

    // cart_o_de_cr_dito_card->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_dito_cardJSON, "token");
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

    // cart_o_de_cr_dito_card->cvv
    cJSON *cvv = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_dito_cardJSON, "cvv");
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

    // cart_o_de_cr_dito_card->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_dito_cardJSON, "expiration");
    if (cJSON_IsNull(expiration)) {
        expiration = NULL;
    }
    if (!expiration) {
        goto end;
    }

    
    expiration_local_nonprim = dados_completos_do_cart_o_expiration_parseFromJSON(expiration); //nonprimitive

    // cart_o_de_cr_dito_card->holder_name
    cJSON *holder_name = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_dito_cardJSON, "holderName");
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

    // cart_o_de_cr_dito_card->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_dito_cardJSON, "number");
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


    cart_o_de_cr_dito_card_local_var = cart_o_de_cr_dito_card_create_internal (
        first_six_card_number && !cJSON_IsNull(first_six_card_number) ? strdup(first_six_card_number->valuestring) : NULL,
        strdup(token->valuestring),
        strdup(cvv->valuestring),
        expiration_local_nonprim,
        strdup(holder_name->valuestring),
        strdup(number->valuestring)
        );

    return cart_o_de_cr_dito_card_local_var;
end:
    if (expiration_local_nonprim) {
        dados_completos_do_cart_o_expiration_free(expiration_local_nonprim);
        expiration_local_nonprim = NULL;
    }
    return NULL;

}
