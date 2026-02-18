#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_o_de_cr_dito_installments.h"



static cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_create_internal(
    ) {
    cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_local_var = malloc(sizeof(cart_o_de_cr_dito_installments_t));
    if (!cart_o_de_cr_dito_installments_local_var) {
        return NULL;
    }

    cart_o_de_cr_dito_installments_local_var->_library_owned = 1;
    return cart_o_de_cr_dito_installments_local_var;
}

__attribute__((deprecated)) cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_create(
    ) {
    return cart_o_de_cr_dito_installments_create_internal (
        );
}

void cart_o_de_cr_dito_installments_free(cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments) {
    if(NULL == cart_o_de_cr_dito_installments){
        return ;
    }
    if(cart_o_de_cr_dito_installments->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_o_de_cr_dito_installments_free");
        return ;
    }
    listEntry_t *listEntry;
    free(cart_o_de_cr_dito_installments);
}

cJSON *cart_o_de_cr_dito_installments_convertToJSON(cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_parseFromJSON(cJSON *cart_o_de_cr_dito_installmentsJSON){

    cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_local_var = NULL;


    cart_o_de_cr_dito_installments_local_var = cart_o_de_cr_dito_installments_create_internal (
        );

    return cart_o_de_cr_dito_installments_local_var;
end:
    return NULL;

}
