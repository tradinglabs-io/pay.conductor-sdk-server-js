#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_address_response.h"



static customer_address_response_t *customer_address_response_create_internal(
    char *id,
    char *street,
    char *number,
    char *neighborhood,
    char *city,
    char *state,
    char *zip_code,
    char *country
    ) {
    customer_address_response_t *customer_address_response_local_var = malloc(sizeof(customer_address_response_t));
    if (!customer_address_response_local_var) {
        return NULL;
    }
    customer_address_response_local_var->id = id;
    customer_address_response_local_var->street = street;
    customer_address_response_local_var->number = number;
    customer_address_response_local_var->neighborhood = neighborhood;
    customer_address_response_local_var->city = city;
    customer_address_response_local_var->state = state;
    customer_address_response_local_var->zip_code = zip_code;
    customer_address_response_local_var->country = country;

    customer_address_response_local_var->_library_owned = 1;
    return customer_address_response_local_var;
}

__attribute__((deprecated)) customer_address_response_t *customer_address_response_create(
    char *id,
    char *street,
    char *number,
    char *neighborhood,
    char *city,
    char *state,
    char *zip_code,
    char *country
    ) {
    return customer_address_response_create_internal (
        id,
        street,
        number,
        neighborhood,
        city,
        state,
        zip_code,
        country
        );
}

void customer_address_response_free(customer_address_response_t *customer_address_response) {
    if(NULL == customer_address_response){
        return ;
    }
    if(customer_address_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_address_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_address_response->id) {
        free(customer_address_response->id);
        customer_address_response->id = NULL;
    }
    if (customer_address_response->street) {
        free(customer_address_response->street);
        customer_address_response->street = NULL;
    }
    if (customer_address_response->number) {
        free(customer_address_response->number);
        customer_address_response->number = NULL;
    }
    if (customer_address_response->neighborhood) {
        free(customer_address_response->neighborhood);
        customer_address_response->neighborhood = NULL;
    }
    if (customer_address_response->city) {
        free(customer_address_response->city);
        customer_address_response->city = NULL;
    }
    if (customer_address_response->state) {
        free(customer_address_response->state);
        customer_address_response->state = NULL;
    }
    if (customer_address_response->zip_code) {
        free(customer_address_response->zip_code);
        customer_address_response->zip_code = NULL;
    }
    if (customer_address_response->country) {
        free(customer_address_response->country);
        customer_address_response->country = NULL;
    }
    free(customer_address_response);
}

cJSON *customer_address_response_convertToJSON(customer_address_response_t *customer_address_response) {
    cJSON *item = cJSON_CreateObject();

    // customer_address_response->id
    if (!customer_address_response->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", customer_address_response->id) == NULL) {
    goto fail; //String
    }


    // customer_address_response->street
    if (!customer_address_response->street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "street", customer_address_response->street) == NULL) {
    goto fail; //String
    }


    // customer_address_response->number
    if (!customer_address_response->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", customer_address_response->number) == NULL) {
    goto fail; //String
    }


    // customer_address_response->neighborhood
    if (!customer_address_response->neighborhood) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "neighborhood", customer_address_response->neighborhood) == NULL) {
    goto fail; //String
    }


    // customer_address_response->city
    if (!customer_address_response->city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "city", customer_address_response->city) == NULL) {
    goto fail; //String
    }


    // customer_address_response->state
    if (!customer_address_response->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", customer_address_response->state) == NULL) {
    goto fail; //String
    }


    // customer_address_response->zip_code
    if (!customer_address_response->zip_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "zipCode", customer_address_response->zip_code) == NULL) {
    goto fail; //String
    }


    // customer_address_response->country
    if (!customer_address_response->country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "country", customer_address_response->country) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_address_response_t *customer_address_response_parseFromJSON(cJSON *customer_address_responseJSON){

    customer_address_response_t *customer_address_response_local_var = NULL;

    // customer_address_response->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "id");
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

    // customer_address_response->street
    cJSON *street = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "street");
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

    // customer_address_response->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "number");
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

    // customer_address_response->neighborhood
    cJSON *neighborhood = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "neighborhood");
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

    // customer_address_response->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "city");
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

    // customer_address_response->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "state");
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

    // customer_address_response->zip_code
    cJSON *zip_code = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "zipCode");
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

    // customer_address_response->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(customer_address_responseJSON, "country");
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


    customer_address_response_local_var = customer_address_response_create_internal (
        strdup(id->valuestring),
        strdup(street->valuestring),
        strdup(number->valuestring),
        strdup(neighborhood->valuestring),
        strdup(city->valuestring),
        strdup(state->valuestring),
        strdup(zip_code->valuestring),
        strdup(country->valuestring)
        );

    return customer_address_response_local_var;
end:
    return NULL;

}
