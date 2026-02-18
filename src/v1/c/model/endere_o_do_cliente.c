#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "endere_o_do_cliente.h"



static endere_o_do_cliente_t *endere_o_do_cliente_create_internal(
    char *city,
    char *country,
    char *neighborhood,
    char *number,
    char *state,
    char *street,
    char *zip_code
    ) {
    endere_o_do_cliente_t *endere_o_do_cliente_local_var = malloc(sizeof(endere_o_do_cliente_t));
    if (!endere_o_do_cliente_local_var) {
        return NULL;
    }
    endere_o_do_cliente_local_var->city = city;
    endere_o_do_cliente_local_var->country = country;
    endere_o_do_cliente_local_var->neighborhood = neighborhood;
    endere_o_do_cliente_local_var->number = number;
    endere_o_do_cliente_local_var->state = state;
    endere_o_do_cliente_local_var->street = street;
    endere_o_do_cliente_local_var->zip_code = zip_code;

    endere_o_do_cliente_local_var->_library_owned = 1;
    return endere_o_do_cliente_local_var;
}

__attribute__((deprecated)) endere_o_do_cliente_t *endere_o_do_cliente_create(
    char *city,
    char *country,
    char *neighborhood,
    char *number,
    char *state,
    char *street,
    char *zip_code
    ) {
    return endere_o_do_cliente_create_internal (
        city,
        country,
        neighborhood,
        number,
        state,
        street,
        zip_code
        );
}

void endere_o_do_cliente_free(endere_o_do_cliente_t *endere_o_do_cliente) {
    if(NULL == endere_o_do_cliente){
        return ;
    }
    if(endere_o_do_cliente->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "endere_o_do_cliente_free");
        return ;
    }
    listEntry_t *listEntry;
    if (endere_o_do_cliente->city) {
        free(endere_o_do_cliente->city);
        endere_o_do_cliente->city = NULL;
    }
    if (endere_o_do_cliente->country) {
        free(endere_o_do_cliente->country);
        endere_o_do_cliente->country = NULL;
    }
    if (endere_o_do_cliente->neighborhood) {
        free(endere_o_do_cliente->neighborhood);
        endere_o_do_cliente->neighborhood = NULL;
    }
    if (endere_o_do_cliente->number) {
        free(endere_o_do_cliente->number);
        endere_o_do_cliente->number = NULL;
    }
    if (endere_o_do_cliente->state) {
        free(endere_o_do_cliente->state);
        endere_o_do_cliente->state = NULL;
    }
    if (endere_o_do_cliente->street) {
        free(endere_o_do_cliente->street);
        endere_o_do_cliente->street = NULL;
    }
    if (endere_o_do_cliente->zip_code) {
        free(endere_o_do_cliente->zip_code);
        endere_o_do_cliente->zip_code = NULL;
    }
    free(endere_o_do_cliente);
}

cJSON *endere_o_do_cliente_convertToJSON(endere_o_do_cliente_t *endere_o_do_cliente) {
    cJSON *item = cJSON_CreateObject();

    // endere_o_do_cliente->city
    if (!endere_o_do_cliente->city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "city", endere_o_do_cliente->city) == NULL) {
    goto fail; //String
    }


    // endere_o_do_cliente->country
    if (!endere_o_do_cliente->country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "country", endere_o_do_cliente->country) == NULL) {
    goto fail; //String
    }


    // endere_o_do_cliente->neighborhood
    if (!endere_o_do_cliente->neighborhood) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "neighborhood", endere_o_do_cliente->neighborhood) == NULL) {
    goto fail; //String
    }


    // endere_o_do_cliente->number
    if (!endere_o_do_cliente->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", endere_o_do_cliente->number) == NULL) {
    goto fail; //String
    }


    // endere_o_do_cliente->state
    if (!endere_o_do_cliente->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", endere_o_do_cliente->state) == NULL) {
    goto fail; //String
    }


    // endere_o_do_cliente->street
    if (!endere_o_do_cliente->street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "street", endere_o_do_cliente->street) == NULL) {
    goto fail; //String
    }


    // endere_o_do_cliente->zip_code
    if (!endere_o_do_cliente->zip_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "zipCode", endere_o_do_cliente->zip_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

endere_o_do_cliente_t *endere_o_do_cliente_parseFromJSON(cJSON *endere_o_do_clienteJSON){

    endere_o_do_cliente_t *endere_o_do_cliente_local_var = NULL;

    // endere_o_do_cliente->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (!city) {
        goto end;
    }

    
    if(!cJSON_IsString(city))
    {
    goto end; //String
    }

    // endere_o_do_cliente->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (!country) {
        goto end;
    }

    
    if(!cJSON_IsString(country))
    {
    goto end; //String
    }

    // endere_o_do_cliente->neighborhood
    cJSON *neighborhood = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "neighborhood");
    if (cJSON_IsNull(neighborhood)) {
        neighborhood = NULL;
    }
    if (!neighborhood) {
        goto end;
    }

    
    if(!cJSON_IsString(neighborhood))
    {
    goto end; //String
    }

    // endere_o_do_cliente->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "number");
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

    // endere_o_do_cliente->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (!state) {
        goto end;
    }

    
    if(!cJSON_IsString(state))
    {
    goto end; //String
    }

    // endere_o_do_cliente->street
    cJSON *street = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "street");
    if (cJSON_IsNull(street)) {
        street = NULL;
    }
    if (!street) {
        goto end;
    }

    
    if(!cJSON_IsString(street))
    {
    goto end; //String
    }

    // endere_o_do_cliente->zip_code
    cJSON *zip_code = cJSON_GetObjectItemCaseSensitive(endere_o_do_clienteJSON, "zipCode");
    if (cJSON_IsNull(zip_code)) {
        zip_code = NULL;
    }
    if (!zip_code) {
        goto end;
    }

    
    if(!cJSON_IsString(zip_code))
    {
    goto end; //String
    }


    endere_o_do_cliente_local_var = endere_o_do_cliente_create_internal (
        strdup(city->valuestring),
        strdup(country->valuestring),
        strdup(neighborhood->valuestring),
        strdup(number->valuestring),
        strdup(state->valuestring),
        strdup(street->valuestring),
        strdup(zip_code->valuestring)
        );

    return endere_o_do_cliente_local_var;
end:
    return NULL;

}
