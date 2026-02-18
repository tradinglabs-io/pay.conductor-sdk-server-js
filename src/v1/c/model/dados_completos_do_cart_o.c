#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dados_completos_do_cart_o.h"



static dados_completos_do_cart_o_t *dados_completos_do_cart_o_create_internal(
    char *cvv,
    dados_completos_do_cart_o_expiration_t *expiration,
    char *holder_name,
    char *number
    ) {
    dados_completos_do_cart_o_t *dados_completos_do_cart_o_local_var = malloc(sizeof(dados_completos_do_cart_o_t));
    if (!dados_completos_do_cart_o_local_var) {
        return NULL;
    }
    dados_completos_do_cart_o_local_var->cvv = cvv;
    dados_completos_do_cart_o_local_var->expiration = expiration;
    dados_completos_do_cart_o_local_var->holder_name = holder_name;
    dados_completos_do_cart_o_local_var->number = number;

    dados_completos_do_cart_o_local_var->_library_owned = 1;
    return dados_completos_do_cart_o_local_var;
}

__attribute__((deprecated)) dados_completos_do_cart_o_t *dados_completos_do_cart_o_create(
    char *cvv,
    dados_completos_do_cart_o_expiration_t *expiration,
    char *holder_name,
    char *number
    ) {
    return dados_completos_do_cart_o_create_internal (
        cvv,
        expiration,
        holder_name,
        number
        );
}

void dados_completos_do_cart_o_free(dados_completos_do_cart_o_t *dados_completos_do_cart_o) {
    if(NULL == dados_completos_do_cart_o){
        return ;
    }
    if(dados_completos_do_cart_o->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dados_completos_do_cart_o_free");
        return ;
    }
    listEntry_t *listEntry;
    if (dados_completos_do_cart_o->cvv) {
        free(dados_completos_do_cart_o->cvv);
        dados_completos_do_cart_o->cvv = NULL;
    }
    if (dados_completos_do_cart_o->expiration) {
        dados_completos_do_cart_o_expiration_free(dados_completos_do_cart_o->expiration);
        dados_completos_do_cart_o->expiration = NULL;
    }
    if (dados_completos_do_cart_o->holder_name) {
        free(dados_completos_do_cart_o->holder_name);
        dados_completos_do_cart_o->holder_name = NULL;
    }
    if (dados_completos_do_cart_o->number) {
        free(dados_completos_do_cart_o->number);
        dados_completos_do_cart_o->number = NULL;
    }
    free(dados_completos_do_cart_o);
}

cJSON *dados_completos_do_cart_o_convertToJSON(dados_completos_do_cart_o_t *dados_completos_do_cart_o) {
    cJSON *item = cJSON_CreateObject();

    // dados_completos_do_cart_o->cvv
    if (!dados_completos_do_cart_o->cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cvv", dados_completos_do_cart_o->cvv) == NULL) {
    goto fail; //String
    }


    // dados_completos_do_cart_o->expiration
    if (!dados_completos_do_cart_o->expiration) {
        goto fail;
    }
    cJSON *expiration_local_JSON = dados_completos_do_cart_o_expiration_convertToJSON(dados_completos_do_cart_o->expiration);
    if(expiration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expiration", expiration_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // dados_completos_do_cart_o->holder_name
    if (!dados_completos_do_cart_o->holder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "holderName", dados_completos_do_cart_o->holder_name) == NULL) {
    goto fail; //String
    }


    // dados_completos_do_cart_o->number
    if (!dados_completos_do_cart_o->number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "number", dados_completos_do_cart_o->number) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dados_completos_do_cart_o_t *dados_completos_do_cart_o_parseFromJSON(cJSON *dados_completos_do_cart_oJSON){

    dados_completos_do_cart_o_t *dados_completos_do_cart_o_local_var = NULL;

    // define the local variable for dados_completos_do_cart_o->expiration
    dados_completos_do_cart_o_expiration_t *expiration_local_nonprim = NULL;

    // dados_completos_do_cart_o->cvv
    cJSON *cvv = cJSON_GetObjectItemCaseSensitive(dados_completos_do_cart_oJSON, "cvv");
    if (cJSON_IsNull(cvv)) {
        cvv = NULL;
    }
    if (!cvv) {
        goto end;
    }

    
    if(!cJSON_IsString(cvv))
    {
    goto end; //String
    }

    // dados_completos_do_cart_o->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(dados_completos_do_cart_oJSON, "expiration");
    if (cJSON_IsNull(expiration)) {
        expiration = NULL;
    }
    if (!expiration) {
        goto end;
    }

    
    expiration_local_nonprim = dados_completos_do_cart_o_expiration_parseFromJSON(expiration); //nonprimitive

    // dados_completos_do_cart_o->holder_name
    cJSON *holder_name = cJSON_GetObjectItemCaseSensitive(dados_completos_do_cart_oJSON, "holderName");
    if (cJSON_IsNull(holder_name)) {
        holder_name = NULL;
    }
    if (!holder_name) {
        goto end;
    }

    
    if(!cJSON_IsString(holder_name))
    {
    goto end; //String
    }

    // dados_completos_do_cart_o->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(dados_completos_do_cart_oJSON, "number");
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


    dados_completos_do_cart_o_local_var = dados_completos_do_cart_o_create_internal (
        strdup(cvv->valuestring),
        expiration_local_nonprim,
        strdup(holder_name->valuestring),
        strdup(number->valuestring)
        );

    return dados_completos_do_cart_o_local_var;
end:
    if (expiration_local_nonprim) {
        dados_completos_do_cart_o_expiration_free(expiration_local_nonprim);
        expiration_local_nonprim = NULL;
    }
    return NULL;

}
