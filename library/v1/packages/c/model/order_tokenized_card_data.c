#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_tokenized_card_data.h"



static order_tokenized_card_data_t *order_tokenized_card_data_create_internal(
    char *first_six_card_number,
    char *token
    ) {
    order_tokenized_card_data_t *order_tokenized_card_data_local_var = malloc(sizeof(order_tokenized_card_data_t));
    if (!order_tokenized_card_data_local_var) {
        return NULL;
    }
    order_tokenized_card_data_local_var->first_six_card_number = first_six_card_number;
    order_tokenized_card_data_local_var->token = token;

    order_tokenized_card_data_local_var->_library_owned = 1;
    return order_tokenized_card_data_local_var;
}

__attribute__((deprecated)) order_tokenized_card_data_t *order_tokenized_card_data_create(
    char *first_six_card_number,
    char *token
    ) {
    return order_tokenized_card_data_create_internal (
        first_six_card_number,
        token
        );
}

void order_tokenized_card_data_free(order_tokenized_card_data_t *order_tokenized_card_data) {
    if(NULL == order_tokenized_card_data){
        return ;
    }
    if(order_tokenized_card_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_tokenized_card_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_tokenized_card_data->first_six_card_number) {
        free(order_tokenized_card_data->first_six_card_number);
        order_tokenized_card_data->first_six_card_number = NULL;
    }
    if (order_tokenized_card_data->token) {
        free(order_tokenized_card_data->token);
        order_tokenized_card_data->token = NULL;
    }
    free(order_tokenized_card_data);
}

cJSON *order_tokenized_card_data_convertToJSON(order_tokenized_card_data_t *order_tokenized_card_data) {
    cJSON *item = cJSON_CreateObject();

    // order_tokenized_card_data->first_six_card_number
    if(order_tokenized_card_data->first_six_card_number) {
    if(cJSON_AddStringToObject(item, "firstSixCardNumber", order_tokenized_card_data->first_six_card_number) == NULL) {
    goto fail; //String
    }
    }


    // order_tokenized_card_data->token
    if (!order_tokenized_card_data->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", order_tokenized_card_data->token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_tokenized_card_data_t *order_tokenized_card_data_parseFromJSON(cJSON *order_tokenized_card_dataJSON){

    order_tokenized_card_data_t *order_tokenized_card_data_local_var = NULL;

    // order_tokenized_card_data->first_six_card_number
    cJSON *first_six_card_number = cJSON_GetObjectItemCaseSensitive(order_tokenized_card_dataJSON, "firstSixCardNumber");
    if (cJSON_IsNull(first_six_card_number)) {
        first_six_card_number = NULL;
    }
    if (first_six_card_number) { 
    if(!cJSON_IsString(first_six_card_number) && !cJSON_IsNull(first_six_card_number))
    {
    goto end; //String
    }
    }

    // order_tokenized_card_data->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(order_tokenized_card_dataJSON, "token");
    if (cJSON_IsNull(token)) {
        token = NULL;
    }
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }


    order_tokenized_card_data_local_var = order_tokenized_card_data_create_internal (
        first_six_card_number && !cJSON_IsNull(first_six_card_number) ? strdup(first_six_card_number->valuestring) : NULL,
        strdup(token->valuestring)
        );

    return order_tokenized_card_data_local_var;
end:
    return NULL;

}
