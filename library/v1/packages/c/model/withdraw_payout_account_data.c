#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdraw_payout_account_data.h"



static withdraw_payout_account_data_t *withdraw_payout_account_data_create_internal(
    char *owner_document,
    char *owner_name,
    char *pix_key,
    payconductor_api_pix_type__e pix_type
    ) {
    withdraw_payout_account_data_t *withdraw_payout_account_data_local_var = malloc(sizeof(withdraw_payout_account_data_t));
    if (!withdraw_payout_account_data_local_var) {
        return NULL;
    }
    withdraw_payout_account_data_local_var->owner_document = owner_document;
    withdraw_payout_account_data_local_var->owner_name = owner_name;
    withdraw_payout_account_data_local_var->pix_key = pix_key;
    withdraw_payout_account_data_local_var->pix_type = pix_type;

    withdraw_payout_account_data_local_var->_library_owned = 1;
    return withdraw_payout_account_data_local_var;
}

__attribute__((deprecated)) withdraw_payout_account_data_t *withdraw_payout_account_data_create(
    char *owner_document,
    char *owner_name,
    char *pix_key,
    payconductor_api_pix_type__e pix_type
    ) {
    return withdraw_payout_account_data_create_internal (
        owner_document,
        owner_name,
        pix_key,
        pix_type
        );
}

void withdraw_payout_account_data_free(withdraw_payout_account_data_t *withdraw_payout_account_data) {
    if(NULL == withdraw_payout_account_data){
        return ;
    }
    if(withdraw_payout_account_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "withdraw_payout_account_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (withdraw_payout_account_data->owner_document) {
        free(withdraw_payout_account_data->owner_document);
        withdraw_payout_account_data->owner_document = NULL;
    }
    if (withdraw_payout_account_data->owner_name) {
        free(withdraw_payout_account_data->owner_name);
        withdraw_payout_account_data->owner_name = NULL;
    }
    if (withdraw_payout_account_data->pix_key) {
        free(withdraw_payout_account_data->pix_key);
        withdraw_payout_account_data->pix_key = NULL;
    }
    free(withdraw_payout_account_data);
}

cJSON *withdraw_payout_account_data_convertToJSON(withdraw_payout_account_data_t *withdraw_payout_account_data) {
    cJSON *item = cJSON_CreateObject();

    // withdraw_payout_account_data->owner_document
    if (!withdraw_payout_account_data->owner_document) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ownerDocument", withdraw_payout_account_data->owner_document) == NULL) {
    goto fail; //String
    }


    // withdraw_payout_account_data->owner_name
    if (!withdraw_payout_account_data->owner_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ownerName", withdraw_payout_account_data->owner_name) == NULL) {
    goto fail; //String
    }


    // withdraw_payout_account_data->pix_key
    if (!withdraw_payout_account_data->pix_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pixKey", withdraw_payout_account_data->pix_key) == NULL) {
    goto fail; //String
    }


    // withdraw_payout_account_data->pix_type
    if (payconductor_api_pix_type__NULL == withdraw_payout_account_data->pix_type) {
        goto fail;
    }
    cJSON *pix_type_local_JSON = pix_type_convertToJSON(withdraw_payout_account_data->pix_type);
    if(pix_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "pixType", pix_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

withdraw_payout_account_data_t *withdraw_payout_account_data_parseFromJSON(cJSON *withdraw_payout_account_dataJSON){

    withdraw_payout_account_data_t *withdraw_payout_account_data_local_var = NULL;

    // define the local variable for withdraw_payout_account_data->pix_type
    payconductor_api_pix_type__e pix_type_local_nonprim = 0;

    // withdraw_payout_account_data->owner_document
    cJSON *owner_document = cJSON_GetObjectItemCaseSensitive(withdraw_payout_account_dataJSON, "ownerDocument");
    if (cJSON_IsNull(owner_document)) {
        owner_document = NULL;
    }
    if (!owner_document) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_document))
    {
    goto end; //String
    }

    // withdraw_payout_account_data->owner_name
    cJSON *owner_name = cJSON_GetObjectItemCaseSensitive(withdraw_payout_account_dataJSON, "ownerName");
    if (cJSON_IsNull(owner_name)) {
        owner_name = NULL;
    }
    if (!owner_name) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_name))
    {
    goto end; //String
    }

    // withdraw_payout_account_data->pix_key
    cJSON *pix_key = cJSON_GetObjectItemCaseSensitive(withdraw_payout_account_dataJSON, "pixKey");
    if (cJSON_IsNull(pix_key)) {
        pix_key = NULL;
    }
    if (!pix_key) {
        goto end;
    }

    
    if(!cJSON_IsString(pix_key))
    {
    goto end; //String
    }

    // withdraw_payout_account_data->pix_type
    cJSON *pix_type = cJSON_GetObjectItemCaseSensitive(withdraw_payout_account_dataJSON, "pixType");
    if (cJSON_IsNull(pix_type)) {
        pix_type = NULL;
    }
    if (!pix_type) {
        goto end;
    }

    
    pix_type_local_nonprim = pix_type_parseFromJSON(pix_type); //custom


    withdraw_payout_account_data_local_var = withdraw_payout_account_data_create_internal (
        strdup(owner_document->valuestring),
        strdup(owner_name->valuestring),
        strdup(pix_key->valuestring),
        pix_type_local_nonprim
        );

    return withdraw_payout_account_data_local_var;
end:
    if (pix_type_local_nonprim) {
        pix_type_local_nonprim = 0;
    }
    return NULL;

}
