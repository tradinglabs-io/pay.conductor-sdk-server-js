#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "boleto.h"



static boleto_t *boleto_create_internal(
    char *payment_method,
    boleto_expiration_in_days_t *expiration_in_days
    ) {
    boleto_t *boleto_local_var = malloc(sizeof(boleto_t));
    if (!boleto_local_var) {
        return NULL;
    }
    boleto_local_var->payment_method = payment_method;
    boleto_local_var->expiration_in_days = expiration_in_days;

    boleto_local_var->_library_owned = 1;
    return boleto_local_var;
}

__attribute__((deprecated)) boleto_t *boleto_create(
    char *payment_method,
    boleto_expiration_in_days_t *expiration_in_days
    ) {
    return boleto_create_internal (
        payment_method,
        expiration_in_days
        );
}

void boleto_free(boleto_t *boleto) {
    if(NULL == boleto){
        return ;
    }
    if(boleto->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "boleto_free");
        return ;
    }
    listEntry_t *listEntry;
    if (boleto->payment_method) {
        free(boleto->payment_method);
        boleto->payment_method = NULL;
    }
    if (boleto->expiration_in_days) {
        boleto_expiration_in_days_free(boleto->expiration_in_days);
        boleto->expiration_in_days = NULL;
    }
    free(boleto);
}

cJSON *boleto_convertToJSON(boleto_t *boleto) {
    cJSON *item = cJSON_CreateObject();

    // boleto->payment_method
    if (!boleto->payment_method) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "paymentMethod", boleto->payment_method) == NULL) {
    goto fail; //String
    }


    // boleto->expiration_in_days
    if(boleto->expiration_in_days) {
    cJSON *expiration_in_days_local_JSON = boleto_expiration_in_days_convertToJSON(boleto->expiration_in_days);
    if(expiration_in_days_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expirationInDays", expiration_in_days_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

boleto_t *boleto_parseFromJSON(cJSON *boletoJSON){

    boleto_t *boleto_local_var = NULL;

    // define the local variable for boleto->expiration_in_days
    boleto_expiration_in_days_t *expiration_in_days_local_nonprim = NULL;

    // boleto->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(boletoJSON, "paymentMethod");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (!payment_method) {
        goto end;
    }

    
    if(!cJSON_IsString(payment_method))
    {
    goto end; //String
    }

    // boleto->expiration_in_days
    cJSON *expiration_in_days = cJSON_GetObjectItemCaseSensitive(boletoJSON, "expirationInDays");
    if (cJSON_IsNull(expiration_in_days)) {
        expiration_in_days = NULL;
    }
    if (expiration_in_days) { 
    expiration_in_days_local_nonprim = boleto_expiration_in_days_parseFromJSON(expiration_in_days); //nonprimitive
    }


    boleto_local_var = boleto_create_internal (
        strdup(payment_method->valuestring),
        expiration_in_days ? expiration_in_days_local_nonprim : NULL
        );

    return boleto_local_var;
end:
    if (expiration_in_days_local_nonprim) {
        boleto_expiration_in_days_free(expiration_in_days_local_nonprim);
        expiration_in_days_local_nonprim = NULL;
    }
    return NULL;

}
