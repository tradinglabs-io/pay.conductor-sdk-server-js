#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_o_tokenizado.h"



static cart_o_tokenizado_t *cart_o_tokenizado_create_internal(
    char *first_six_card_number,
    char *token
    ) {
    cart_o_tokenizado_t *cart_o_tokenizado_local_var = malloc(sizeof(cart_o_tokenizado_t));
    if (!cart_o_tokenizado_local_var) {
        return NULL;
    }
    cart_o_tokenizado_local_var->first_six_card_number = first_six_card_number;
    cart_o_tokenizado_local_var->token = token;

    cart_o_tokenizado_local_var->_library_owned = 1;
    return cart_o_tokenizado_local_var;
}

__attribute__((deprecated)) cart_o_tokenizado_t *cart_o_tokenizado_create(
    char *first_six_card_number,
    char *token
    ) {
    return cart_o_tokenizado_create_internal (
        first_six_card_number,
        token
        );
}

void cart_o_tokenizado_free(cart_o_tokenizado_t *cart_o_tokenizado) {
    if(NULL == cart_o_tokenizado){
        return ;
    }
    if(cart_o_tokenizado->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_o_tokenizado_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_o_tokenizado->first_six_card_number) {
        free(cart_o_tokenizado->first_six_card_number);
        cart_o_tokenizado->first_six_card_number = NULL;
    }
    if (cart_o_tokenizado->token) {
        free(cart_o_tokenizado->token);
        cart_o_tokenizado->token = NULL;
    }
    free(cart_o_tokenizado);
}

cJSON *cart_o_tokenizado_convertToJSON(cart_o_tokenizado_t *cart_o_tokenizado) {
    cJSON *item = cJSON_CreateObject();

    // cart_o_tokenizado->first_six_card_number
    if(cart_o_tokenizado->first_six_card_number) {
    if(cJSON_AddStringToObject(item, "firstSixCardNumber", cart_o_tokenizado->first_six_card_number) == NULL) {
    goto fail; //String
    }
    }


    // cart_o_tokenizado->token
    if (!cart_o_tokenizado->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", cart_o_tokenizado->token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_o_tokenizado_t *cart_o_tokenizado_parseFromJSON(cJSON *cart_o_tokenizadoJSON){

    cart_o_tokenizado_t *cart_o_tokenizado_local_var = NULL;

    // cart_o_tokenizado->first_six_card_number
    cJSON *first_six_card_number = cJSON_GetObjectItemCaseSensitive(cart_o_tokenizadoJSON, "firstSixCardNumber");
    if (cJSON_IsNull(first_six_card_number)) {
        first_six_card_number = NULL;
    }
    if (first_six_card_number) { 
    if(!cJSON_IsString(first_six_card_number) && !cJSON_IsNull(first_six_card_number))
    {
    goto end; //String
    }
    }

    // cart_o_tokenizado->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(cart_o_tokenizadoJSON, "token");
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


    cart_o_tokenizado_local_var = cart_o_tokenizado_create_internal (
        first_six_card_number && !cJSON_IsNull(first_six_card_number) ? strdup(first_six_card_number->valuestring) : NULL,
        strdup(token->valuestring)
        );

    return cart_o_tokenizado_local_var;
end:
    return NULL;

}
