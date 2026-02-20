#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_credit_card_info.h"



static order_credit_card_info_t *order_credit_card_info_create_internal(
    char *authorization_code
    ) {
    order_credit_card_info_t *order_credit_card_info_local_var = malloc(sizeof(order_credit_card_info_t));
    if (!order_credit_card_info_local_var) {
        return NULL;
    }
    order_credit_card_info_local_var->authorization_code = authorization_code;

    order_credit_card_info_local_var->_library_owned = 1;
    return order_credit_card_info_local_var;
}

__attribute__((deprecated)) order_credit_card_info_t *order_credit_card_info_create(
    char *authorization_code
    ) {
    return order_credit_card_info_create_internal (
        authorization_code
        );
}

void order_credit_card_info_free(order_credit_card_info_t *order_credit_card_info) {
    if(NULL == order_credit_card_info){
        return ;
    }
    if(order_credit_card_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_credit_card_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_credit_card_info->authorization_code) {
        free(order_credit_card_info->authorization_code);
        order_credit_card_info->authorization_code = NULL;
    }
    free(order_credit_card_info);
}

cJSON *order_credit_card_info_convertToJSON(order_credit_card_info_t *order_credit_card_info) {
    cJSON *item = cJSON_CreateObject();

    // order_credit_card_info->authorization_code
    if(order_credit_card_info->authorization_code) {
    if(cJSON_AddStringToObject(item, "authorizationCode", order_credit_card_info->authorization_code) == NULL) {
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

order_credit_card_info_t *order_credit_card_info_parseFromJSON(cJSON *order_credit_card_infoJSON){

    order_credit_card_info_t *order_credit_card_info_local_var = NULL;

    // order_credit_card_info->authorization_code
    cJSON *authorization_code = cJSON_GetObjectItemCaseSensitive(order_credit_card_infoJSON, "authorizationCode");
    if (cJSON_IsNull(authorization_code)) {
        authorization_code = NULL;
    }
    if (authorization_code) { 
    if(!cJSON_IsString(authorization_code) && !cJSON_IsNull(authorization_code))
    {
    goto end; //String
    }
    }


    order_credit_card_info_local_var = order_credit_card_info_create_internal (
        authorization_code && !cJSON_IsNull(authorization_code) ? strdup(authorization_code->valuestring) : NULL
        );

    return order_credit_card_info_local_var;
end:
    return NULL;

}
