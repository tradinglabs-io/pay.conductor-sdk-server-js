#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_create_request.h"



static customer_create_request_t *customer_create_request_create_internal(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number
    ) {
    customer_create_request_t *customer_create_request_local_var = malloc(sizeof(customer_create_request_t));
    if (!customer_create_request_local_var) {
        return NULL;
    }
    customer_create_request_local_var->address = address;
    customer_create_request_local_var->document_number = document_number;
    customer_create_request_local_var->document_type = document_type;
    customer_create_request_local_var->email = email;
    customer_create_request_local_var->name = name;
    customer_create_request_local_var->phone_number = phone_number;

    customer_create_request_local_var->_library_owned = 1;
    return customer_create_request_local_var;
}

__attribute__((deprecated)) customer_create_request_t *customer_create_request_create(
    address_create_request_t *address,
    char *document_number,
    payconductor_api_document_type__e document_type,
    char *email,
    char *name,
    char *phone_number
    ) {
    return customer_create_request_create_internal (
        address,
        document_number,
        document_type,
        email,
        name,
        phone_number
        );
}

void customer_create_request_free(customer_create_request_t *customer_create_request) {
    if(NULL == customer_create_request){
        return ;
    }
    if(customer_create_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_create_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_create_request->address) {
        address_create_request_free(customer_create_request->address);
        customer_create_request->address = NULL;
    }
    if (customer_create_request->document_number) {
        free(customer_create_request->document_number);
        customer_create_request->document_number = NULL;
    }
    if (customer_create_request->email) {
        free(customer_create_request->email);
        customer_create_request->email = NULL;
    }
    if (customer_create_request->name) {
        free(customer_create_request->name);
        customer_create_request->name = NULL;
    }
    if (customer_create_request->phone_number) {
        free(customer_create_request->phone_number);
        customer_create_request->phone_number = NULL;
    }
    free(customer_create_request);
}

cJSON *customer_create_request_convertToJSON(customer_create_request_t *customer_create_request) {
    cJSON *item = cJSON_CreateObject();

    // customer_create_request->address
    if(customer_create_request->address) {
    cJSON *address_local_JSON = address_create_request_convertToJSON(customer_create_request->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_create_request->document_number
    if (!customer_create_request->document_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "documentNumber", customer_create_request->document_number) == NULL) {
    goto fail; //String
    }


    // customer_create_request->document_type
    if (payconductor_api_document_type__NULL == customer_create_request->document_type) {
        goto fail;
    }
    cJSON *document_type_local_JSON = document_type_convertToJSON(customer_create_request->document_type);
    if(document_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "documentType", document_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // customer_create_request->email
    if (!customer_create_request->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", customer_create_request->email) == NULL) {
    goto fail; //String
    }


    // customer_create_request->name
    if (!customer_create_request->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", customer_create_request->name) == NULL) {
    goto fail; //String
    }


    // customer_create_request->phone_number
    if(customer_create_request->phone_number) {
    if(cJSON_AddStringToObject(item, "phoneNumber", customer_create_request->phone_number) == NULL) {
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

customer_create_request_t *customer_create_request_parseFromJSON(cJSON *customer_create_requestJSON){

    customer_create_request_t *customer_create_request_local_var = NULL;

    // define the local variable for customer_create_request->address
    address_create_request_t *address_local_nonprim = NULL;

    // define the local variable for customer_create_request->document_type
    payconductor_api_document_type__e document_type_local_nonprim = 0;

    // customer_create_request->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(customer_create_requestJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    address_local_nonprim = address_create_request_parseFromJSON(address); //nonprimitive
    }

    // customer_create_request->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(customer_create_requestJSON, "documentNumber");
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

    // customer_create_request->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(customer_create_requestJSON, "documentType");
    if (cJSON_IsNull(document_type)) {
        document_type = NULL;
    }
    if (!document_type) {
        goto end;
    }

    
    document_type_local_nonprim = document_type_parseFromJSON(document_type); //custom

    // customer_create_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customer_create_requestJSON, "email");
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

    // customer_create_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(customer_create_requestJSON, "name");
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

    // customer_create_request->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(customer_create_requestJSON, "phoneNumber");
    if (cJSON_IsNull(phone_number)) {
        phone_number = NULL;
    }
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }


    customer_create_request_local_var = customer_create_request_create_internal (
        address ? address_local_nonprim : NULL,
        strdup(document_number->valuestring),
        document_type_local_nonprim,
        strdup(email->valuestring),
        strdup(name->valuestring),
        phone_number && !cJSON_IsNull(phone_number) ? strdup(phone_number->valuestring) : NULL
        );

    return customer_create_request_local_var;
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
