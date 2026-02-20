#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_create_request.h"



static address_create_request_t *address_create_request_create_internal(
    char *city,
    char *country,
    char *neighborhood,
    char *number,
    char *state,
    char *street,
    char *zip_code
    ) {
    address_create_request_t *address_create_request_local_var = malloc(sizeof(address_create_request_t));
    if (!address_create_request_local_var) {
        return NULL;
    }
    address_create_request_local_var->city = city;
    address_create_request_local_var->country = country;
    address_create_request_local_var->neighborhood = neighborhood;
    address_create_request_local_var->number = number;
    address_create_request_local_var->state = state;
    address_create_request_local_var->street = street;
    address_create_request_local_var->zip_code = zip_code;

    address_create_request_local_var->_library_owned = 1;
    return address_create_request_local_var;
}

__attribute__((deprecated)) address_create_request_t *address_create_request_create(
    char *city,
    char *country,
    char *neighborhood,
    char *number,
    char *state,
    char *street,
    char *zip_code
    ) {
    return address_create_request_create_internal (
        city,
        country,
        neighborhood,
        number,
        state,
        street,
        zip_code
        );
}

void address_create_request_free(address_create_request_t *address_create_request) {
    if(NULL == address_create_request){
        return ;
    }
    if(address_create_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "address_create_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (address_create_request->city) {
        free(address_create_request->city);
        address_create_request->city = NULL;
    }
    if (address_create_request->country) {
        free(address_create_request->country);
        address_create_request->country = NULL;
    }
    if (address_create_request->neighborhood) {
        free(address_create_request->neighborhood);
        address_create_request->neighborhood = NULL;
    }
    if (address_create_request->number) {
        free(address_create_request->number);
        address_create_request->number = NULL;
    }
    if (address_create_request->state) {
        free(address_create_request->state);
        address_create_request->state = NULL;
    }
    if (address_create_request->street) {
        free(address_create_request->street);
        address_create_request->street = NULL;
    }
    if (address_create_request->zip_code) {
        free(address_create_request->zip_code);
        address_create_request->zip_code = NULL;
    }
    free(address_create_request);
}

cJSON *address_create_request_convertToJSON(address_create_request_t *address_create_request) {
    cJSON *item = cJSON_CreateObject();

    // address_create_request->city
    if (!address_create_request->city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "city", address_create_request->city) == NULL) {
    goto fail; //String
    }


    // address_create_request->country
    if (!address_create_request->country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "country", address_create_request->country) == NULL) {
    goto fail; //String
    }


    // address_create_request->neighborhood
    if (!address_create_request->neighborhood) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "neighborhood", address_create_request->neighborhood) == NULL) {
    goto fail; //String
    }


    // address_create_request->number
    if (!address_create_request->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", address_create_request->number) == NULL) {
    goto fail; //String
    }


    // address_create_request->state
    if (!address_create_request->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", address_create_request->state) == NULL) {
    goto fail; //String
    }


    // address_create_request->street
    if (!address_create_request->street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "street", address_create_request->street) == NULL) {
    goto fail; //String
    }


    // address_create_request->zip_code
    if (!address_create_request->zip_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "zipCode", address_create_request->zip_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

address_create_request_t *address_create_request_parseFromJSON(cJSON *address_create_requestJSON){

    address_create_request_t *address_create_request_local_var = NULL;

    // address_create_request->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "city");
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

    // address_create_request->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "country");
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

    // address_create_request->neighborhood
    cJSON *neighborhood = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "neighborhood");
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

    // address_create_request->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "number");
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

    // address_create_request->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "state");
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

    // address_create_request->street
    cJSON *street = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "street");
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

    // address_create_request->zip_code
    cJSON *zip_code = cJSON_GetObjectItemCaseSensitive(address_create_requestJSON, "zipCode");
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


    address_create_request_local_var = address_create_request_create_internal (
        strdup(city->valuestring),
        strdup(country->valuestring),
        strdup(neighborhood->valuestring),
        strdup(number->valuestring),
        strdup(state->valuestring),
        strdup(street->valuestring),
        strdup(zip_code->valuestring)
        );

    return address_create_request_local_var;
end:
    return NULL;

}
