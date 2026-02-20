#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdraw_create_response_payed_at.h"



static withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_create_internal(
    ) {
    withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_local_var = malloc(sizeof(withdraw_create_response_payed_at_t));
    if (!withdraw_create_response_payed_at_local_var) {
        return NULL;
    }

    withdraw_create_response_payed_at_local_var->_library_owned = 1;
    return withdraw_create_response_payed_at_local_var;
}

__attribute__((deprecated)) withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_create(
    ) {
    return withdraw_create_response_payed_at_create_internal (
        );
}

void withdraw_create_response_payed_at_free(withdraw_create_response_payed_at_t *withdraw_create_response_payed_at) {
    if(NULL == withdraw_create_response_payed_at){
        return ;
    }
    if(withdraw_create_response_payed_at->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "withdraw_create_response_payed_at_free");
        return ;
    }
    listEntry_t *listEntry;
    free(withdraw_create_response_payed_at);
}

cJSON *withdraw_create_response_payed_at_convertToJSON(withdraw_create_response_payed_at_t *withdraw_create_response_payed_at) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_parseFromJSON(cJSON *withdraw_create_response_payed_atJSON){

    withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_local_var = NULL;


    withdraw_create_response_payed_at_local_var = withdraw_create_response_payed_at_create_internal (
        );

    return withdraw_create_response_payed_at_local_var;
end:
    return NULL;

}
