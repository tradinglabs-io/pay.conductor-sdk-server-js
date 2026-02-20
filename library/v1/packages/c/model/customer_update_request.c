#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_update_request.h"



static customer_update_request_t *customer_update_request_create_internal(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number
    ) {
    customer_update_request_t *customer_update_request_local_var = malloc(sizeof(customer_update_request_t));
    if (!customer_update_request_local_var) {
        return NULL;
    }
    customer_update_request_local_var->address = address;
    customer_update_request_local_var->document_number = document_number;
    customer_update_request_local_var->document_type = document_type;
    customer_update_request_local_var->email = email;
    customer_update_request_local_var->name = name;
    customer_update_request_local_var->phone_number = phone_number;

    customer_update_request_local_var->_library_owned = 1;
    return customer_update_request_local_var;
}

__attribute__((deprecated)) customer_update_request_t *customer_update_request_create(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number
    ) {
    return customer_update_request_create_internal (
        address,
        document_number,
        document_type,
        email,
        name,
        phone_number
        );
}

void customer_update_request_free(customer_update_request_t *customer_update_request) {
    if(NULL == customer_update_request){
        return ;
    }
    if(customer_update_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_update_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_update_request->address) {
        address_create_request_free(customer_update_request->address);
        customer_update_request->address = NULL;
    }
    if (customer_update_request->document_number) {
        free(customer_update_request->document_number);
        customer_update_request->document_number = NULL;
    }
    if (customer_update_request->email) {
        free(customer_update_request->email);
        customer_update_request->email = NULL;
    }
    if (customer_update_request->name) {
        free(customer_update_request->name);
        customer_update_request->name = NULL;
    }
    if (customer_update_request->phone_number) {
        free(customer_update_request->phone_number);
        customer_update_request->phone_number = NULL;
    }
    free(customer_update_request);
}

cJSON *customer_update_request_convertToJSON(customer_update_request_t *customer_update_request) {
    cJSON *item = cJSON_CreateObject();

    // customer_update_request->address
    if(customer_update_request->address) {
    cJSON *address_local_JSON = address_create_request_convertToJSON(customer_update_request->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_update_request->document_number
    if(customer_update_request->document_number) {
    if(cJSON_AddStringToObject(item, "documentNumber", customer_update_request->document_number) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_request->document_type
    if(customer_update_request->document_type != payconductor_api_document_type__NULL) {
    cJSON *document_type_local_JSON = document_type_convertToJSON(customer_update_request->document_type);
    if(document_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "documentType", document_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // customer_update_request->email
    if(customer_update_request->email) {
    if(cJSON_AddStringToObject(item, "email", customer_update_request->email) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_request->name
    if(customer_update_request->name) {
    if(cJSON_AddStringToObject(item, "name", customer_update_request->name) == NULL) {
    goto fail; //String
    }
    }


    // customer_update_request->phone_number
    if(customer_update_request->phone_number) {
    if(cJSON_AddStringToObject(item, "phoneNumber", customer_update_request->phone_number) == NULL) {
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

customer_update_request_t *customer_update_request_parseFromJSON(cJSON *customer_update_requestJSON){

    customer_update_request_t *customer_update_request_local_var = NULL;

    // define the local variable for customer_update_request->address
    address_create_request_t *address_local_nonprim = NULL;

    // define the local variable for customer_update_request->document_type
    payconductor_api_document_type__e document_type_local_nonprim = 0;

    // customer_update_request->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(customer_update_requestJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    address_local_nonprim = address_create_request_parseFromJSON(address); //nonprimitive
    }

    // customer_update_request->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(customer_update_requestJSON, "documentNumber");
    if (cJSON_IsNull(document_number)) {
        document_number = NULL;
    }
    if (document_number) { 
    if(!cJSON_IsString(document_number) && !cJSON_IsNull(document_number))
    {
    goto end; //String
    }
    }

    // customer_update_request->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(customer_update_requestJSON, "documentType");
    if (cJSON_IsNull(document_type)) {
        document_type = NULL;
    }
    if (document_type) { 
    document_type_local_nonprim = document_type_parseFromJSON(document_type); //custom
    }

    // customer_update_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customer_update_requestJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // customer_update_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(customer_update_requestJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // customer_update_request->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(customer_update_requestJSON, "phoneNumber");
    if (cJSON_IsNull(phone_number)) {
        phone_number = NULL;
    }
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }


    customer_update_request_local_var = customer_update_request_create_internal (
        address ? address_local_nonprim : NULL,
        document_number && !cJSON_IsNull(document_number) ? strdup(document_number->valuestring) : NULL,
        document_type ? document_type_local_nonprim : 0,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        phone_number && !cJSON_IsNull(phone_number) ? strdup(phone_number->valuestring) : NULL
        );

    return customer_update_request_local_var;
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
