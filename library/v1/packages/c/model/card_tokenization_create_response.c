#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "card_tokenization_create_response.h"



static card_tokenization_create_response_t *card_tokenization_create_response_create_internal(
    char *customer_id,
    char *token
    ) {
    card_tokenization_create_response_t *card_tokenization_create_response_local_var = malloc(sizeof(card_tokenization_create_response_t));
    if (!card_tokenization_create_response_local_var) {
        return NULL;
    }
    card_tokenization_create_response_local_var->customer_id = customer_id;
    card_tokenization_create_response_local_var->token = token;

    card_tokenization_create_response_local_var->_library_owned = 1;
    return card_tokenization_create_response_local_var;
}

__attribute__((deprecated)) card_tokenization_create_response_t *card_tokenization_create_response_create(
    char *customer_id,
    char *token
    ) {
    return card_tokenization_create_response_create_internal (
        customer_id,
        token
        );
}

void card_tokenization_create_response_free(card_tokenization_create_response_t *card_tokenization_create_response) {
    if(NULL == card_tokenization_create_response){
        return ;
    }
    if(card_tokenization_create_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "card_tokenization_create_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (card_tokenization_create_response->customer_id) {
        free(card_tokenization_create_response->customer_id);
        card_tokenization_create_response->customer_id = NULL;
    }
    if (card_tokenization_create_response->token) {
        free(card_tokenization_create_response->token);
        card_tokenization_create_response->token = NULL;
    }
    free(card_tokenization_create_response);
}

cJSON *card_tokenization_create_response_convertToJSON(card_tokenization_create_response_t *card_tokenization_create_response) {
    cJSON *item = cJSON_CreateObject();

    // card_tokenization_create_response->customer_id
    if (!card_tokenization_create_response->customer_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "customerId", card_tokenization_create_response->customer_id) == NULL) {
    goto fail; //String
    }


    // card_tokenization_create_response->token
    if (!card_tokenization_create_response->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", card_tokenization_create_response->token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

card_tokenization_create_response_t *card_tokenization_create_response_parseFromJSON(cJSON *card_tokenization_create_responseJSON){

    card_tokenization_create_response_t *card_tokenization_create_response_local_var = NULL;

    // card_tokenization_create_response->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_responseJSON, "customerId");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (!customer_id) {
        goto end;
    }

    
    if(!cJSON_IsString(customer_id))
    {
    goto end; //String
    }

    // card_tokenization_create_response->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_responseJSON, "token");
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


    card_tokenization_create_response_local_var = card_tokenization_create_response_create_internal (
        strdup(customer_id->valuestring),
        strdup(token->valuestring)
        );

    return card_tokenization_create_response_local_var;
end:
    return NULL;

}
