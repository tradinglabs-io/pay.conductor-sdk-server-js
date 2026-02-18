#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "boleto_expiration_in_days.h"



static boleto_expiration_in_days_t *boleto_expiration_in_days_create_internal(
    ) {
    boleto_expiration_in_days_t *boleto_expiration_in_days_local_var = malloc(sizeof(boleto_expiration_in_days_t));
    if (!boleto_expiration_in_days_local_var) {
        return NULL;
    }

    boleto_expiration_in_days_local_var->_library_owned = 1;
    return boleto_expiration_in_days_local_var;
}

__attribute__((deprecated)) boleto_expiration_in_days_t *boleto_expiration_in_days_create(
    ) {
    return boleto_expiration_in_days_create_internal (
        );
}

void boleto_expiration_in_days_free(boleto_expiration_in_days_t *boleto_expiration_in_days) {
    if(NULL == boleto_expiration_in_days){
        return ;
    }
    if(boleto_expiration_in_days->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "boleto_expiration_in_days_free");
        return ;
    }
    listEntry_t *listEntry;
    free(boleto_expiration_in_days);
}

cJSON *boleto_expiration_in_days_convertToJSON(boleto_expiration_in_days_t *boleto_expiration_in_days) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

boleto_expiration_in_days_t *boleto_expiration_in_days_parseFromJSON(cJSON *boleto_expiration_in_daysJSON){

    boleto_expiration_in_days_t *boleto_expiration_in_days_local_var = NULL;


    boleto_expiration_in_days_local_var = boleto_expiration_in_days_create_internal (
        );

    return boleto_expiration_in_days_local_var;
end:
    return NULL;

}
