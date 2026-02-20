#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "card_tokenization_create_request.h"



static card_tokenization_create_request_t *card_tokenization_create_request_create_internal(
    card_create_request_t *card,
    int save_card,
    card_tokenization_create_request_customer_t *customer
    ) {
    card_tokenization_create_request_t *card_tokenization_create_request_local_var = malloc(sizeof(card_tokenization_create_request_t));
    if (!card_tokenization_create_request_local_var) {
        return NULL;
    }
    card_tokenization_create_request_local_var->card = card;
    card_tokenization_create_request_local_var->save_card = save_card;
    card_tokenization_create_request_local_var->customer = customer;

    card_tokenization_create_request_local_var->_library_owned = 1;
    return card_tokenization_create_request_local_var;
}

__attribute__((deprecated)) card_tokenization_create_request_t *card_tokenization_create_request_create(
    card_create_request_t *card,
    int save_card,
    card_tokenization_create_request_customer_t *customer
    ) {
    return card_tokenization_create_request_create_internal (
        card,
        save_card,
        customer
        );
}

void card_tokenization_create_request_free(card_tokenization_create_request_t *card_tokenization_create_request) {
    if(NULL == card_tokenization_create_request){
        return ;
    }
    if(card_tokenization_create_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "card_tokenization_create_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (card_tokenization_create_request->card) {
        card_create_request_free(card_tokenization_create_request->card);
        card_tokenization_create_request->card = NULL;
    }
    if (card_tokenization_create_request->customer) {
        card_tokenization_create_request_customer_free(card_tokenization_create_request->customer);
        card_tokenization_create_request->customer = NULL;
    }
    free(card_tokenization_create_request);
}

cJSON *card_tokenization_create_request_convertToJSON(card_tokenization_create_request_t *card_tokenization_create_request) {
    cJSON *item = cJSON_CreateObject();

    // card_tokenization_create_request->card
    if (!card_tokenization_create_request->card) {
        goto fail;
    }
    cJSON *card_local_JSON = card_create_request_convertToJSON(card_tokenization_create_request->card);
    if(card_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "card", card_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // card_tokenization_create_request->save_card
    if (!card_tokenization_create_request->save_card) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "saveCard", card_tokenization_create_request->save_card) == NULL) {
    goto fail; //Bool
    }


    // card_tokenization_create_request->customer
    if (!card_tokenization_create_request->customer) {
        goto fail;
    }
    cJSON *customer_local_JSON = card_tokenization_create_request_customer_convertToJSON(card_tokenization_create_request->customer);
    if(customer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "customer", customer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

card_tokenization_create_request_t *card_tokenization_create_request_parseFromJSON(cJSON *card_tokenization_create_requestJSON){

    card_tokenization_create_request_t *card_tokenization_create_request_local_var = NULL;

    // define the local variable for card_tokenization_create_request->card
    card_create_request_t *card_local_nonprim = NULL;

    // define the local variable for card_tokenization_create_request->customer
    card_tokenization_create_request_customer_t *customer_local_nonprim = NULL;

    // card_tokenization_create_request->card
    cJSON *card = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_requestJSON, "card");
    if (cJSON_IsNull(card)) {
        card = NULL;
    }
    if (!card) {
        goto end;
    }

    
    card_local_nonprim = card_create_request_parseFromJSON(card); //nonprimitive

    // card_tokenization_create_request->save_card
    cJSON *save_card = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_requestJSON, "saveCard");
    if (cJSON_IsNull(save_card)) {
        save_card = NULL;
    }
    if (!save_card) {
        goto end;
    }

    
    if(!cJSON_IsBool(save_card))
    {
    goto end; //Bool
    }

    // card_tokenization_create_request->customer
    cJSON *customer = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_requestJSON, "customer");
    if (cJSON_IsNull(customer)) {
        customer = NULL;
    }
    if (!customer) {
        goto end;
    }

    
    customer_local_nonprim = card_tokenization_create_request_customer_parseFromJSON(customer); //nonprimitive


    card_tokenization_create_request_local_var = card_tokenization_create_request_create_internal (
        card_local_nonprim,
        save_card->valueint,
        customer_local_nonprim
        );

    return card_tokenization_create_request_local_var;
end:
    if (card_local_nonprim) {
        card_create_request_free(card_local_nonprim);
        card_local_nonprim = NULL;
    }
    if (customer_local_nonprim) {
        card_tokenization_create_request_customer_free(customer_local_nonprim);
        customer_local_nonprim = NULL;
    }
    return NULL;

}
