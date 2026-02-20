#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdraw_create_request.h"



static withdraw_create_request_t *withdraw_create_request_create_internal(
    double amount,
    char *external_id,
    merchant_input_t *merchant,
    withdraw_payout_account_data_t *payout_account
    ) {
    withdraw_create_request_t *withdraw_create_request_local_var = malloc(sizeof(withdraw_create_request_t));
    if (!withdraw_create_request_local_var) {
        return NULL;
    }
    withdraw_create_request_local_var->amount = amount;
    withdraw_create_request_local_var->external_id = external_id;
    withdraw_create_request_local_var->merchant = merchant;
    withdraw_create_request_local_var->payout_account = payout_account;

    withdraw_create_request_local_var->_library_owned = 1;
    return withdraw_create_request_local_var;
}

__attribute__((deprecated)) withdraw_create_request_t *withdraw_create_request_create(
    double amount,
    char *external_id,
    merchant_input_t *merchant,
    withdraw_payout_account_data_t *payout_account
    ) {
    return withdraw_create_request_create_internal (
        amount,
        external_id,
        merchant,
        payout_account
        );
}

void withdraw_create_request_free(withdraw_create_request_t *withdraw_create_request) {
    if(NULL == withdraw_create_request){
        return ;
    }
    if(withdraw_create_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "withdraw_create_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (withdraw_create_request->external_id) {
        free(withdraw_create_request->external_id);
        withdraw_create_request->external_id = NULL;
    }
    if (withdraw_create_request->merchant) {
        merchant_input_free(withdraw_create_request->merchant);
        withdraw_create_request->merchant = NULL;
    }
    if (withdraw_create_request->payout_account) {
        withdraw_payout_account_data_free(withdraw_create_request->payout_account);
        withdraw_create_request->payout_account = NULL;
    }
    free(withdraw_create_request);
}

cJSON *withdraw_create_request_convertToJSON(withdraw_create_request_t *withdraw_create_request) {
    cJSON *item = cJSON_CreateObject();

    // withdraw_create_request->amount
    if (!withdraw_create_request->amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "amount", withdraw_create_request->amount) == NULL) {
    goto fail; //Numeric
    }


    // withdraw_create_request->external_id
    if(withdraw_create_request->external_id) {
    if(cJSON_AddStringToObject(item, "externalId", withdraw_create_request->external_id) == NULL) {
    goto fail; //String
    }
    }


    // withdraw_create_request->merchant
    if(withdraw_create_request->merchant) {
    cJSON *merchant_local_JSON = merchant_input_convertToJSON(withdraw_create_request->merchant);
    if(merchant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "merchant", merchant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // withdraw_create_request->payout_account
    if (!withdraw_create_request->payout_account) {
        goto fail;
    }
    cJSON *payout_account_local_JSON = withdraw_payout_account_data_convertToJSON(withdraw_create_request->payout_account);
    if(payout_account_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payoutAccount", payout_account_local_JSON);
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

withdraw_create_request_t *withdraw_create_request_parseFromJSON(cJSON *withdraw_create_requestJSON){

    withdraw_create_request_t *withdraw_create_request_local_var = NULL;

    // define the local variable for withdraw_create_request->merchant
    merchant_input_t *merchant_local_nonprim = NULL;

    // define the local variable for withdraw_create_request->payout_account
    withdraw_payout_account_data_t *payout_account_local_nonprim = NULL;

    // withdraw_create_request->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(withdraw_create_requestJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }

    // withdraw_create_request->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(withdraw_create_requestJSON, "externalId");
    if (cJSON_IsNull(external_id)) {
        external_id = NULL;
    }
    if (external_id) { 
    if(!cJSON_IsString(external_id) && !cJSON_IsNull(external_id))
    {
    goto end; //String
    }
    }

    // withdraw_create_request->merchant
    cJSON *merchant = cJSON_GetObjectItemCaseSensitive(withdraw_create_requestJSON, "merchant");
    if (cJSON_IsNull(merchant)) {
        merchant = NULL;
    }
    if (merchant) { 
    merchant_local_nonprim = merchant_input_parseFromJSON(merchant); //nonprimitive
    }

    // withdraw_create_request->payout_account
    cJSON *payout_account = cJSON_GetObjectItemCaseSensitive(withdraw_create_requestJSON, "payoutAccount");
    if (cJSON_IsNull(payout_account)) {
        payout_account = NULL;
    }
    if (!payout_account) {
        goto end;
    }

    
    payout_account_local_nonprim = withdraw_payout_account_data_parseFromJSON(payout_account); //nonprimitive


    withdraw_create_request_local_var = withdraw_create_request_create_internal (
        amount->valuedouble,
        external_id && !cJSON_IsNull(external_id) ? strdup(external_id->valuestring) : NULL,
        merchant ? merchant_local_nonprim : NULL,
        payout_account_local_nonprim
        );

    return withdraw_create_request_local_var;
end:
    if (merchant_local_nonprim) {
        merchant_input_free(merchant_local_nonprim);
        merchant_local_nonprim = NULL;
    }
    if (payout_account_local_nonprim) {
        withdraw_payout_account_data_free(payout_account_local_nonprim);
        payout_account_local_nonprim = NULL;
    }
    return NULL;

}
