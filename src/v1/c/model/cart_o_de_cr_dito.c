#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_o_de_cr_dito.h"



static cart_o_de_cr_dito_t *cart_o_de_cr_dito_create_internal(
    char *payment_method,
    cart_o_de_cr_dito_card_t *card,
    cart_o_de_cr_dito_installments_t *installments,
    char *soft_descriptor
    ) {
    cart_o_de_cr_dito_t *cart_o_de_cr_dito_local_var = malloc(sizeof(cart_o_de_cr_dito_t));
    if (!cart_o_de_cr_dito_local_var) {
        return NULL;
    }
    cart_o_de_cr_dito_local_var->payment_method = payment_method;
    cart_o_de_cr_dito_local_var->card = card;
    cart_o_de_cr_dito_local_var->installments = installments;
    cart_o_de_cr_dito_local_var->soft_descriptor = soft_descriptor;

    cart_o_de_cr_dito_local_var->_library_owned = 1;
    return cart_o_de_cr_dito_local_var;
}

__attribute__((deprecated)) cart_o_de_cr_dito_t *cart_o_de_cr_dito_create(
    char *payment_method,
    cart_o_de_cr_dito_card_t *card,
    cart_o_de_cr_dito_installments_t *installments,
    char *soft_descriptor
    ) {
    return cart_o_de_cr_dito_create_internal (
        payment_method,
        card,
        installments,
        soft_descriptor
        );
}

void cart_o_de_cr_dito_free(cart_o_de_cr_dito_t *cart_o_de_cr_dito) {
    if(NULL == cart_o_de_cr_dito){
        return ;
    }
    if(cart_o_de_cr_dito->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_o_de_cr_dito_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_o_de_cr_dito->payment_method) {
        free(cart_o_de_cr_dito->payment_method);
        cart_o_de_cr_dito->payment_method = NULL;
    }
    if (cart_o_de_cr_dito->card) {
        cart_o_de_cr_dito_card_free(cart_o_de_cr_dito->card);
        cart_o_de_cr_dito->card = NULL;
    }
    if (cart_o_de_cr_dito->installments) {
        cart_o_de_cr_dito_installments_free(cart_o_de_cr_dito->installments);
        cart_o_de_cr_dito->installments = NULL;
    }
    if (cart_o_de_cr_dito->soft_descriptor) {
        free(cart_o_de_cr_dito->soft_descriptor);
        cart_o_de_cr_dito->soft_descriptor = NULL;
    }
    free(cart_o_de_cr_dito);
}

cJSON *cart_o_de_cr_dito_convertToJSON(cart_o_de_cr_dito_t *cart_o_de_cr_dito) {
    cJSON *item = cJSON_CreateObject();

    // cart_o_de_cr_dito->payment_method
    if (!cart_o_de_cr_dito->payment_method) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "paymentMethod", cart_o_de_cr_dito->payment_method) == NULL) {
    goto fail; //String
    }


    // cart_o_de_cr_dito->card
    if (!cart_o_de_cr_dito->card) {
        goto fail;
    }
    cJSON *card_local_JSON = cart_o_de_cr_dito_card_convertToJSON(cart_o_de_cr_dito->card);
    if(card_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "card", card_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // cart_o_de_cr_dito->installments
    if (!cart_o_de_cr_dito->installments) {
        goto fail;
    }
    cJSON *installments_local_JSON = cart_o_de_cr_dito_installments_convertToJSON(cart_o_de_cr_dito->installments);
    if(installments_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "installments", installments_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // cart_o_de_cr_dito->soft_descriptor
    if(cart_o_de_cr_dito->soft_descriptor) {
    if(cJSON_AddStringToObject(item, "softDescriptor", cart_o_de_cr_dito->soft_descriptor) == NULL) {
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

cart_o_de_cr_dito_t *cart_o_de_cr_dito_parseFromJSON(cJSON *cart_o_de_cr_ditoJSON){

    cart_o_de_cr_dito_t *cart_o_de_cr_dito_local_var = NULL;

    // define the local variable for cart_o_de_cr_dito->card
    cart_o_de_cr_dito_card_t *card_local_nonprim = NULL;

    // define the local variable for cart_o_de_cr_dito->installments
    cart_o_de_cr_dito_installments_t *installments_local_nonprim = NULL;

    // cart_o_de_cr_dito->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_ditoJSON, "paymentMethod");
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

    // cart_o_de_cr_dito->card
    cJSON *card = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_ditoJSON, "card");
    if (cJSON_IsNull(card)) {
        card = NULL;
    }
    if (!card) {
        goto end;
    }

    
    card_local_nonprim = cart_o_de_cr_dito_card_parseFromJSON(card); //nonprimitive

    // cart_o_de_cr_dito->installments
    cJSON *installments = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_ditoJSON, "installments");
    if (cJSON_IsNull(installments)) {
        installments = NULL;
    }
    if (!installments) {
        goto end;
    }

    
    installments_local_nonprim = cart_o_de_cr_dito_installments_parseFromJSON(installments); //nonprimitive

    // cart_o_de_cr_dito->soft_descriptor
    cJSON *soft_descriptor = cJSON_GetObjectItemCaseSensitive(cart_o_de_cr_ditoJSON, "softDescriptor");
    if (cJSON_IsNull(soft_descriptor)) {
        soft_descriptor = NULL;
    }
    if (soft_descriptor) { 
    if(!cJSON_IsString(soft_descriptor) && !cJSON_IsNull(soft_descriptor))
    {
    goto end; //String
    }
    }


    cart_o_de_cr_dito_local_var = cart_o_de_cr_dito_create_internal (
        strdup(payment_method->valuestring),
        card_local_nonprim,
        installments_local_nonprim,
        soft_descriptor && !cJSON_IsNull(soft_descriptor) ? strdup(soft_descriptor->valuestring) : NULL
        );

    return cart_o_de_cr_dito_local_var;
end:
    if (card_local_nonprim) {
        cart_o_de_cr_dito_card_free(card_local_nonprim);
        card_local_nonprim = NULL;
    }
    if (installments_local_nonprim) {
        cart_o_de_cr_dito_installments_free(installments_local_nonprim);
        installments_local_nonprim = NULL;
    }
    return NULL;

}
