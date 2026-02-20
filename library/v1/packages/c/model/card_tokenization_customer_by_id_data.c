#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "card_tokenization_customer_by_id_data.h"



static card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_create_internal(
    char *id
    ) {
    card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_local_var = malloc(sizeof(card_tokenization_customer_by_id_data_t));
    if (!card_tokenization_customer_by_id_data_local_var) {
        return NULL;
    }
    card_tokenization_customer_by_id_data_local_var->id = id;

    card_tokenization_customer_by_id_data_local_var->_library_owned = 1;
    return card_tokenization_customer_by_id_data_local_var;
}

__attribute__((deprecated)) card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_create(
    char *id
    ) {
    return card_tokenization_customer_by_id_data_create_internal (
        id
        );
}

void card_tokenization_customer_by_id_data_free(card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data) {
    if(NULL == card_tokenization_customer_by_id_data){
        return ;
    }
    if(card_tokenization_customer_by_id_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "card_tokenization_customer_by_id_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (card_tokenization_customer_by_id_data->id) {
        free(card_tokenization_customer_by_id_data->id);
        card_tokenization_customer_by_id_data->id = NULL;
    }
    free(card_tokenization_customer_by_id_data);
}

cJSON *card_tokenization_customer_by_id_data_convertToJSON(card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data) {
    cJSON *item = cJSON_CreateObject();

    // card_tokenization_customer_by_id_data->id
    if (!card_tokenization_customer_by_id_data->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", card_tokenization_customer_by_id_data->id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_parseFromJSON(cJSON *card_tokenization_customer_by_id_dataJSON){

    card_tokenization_customer_by_id_data_t *card_tokenization_customer_by_id_data_local_var = NULL;

    // card_tokenization_customer_by_id_data->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(card_tokenization_customer_by_id_dataJSON, "id");
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


    card_tokenization_customer_by_id_data_local_var = card_tokenization_customer_by_id_data_create_internal (
        strdup(id->valuestring)
        );

    return card_tokenization_customer_by_id_data_local_var;
end:
    return NULL;

}
