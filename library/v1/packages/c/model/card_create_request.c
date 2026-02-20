#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "card_create_request.h"



static card_create_request_t *card_create_request_create_internal(
    char *cvv,
    card_expiration_data_t *expiration,
    char *holder_name,
    char *number
    ) {
    card_create_request_t *card_create_request_local_var = malloc(sizeof(card_create_request_t));
    if (!card_create_request_local_var) {
        return NULL;
    }
    card_create_request_local_var->cvv = cvv;
    card_create_request_local_var->expiration = expiration;
    card_create_request_local_var->holder_name = holder_name;
    card_create_request_local_var->number = number;

    card_create_request_local_var->_library_owned = 1;
    return card_create_request_local_var;
}

__attribute__((deprecated)) card_create_request_t *card_create_request_create(
    char *cvv,
    card_expiration_data_t *expiration,
    char *holder_name,
    char *number
    ) {
    return card_create_request_create_internal (
        cvv,
        expiration,
        holder_name,
        number
        );
}

void card_create_request_free(card_create_request_t *card_create_request) {
    if(NULL == card_create_request){
        return ;
    }
    if(card_create_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "card_create_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (card_create_request->cvv) {
        free(card_create_request->cvv);
        card_create_request->cvv = NULL;
    }
    if (card_create_request->expiration) {
        card_expiration_data_free(card_create_request->expiration);
        card_create_request->expiration = NULL;
    }
    if (card_create_request->holder_name) {
        free(card_create_request->holder_name);
        card_create_request->holder_name = NULL;
    }
    if (card_create_request->number) {
        free(card_create_request->number);
        card_create_request->number = NULL;
    }
    free(card_create_request);
}

cJSON *card_create_request_convertToJSON(card_create_request_t *card_create_request) {
    cJSON *item = cJSON_CreateObject();

    // card_create_request->cvv
    if (!card_create_request->cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cvv", card_create_request->cvv) == NULL) {
    goto fail; //String
    }


    // card_create_request->expiration
    if (!card_create_request->expiration) {
        goto fail;
    }
    cJSON *expiration_local_JSON = card_expiration_data_convertToJSON(card_create_request->expiration);
    if(expiration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expiration", expiration_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // card_create_request->holder_name
    if (!card_create_request->holder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "holderName", card_create_request->holder_name) == NULL) {
    goto fail; //String
    }


    // card_create_request->number
    if (!card_create_request->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", card_create_request->number) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

card_create_request_t *card_create_request_parseFromJSON(cJSON *card_create_requestJSON){

    card_create_request_t *card_create_request_local_var = NULL;

    // define the local variable for card_create_request->expiration
    card_expiration_data_t *expiration_local_nonprim = NULL;

    // card_create_request->cvv
    cJSON *cvv = cJSON_GetObjectItemCaseSensitive(card_create_requestJSON, "cvv");
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

    // card_create_request->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(card_create_requestJSON, "expiration");
    if (cJSON_IsNull(expiration)) {
        expiration = NULL;
    }
    if (!expiration) {
        goto end;
    }

    
    expiration_local_nonprim = card_expiration_data_parseFromJSON(expiration); //nonprimitive

    // card_create_request->holder_name
    cJSON *holder_name = cJSON_GetObjectItemCaseSensitive(card_create_requestJSON, "holderName");
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

    // card_create_request->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(card_create_requestJSON, "number");
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


    card_create_request_local_var = card_create_request_create_internal (
        strdup(cvv->valuestring),
        expiration_local_nonprim,
        strdup(holder_name->valuestring),
        strdup(number->valuestring)
        );

    return card_create_request_local_var;
end:
    if (expiration_local_nonprim) {
        card_expiration_data_free(expiration_local_nonprim);
        expiration_local_nonprim = NULL;
    }
    return NULL;

}
