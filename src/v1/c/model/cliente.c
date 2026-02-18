#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cliente.h"


char* cliente_document_type_ToString(payconductor_api_cliente_DOCUMENTTYPE_e document_type) {
    char* document_typeArray[] =  { "NULL", "Cpf", "Cnpj" };
    return document_typeArray[document_type];
}

payconductor_api_cliente_DOCUMENTTYPE_e cliente_document_type_FromString(char* document_type){
    int stringToReturn = 0;
    char *document_typeArray[] =  { "NULL", "Cpf", "Cnpj" };
    size_t sizeofArray = sizeof(document_typeArray) / sizeof(document_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(document_type, document_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static cliente_t *cliente_create_internal(
    endere_o_do_cliente_t *address,
    char *document_number,
    payconductor_api_cliente_DOCUMENTTYPE_e document_type,
    char *email,
    char *name,
    char *phone_number
    ) {
    cliente_t *cliente_local_var = malloc(sizeof(cliente_t));
    if (!cliente_local_var) {
        return NULL;
    }
    cliente_local_var->address = address;
    cliente_local_var->document_number = document_number;
    cliente_local_var->document_type = document_type;
    cliente_local_var->email = email;
    cliente_local_var->name = name;
    cliente_local_var->phone_number = phone_number;

    cliente_local_var->_library_owned = 1;
    return cliente_local_var;
}

__attribute__((deprecated)) cliente_t *cliente_create(
    endere_o_do_cliente_t *address,
    char *document_number,
    payconductor_api_cliente_DOCUMENTTYPE_e document_type,
    char *email,
    char *name,
    char *phone_number
    ) {
    return cliente_create_internal (
        address,
        document_number,
        document_type,
        email,
        name,
        phone_number
        );
}

void cliente_free(cliente_t *cliente) {
    if(NULL == cliente){
        return ;
    }
    if(cliente->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cliente_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cliente->address) {
        endere_o_do_cliente_free(cliente->address);
        cliente->address = NULL;
    }
    if (cliente->document_number) {
        free(cliente->document_number);
        cliente->document_number = NULL;
    }
    if (cliente->email) {
        free(cliente->email);
        cliente->email = NULL;
    }
    if (cliente->name) {
        free(cliente->name);
        cliente->name = NULL;
    }
    if (cliente->phone_number) {
        free(cliente->phone_number);
        cliente->phone_number = NULL;
    }
    free(cliente);
}

cJSON *cliente_convertToJSON(cliente_t *cliente) {
    cJSON *item = cJSON_CreateObject();

    // cliente->address
    if(cliente->address) {
    cJSON *address_local_JSON = endere_o_do_cliente_convertToJSON(cliente->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cliente->document_number
    if (!cliente->document_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "documentNumber", cliente->document_number) == NULL) {
    goto fail; //String
    }


    // cliente->document_type
    if (payconductor_api_cliente_DOCUMENTTYPE_NULL == cliente->document_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "documentType", cliente_document_type_ToString(cliente->document_type)) == NULL)
    {
    goto fail; //Enum
    }


    // cliente->email
    if (!cliente->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", cliente->email) == NULL) {
    goto fail; //String
    }


    // cliente->name
    if (!cliente->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", cliente->name) == NULL) {
    goto fail; //String
    }


    // cliente->phone_number
    if(cliente->phone_number) {
    if(cJSON_AddStringToObject(item, "phoneNumber", cliente->phone_number) == NULL) {
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

cliente_t *cliente_parseFromJSON(cJSON *clienteJSON){

    cliente_t *cliente_local_var = NULL;

    // define the local variable for cliente->address
    endere_o_do_cliente_t *address_local_nonprim = NULL;

    // cliente->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(clienteJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    address_local_nonprim = endere_o_do_cliente_parseFromJSON(address); //nonprimitive
    }

    // cliente->document_number
    cJSON *document_number = cJSON_GetObjectItemCaseSensitive(clienteJSON, "documentNumber");
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

    // cliente->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(clienteJSON, "documentType");
    if (cJSON_IsNull(document_type)) {
        document_type = NULL;
    }
    if (!document_type) {
        goto end;
    }

    payconductor_api_cliente_DOCUMENTTYPE_e document_typeVariable;
    
    if(!cJSON_IsString(document_type))
    {
    goto end; //Enum
    }
    document_typeVariable = cliente_document_type_FromString(document_type->valuestring);

    // cliente->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(clienteJSON, "email");
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

    // cliente->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(clienteJSON, "name");
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

    // cliente->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(clienteJSON, "phoneNumber");
    if (cJSON_IsNull(phone_number)) {
        phone_number = NULL;
    }
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }


    cliente_local_var = cliente_create_internal (
        address ? address_local_nonprim : NULL,
        strdup(document_number->valuestring),
        document_typeVariable,
        strdup(email->valuestring),
        strdup(name->valuestring),
        phone_number && !cJSON_IsNull(phone_number) ? strdup(phone_number->valuestring) : NULL
        );

    return cliente_local_var;
end:
    if (address_local_nonprim) {
        endere_o_do_cliente_free(address_local_nonprim);
        address_local_nonprim = NULL;
    }
    return NULL;

}
