#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "card_tokenization_create_request_customer.h"



static card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_create_internal(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number,
    char *id
    ) {
    card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_local_var = malloc(sizeof(card_tokenization_create_request_customer_t));
    if (!card_tokenization_create_request_customer_local_var) {
        return NULL;
    }
    card_tokenization_create_request_customer_local_var->address = address;
    card_tokenization_create_request_customer_local_var->document_number = document_number;
    card_tokenization_create_request_customer_local_var->document_type = document_type;
    card_tokenization_create_request_customer_local_var->email = email;
    card_tokenization_create_request_customer_local_var->name = name;
    card_tokenization_create_request_customer_local_var->phone_number = phone_number;
    card_tokenization_create_request_customer_local_var->id = id;

    card_tokenization_create_request_customer_local_var->_library_owned = 1;
    return card_tokenization_create_request_customer_local_var;
}

__attribute__((deprecated)) card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_create(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number,
    char *id
    ) {
    return card_tokenization_create_request_customer_create_internal (
        address,
        document_number,
        document_type,
        email,
        name,
        phone_number,
        id
        );
}

void card_tokenization_create_request_customer_free(card_tokenization_create_request_customer_t *card_tokenization_create_request_customer) {
    if(NULL == card_tokenization_create_request_customer){
        return ;
    }
    if(card_tokenization_create_request_customer->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "card_tokenization_create_request_customer_free");
        return ;
    }
    listEntry_t *listEntry;
    if (card_tokenization_create_request_customer->address) {
        address_create_request_free(card_tokenization_create_request_customer->address);
        card_tokenization_create_request_customer->address = NULL;
    }
    if (card_tokenization_create_request_customer->document_number) {
        free(card_tokenization_create_request_customer->document_number);
        card_tokenization_create_request_customer->document_number = NULL;
    }
    if (card_tokenization_create_request_customer->email) {
        free(card_tokenization_create_request_customer->email);
        card_tokenization_create_request_customer->email = NULL;
    }
    if (card_tokenization_create_request_customer->name) {
        free(card_tokenization_create_request_customer->name);
        card_tokenization_create_request_customer->name = NULL;
    }
    if (card_tokenization_create_request_customer->phone_number) {
        free(card_tokenization_create_request_customer->phone_number);
        card_tokenization_create_request_customer->phone_number = NULL;
    }
    if (card_tokenization_create_request_customer->id) {
        free(card_tokenization_create_request_customer->id);
        card_tokenization_create_request_customer->id = NULL;
    }
    free(card_tokenization_create_request_customer);
}

cJSON *card_tokenization_create_request_customer_convertToJSON(card_tokenization_create_request_customer_t *card_tokenization_create_request_customer) {
    cJSON *item = cJSON_CreateObject();

    // card_tokenization_create_request_customer->address
    if(card_tokenization_create_request_customer->address) {
    cJSON *address_local_JSON = address_create_request_convertToJSON(card_tokenization_create_request_customer->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // card_tokenization_create_request_customer->document_number
    if (!card_tokenization_create_request_customer->document_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "documentNumber", card_tokenization_create_request_customer->document_number) == NULL) {
    goto fail; //String
    }


    // card_tokenization_create_request_customer->document_type
    if (payconductor_api_document_type__NULL == card_tokenization_create_request_customer->document_type) {
        goto fail;
    }
    cJSON *document_type_local_JSON = document_type_convertToJSON(card_tokenization_create_request_customer->document_type);
    if(document_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "documentType", document_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // card_tokenization_create_request_customer->email
    if (!card_tokenization_create_request_customer->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", card_tokenization_create_request_customer->email) == NULL) {
    goto fail; //String
    }


    // card_tokenization_create_request_customer->name
    if (!card_tokenization_create_request_customer->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", card_tokenization_create_request_customer->name) == NULL) {
    goto fail; //String
    }


    // card_tokenization_create_request_customer->phone_number
    if(card_tokenization_create_request_customer->phone_number) {
    if(cJSON_AddStringToObject(item, "phoneNumber", card_tokenization_create_request_customer->phone_number) == NULL) {
    goto fail; //String
    }
    }


    // card_tokenization_create_request_customer->id
    if (!card_tokenization_create_request_customer->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", card_tokenization_create_request_customer->id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_parseFromJSON(cJSON *card_tokenization_create_request_customerJSON){

    card_tokenization_create_request_customer_t *card_tokenization_create_request_customer_local_var = NULL;

    // define the local variable for card_tokenization_create_request_customer->address
    address_create_request_t *address_local_nonprim = NULL;

    // define the local variable for card_tokenization_create_request_customer->document_type
    payconductor_api_document_type__e document_type_local_nonprim = 0;

    // card_tokenization_create_request_customer->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    address_local_nonprim = address_create_request_parseFromJSON(address); //nonprimitive
    }

    // card_tokenization_create_request_customer->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "documentNumber");
    if (cJSON_IsNull(document_number)) {
        document_number = NULL;
    }
    if (!document_number) {
        goto end;
    }

    
    if(!cJSON_IsString(document_number))
    {
    goto end; //String
    }

    // card_tokenization_create_request_customer->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "documentType");
    if (cJSON_IsNull(document_type)) {
        document_type = NULL;
    }
    if (!document_type) {
        goto end;
    }

    
    document_type_local_nonprim = document_type_parseFromJSON(document_type); //custom

    // card_tokenization_create_request_customer->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // card_tokenization_create_request_customer->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // card_tokenization_create_request_customer->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "phoneNumber");
    if (cJSON_IsNull(phone_number)) {
        phone_number = NULL;
    }
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }

    // card_tokenization_create_request_customer->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(card_tokenization_create_request_customerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }


    card_tokenization_create_request_customer_local_var = card_tokenization_create_request_customer_create_internal (
        address ? address_local_nonprim : NULL,
        strdup(document_number->valuestring),
        document_type_local_nonprim,
        strdup(email->valuestring),
        strdup(name->valuestring),
        phone_number && !cJSON_IsNull(phone_number) ? strdup(phone_number->valuestring) : NULL,
        strdup(id->valuestring)
        );

    return card_tokenization_create_request_customer_local_var;
end:
    if (address_local_nonprim) {
        address_create_request_free(address_local_nonprim);
        address_local_nonprim = NULL;
    }
    if (document_type_local_nonprim) {
        document_type_local_nonprim = 0;
    }
    return NULL;

}
