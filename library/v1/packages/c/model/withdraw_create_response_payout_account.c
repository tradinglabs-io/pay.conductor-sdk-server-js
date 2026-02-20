#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdraw_create_response_payout_account.h"



static withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_create_internal(
    char *id,
    char *owner_document,
    char *owner_name,
    char *pix_key,
    payconductor_api_pix_type__e pix_type
    ) {
    withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_local_var = malloc(sizeof(withdraw_create_response_payout_account_t));
    if (!withdraw_create_response_payout_account_local_var) {
        return NULL;
    }
    withdraw_create_response_payout_account_local_var->id = id;
    withdraw_create_response_payout_account_local_var->owner_document = owner_document;
    withdraw_create_response_payout_account_local_var->owner_name = owner_name;
    withdraw_create_response_payout_account_local_var->pix_key = pix_key;
    withdraw_create_response_payout_account_local_var->pix_type = pix_type;

    withdraw_create_response_payout_account_local_var->_library_owned = 1;
    return withdraw_create_response_payout_account_local_var;
}

__attribute__((deprecated)) withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_create(
    char *id,
    char *owner_document,
    char *owner_name,
    char *pix_key,
    payconductor_api_pix_type__e pix_type
    ) {
    return withdraw_create_response_payout_account_create_internal (
        id,
        owner_document,
        owner_name,
        pix_key,
        pix_type
        );
}

void withdraw_create_response_payout_account_free(withdraw_create_response_payout_account_t *withdraw_create_response_payout_account) {
    if(NULL == withdraw_create_response_payout_account){
        return ;
    }
    if(withdraw_create_response_payout_account->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "withdraw_create_response_payout_account_free");
        return ;
    }
    listEntry_t *listEntry;
    if (withdraw_create_response_payout_account->id) {
        free(withdraw_create_response_payout_account->id);
        withdraw_create_response_payout_account->id = NULL;
    }
    if (withdraw_create_response_payout_account->owner_document) {
        free(withdraw_create_response_payout_account->owner_document);
        withdraw_create_response_payout_account->owner_document = NULL;
    }
    if (withdraw_create_response_payout_account->owner_name) {
        free(withdraw_create_response_payout_account->owner_name);
        withdraw_create_response_payout_account->owner_name = NULL;
    }
    if (withdraw_create_response_payout_account->pix_key) {
        free(withdraw_create_response_payout_account->pix_key);
        withdraw_create_response_payout_account->pix_key = NULL;
    }
    free(withdraw_create_response_payout_account);
}

cJSON *withdraw_create_response_payout_account_convertToJSON(withdraw_create_response_payout_account_t *withdraw_create_response_payout_account) {
    cJSON *item = cJSON_CreateObject();

    // withdraw_create_response_payout_account->id
    if (!withdraw_create_response_payout_account->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", withdraw_create_response_payout_account->id) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response_payout_account->owner_document
    if (!withdraw_create_response_payout_account->owner_document) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ownerDocument", withdraw_create_response_payout_account->owner_document) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response_payout_account->owner_name
    if (!withdraw_create_response_payout_account->owner_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ownerName", withdraw_create_response_payout_account->owner_name) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response_payout_account->pix_key
    if (!withdraw_create_response_payout_account->pix_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pixKey", withdraw_create_response_payout_account->pix_key) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response_payout_account->pix_type
    if (payconductor_api_pix_type__NULL == withdraw_create_response_payout_account->pix_type) {
        goto fail;
    }
    cJSON *pix_type_local_JSON = pix_type_convertToJSON(withdraw_create_response_payout_account->pix_type);
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

withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_parseFromJSON(cJSON *withdraw_create_response_payout_accountJSON){

    withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_local_var = NULL;

    // define the local variable for withdraw_create_response_payout_account->pix_type
    payconductor_api_pix_type__e pix_type_local_nonprim = 0;

    // withdraw_create_response_payout_account->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(withdraw_create_response_payout_accountJSON, "id");
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

    // withdraw_create_response_payout_account->owner_document
    cJSON *owner_document = cJSON_GetObjectItemCaseSensitive(withdraw_create_response_payout_accountJSON, "ownerDocument");
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

    // withdraw_create_response_payout_account->owner_name
    cJSON *owner_name = cJSON_GetObjectItemCaseSensitive(withdraw_create_response_payout_accountJSON, "ownerName");
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

    // withdraw_create_response_payout_account->pix_key
    cJSON *pix_key = cJSON_GetObjectItemCaseSensitive(withdraw_create_response_payout_accountJSON, "pixKey");
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

    // withdraw_create_response_payout_account->pix_type
    cJSON *pix_type = cJSON_GetObjectItemCaseSensitive(withdraw_create_response_payout_accountJSON, "pixType");
    if (cJSON_IsNull(pix_type)) {
        pix_type = NULL;
    }
    if (!pix_type) {
        goto end;
    }

    
    pix_type_local_nonprim = pix_type_parseFromJSON(pix_type); //custom


    withdraw_create_response_payout_account_local_var = withdraw_create_response_payout_account_create_internal (
        strdup(id->valuestring),
        strdup(owner_document->valuestring),
        strdup(owner_name->valuestring),
        strdup(pix_key->valuestring),
        pix_type_local_nonprim
        );

    return withdraw_create_response_payout_account_local_var;
end:
    if (pix_type_local_nonprim) {
        pix_type_local_nonprim = 0;
    }
    return NULL;

}
