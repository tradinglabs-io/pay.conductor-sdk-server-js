#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dados_completos_do_cart_o_expiration.h"



static dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_create_internal(
    double month,
    double year
    ) {
    dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_local_var = malloc(sizeof(dados_completos_do_cart_o_expiration_t));
    if (!dados_completos_do_cart_o_expiration_local_var) {
        return NULL;
    }
    dados_completos_do_cart_o_expiration_local_var->month = month;
    dados_completos_do_cart_o_expiration_local_var->year = year;

    dados_completos_do_cart_o_expiration_local_var->_library_owned = 1;
    return dados_completos_do_cart_o_expiration_local_var;
}

__attribute__((deprecated)) dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_create(
    double month,
    double year
    ) {
    return dados_completos_do_cart_o_expiration_create_internal (
        month,
        year
        );
}

void dados_completos_do_cart_o_expiration_free(dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration) {
    if(NULL == dados_completos_do_cart_o_expiration){
        return ;
    }
    if(dados_completos_do_cart_o_expiration->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dados_completos_do_cart_o_expiration_free");
        return ;
    }
    listEntry_t *listEntry;
    free(dados_completos_do_cart_o_expiration);
}

cJSON *dados_completos_do_cart_o_expiration_convertToJSON(dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration) {
    cJSON *item = cJSON_CreateObject();

    // dados_completos_do_cart_o_expiration->month
    if (!dados_completos_do_cart_o_expiration->month) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "month", dados_completos_do_cart_o_expiration->month) == NULL) {
    goto fail; //Numeric
    }


    // dados_completos_do_cart_o_expiration->year
    if (!dados_completos_do_cart_o_expiration->year) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "year", dados_completos_do_cart_o_expiration->year) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_parseFromJSON(cJSON *dados_completos_do_cart_o_expirationJSON){

    dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_local_var = NULL;

    // dados_completos_do_cart_o_expiration->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(dados_completos_do_cart_o_expirationJSON, "month");
    if (cJSON_IsNull(month)) {
        month = NULL;
    }
    if (!month) {
        goto end;
    }

    
    if(!cJSON_IsNumber(month))
    {
    goto end; //Numeric
    }

    // dados_completos_do_cart_o_expiration->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(dados_completos_do_cart_o_expirationJSON, "year");
    if (cJSON_IsNull(year)) {
        year = NULL;
    }
    if (!year) {
        goto end;
    }

    
    if(!cJSON_IsNumber(year))
    {
    goto end; //Numeric
    }


    dados_completos_do_cart_o_expiration_local_var = dados_completos_do_cart_o_expiration_create_internal (
        month->valuedouble,
        year->valuedouble
        );

    return dados_completos_do_cart_o_expiration_local_var;
end:
    return NULL;

}
