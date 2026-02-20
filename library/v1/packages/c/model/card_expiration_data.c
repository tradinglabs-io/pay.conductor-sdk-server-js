#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "card_expiration_data.h"



static card_expiration_data_t *card_expiration_data_create_internal(
    double month,
    double year
    ) {
    card_expiration_data_t *card_expiration_data_local_var = malloc(sizeof(card_expiration_data_t));
    if (!card_expiration_data_local_var) {
        return NULL;
    }
    card_expiration_data_local_var->month = month;
    card_expiration_data_local_var->year = year;

    card_expiration_data_local_var->_library_owned = 1;
    return card_expiration_data_local_var;
}

__attribute__((deprecated)) card_expiration_data_t *card_expiration_data_create(
    double month,
    double year
    ) {
    return card_expiration_data_create_internal (
        month,
        year
        );
}

void card_expiration_data_free(card_expiration_data_t *card_expiration_data) {
    if(NULL == card_expiration_data){
        return ;
    }
    if(card_expiration_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "card_expiration_data_free");
        return ;
    }
    listEntry_t *listEntry;
    free(card_expiration_data);
}

cJSON *card_expiration_data_convertToJSON(card_expiration_data_t *card_expiration_data) {
    cJSON *item = cJSON_CreateObject();

    // card_expiration_data->month
    if (!card_expiration_data->month) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "month", card_expiration_data->month) == NULL) {
    goto fail; //Numeric
    }


    // card_expiration_data->year
    if (!card_expiration_data->year) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "year", card_expiration_data->year) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

card_expiration_data_t *card_expiration_data_parseFromJSON(cJSON *card_expiration_dataJSON){

    card_expiration_data_t *card_expiration_data_local_var = NULL;

    // card_expiration_data->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(card_expiration_dataJSON, "month");
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

    // card_expiration_data->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(card_expiration_dataJSON, "year");
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


    card_expiration_data_local_var = card_expiration_data_create_internal (
        month->valuedouble,
        year->valuedouble
        );

    return card_expiration_data_local_var;
end:
    return NULL;

}
