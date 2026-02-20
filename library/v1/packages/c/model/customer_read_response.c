#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_read_response.h"



static customer_read_response_t *customer_read_response_create_internal(
    char *id,
    char *name,
    char *email,
    payconductor_api_document_type__e document_type,
    char *document_number,
    char *phone_number,
    customer_address_response_t *address,
    char *created_at,
    char *updated_at
    ) {
    customer_read_response_t *customer_read_response_local_var = malloc(sizeof(customer_read_response_t));
    if (!customer_read_response_local_var) {
        return NULL;
    }
    customer_read_response_local_var->id = id;
    customer_read_response_local_var->name = name;
    customer_read_response_local_var->email = email;
    customer_read_response_local_var->document_type = document_type;
    customer_read_response_local_var->document_number = document_number;
    customer_read_response_local_var->phone_number = phone_number;
    customer_read_response_local_var->address = address;
    customer_read_response_local_var->created_at = created_at;
    customer_read_response_local_var->updated_at = updated_at;

    customer_read_response_local_var->_library_owned = 1;
    return customer_read_response_local_var;
}

__attribute__((deprecated)) customer_read_response_t *customer_read_response_create(
    char *id,
    char *name,
    char *email,
    payconductor_api_document_type__e document_type,
    char *document_number,
    char *phone_number,
    customer_address_response_t *address,
    char *created_at,
    char *updated_at
    ) {
    return customer_read_response_create_internal (
        id,
        name,
        email,
        document_type,
        document_number,
        phone_number,
        address,
        created_at,
        updated_at
        );
}

void customer_read_response_free(customer_read_response_t *customer_read_response) {
    if(NULL == customer_read_response){
        return ;
    }
    if(customer_read_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_read_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_read_response->id) {
        free(customer_read_response->id);
        customer_read_response->id = NULL;
    }
    if (customer_read_response->name) {
        free(customer_read_response->name);
        customer_read_response->name = NULL;
    }
    if (customer_read_response->email) {
        free(customer_read_response->email);
        customer_read_response->email = NULL;
    }
    if (customer_read_response->document_number) {
        free(customer_read_response->document_number);
        customer_read_response->document_number = NULL;
    }
    if (customer_read_response->phone_number) {
        free(customer_read_response->phone_number);
        customer_read_response->phone_number = NULL;
    }
    if (customer_read_response->address) {
        customer_address_response_free(customer_read_response->address);
        customer_read_response->address = NULL;
    }
    if (customer_read_response->created_at) {
        free(customer_read_response->created_at);
        customer_read_response->created_at = NULL;
    }
    if (customer_read_response->updated_at) {
        free(customer_read_response->updated_at);
        customer_read_response->updated_at = NULL;
    }
    free(customer_read_response);
}

cJSON *customer_read_response_convertToJSON(customer_read_response_t *customer_read_response) {
    cJSON *item = cJSON_CreateObject();

    // customer_read_response->id
    if (!customer_read_response->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", customer_read_response->id) == NULL) {
    goto fail; //String
    }


    // customer_read_response->name
    if (!customer_read_response->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", customer_read_response->name) == NULL) {
    goto fail; //String
    }


    // customer_read_response->email
    if (!customer_read_response->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", customer_read_response->email) == NULL) {
    goto fail; //String
    }


    // customer_read_response->document_type
    if (payconductor_api_document_type__NULL == customer_read_response->document_type) {
        goto fail;
    }
    cJSON *document_type_local_JSON = document_type_convertToJSON(customer_read_response->document_type);
    if(document_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "documentType", document_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // customer_read_response->document_number
    if (!customer_read_response->document_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "documentNumber", customer_read_response->document_number) == NULL) {
    goto fail; //String
    }


    // customer_read_response->phone_number
    if (!customer_read_response->phone_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "phoneNumber", customer_read_response->phone_number) == NULL) {
    goto fail; //String
    }


    // customer_read_response->address
    if (!customer_read_response->address) {
        goto fail;
    }
    cJSON *address_local_JSON = customer_address_response_convertToJSON(customer_read_response->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // customer_read_response->created_at
    if (!customer_read_response->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "createdAt", customer_read_response->created_at) == NULL) {
    goto fail; //String
    }


    // customer_read_response->updated_at
    if (!customer_read_response->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updatedAt", customer_read_response->updated_at) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_read_response_t *customer_read_response_parseFromJSON(cJSON *customer_read_responseJSON){

    customer_read_response_t *customer_read_response_local_var = NULL;

    // define the local variable for customer_read_response->document_type
    payconductor_api_document_type__e document_type_local_nonprim = 0;

    // define the local variable for customer_read_response->address
    customer_address_response_t *address_local_nonprim = NULL;

    // customer_read_response->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "id");
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

    // customer_read_response->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "name");
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

    // customer_read_response->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "email");
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

    // customer_read_response->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "documentType");
    if (cJSON_IsNull(document_type)) {
        document_type = NULL;
    }
    if (!document_type) {
        goto end;
    }

    
    document_type_local_nonprim = document_type_parseFromJSON(document_type); //custom

    // customer_read_response->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "documentNumber");
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

    // customer_read_response->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "phoneNumber");
    if (cJSON_IsNull(phone_number)) {
        phone_number = NULL;
    }
    if (!phone_number) {
        goto end;
    }

    
    if(!cJSON_IsString(phone_number))
    {
    goto end; //String
    }

    // customer_read_response->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (!address) {
        goto end;
    }

    
    address_local_nonprim = customer_address_response_parseFromJSON(address); //nonprimitive

    // customer_read_response->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "createdAt");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // customer_read_response->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(customer_read_responseJSON, "updatedAt");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }


    customer_read_response_local_var = customer_read_response_create_internal (
        strdup(id->valuestring),
        strdup(name->valuestring),
        strdup(email->valuestring),
        document_type_local_nonprim,
        strdup(document_number->valuestring),
        strdup(phone_number->valuestring),
        address_local_nonprim,
        strdup(created_at->valuestring),
        strdup(updated_at->valuestring)
        );

    return customer_read_response_local_var;
end:
    if (document_type_local_nonprim) {
        document_type_local_nonprim = 0;
    }
    if (address_local_nonprim) {
        customer_address_response_free(address_local_nonprim);
        address_local_nonprim = NULL;
    }
    return NULL;

}
