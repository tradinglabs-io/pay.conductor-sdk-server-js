#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdraw_create_response.h"



static withdraw_create_response_t *withdraw_create_response_create_internal(
    char *id,
    char *external_id,
    char *external_integration_key,
    char *external_integration_id,
    double cost_fee,
    payconductor_api_status__e status,
    char *error_code,
    char *error_message,
    withdraw_create_response_payed_at_t *payed_at,
    withdraw_create_response_payout_account_t *payout_account
    ) {
    withdraw_create_response_t *withdraw_create_response_local_var = malloc(sizeof(withdraw_create_response_t));
    if (!withdraw_create_response_local_var) {
        return NULL;
    }
    withdraw_create_response_local_var->id = id;
    withdraw_create_response_local_var->external_id = external_id;
    withdraw_create_response_local_var->external_integration_key = external_integration_key;
    withdraw_create_response_local_var->external_integration_id = external_integration_id;
    withdraw_create_response_local_var->cost_fee = cost_fee;
    withdraw_create_response_local_var->status = status;
    withdraw_create_response_local_var->error_code = error_code;
    withdraw_create_response_local_var->error_message = error_message;
    withdraw_create_response_local_var->payed_at = payed_at;
    withdraw_create_response_local_var->payout_account = payout_account;

    withdraw_create_response_local_var->_library_owned = 1;
    return withdraw_create_response_local_var;
}

__attribute__((deprecated)) withdraw_create_response_t *withdraw_create_response_create(
    char *id,
    char *external_id,
    char *external_integration_key,
    char *external_integration_id,
    double cost_fee,
    payconductor_api_status__e status,
    char *error_code,
    char *error_message,
    withdraw_create_response_payed_at_t *payed_at,
    withdraw_create_response_payout_account_t *payout_account
    ) {
    return withdraw_create_response_create_internal (
        id,
        external_id,
        external_integration_key,
        external_integration_id,
        cost_fee,
        status,
        error_code,
        error_message,
        payed_at,
        payout_account
        );
}

void withdraw_create_response_free(withdraw_create_response_t *withdraw_create_response) {
    if(NULL == withdraw_create_response){
        return ;
    }
    if(withdraw_create_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "withdraw_create_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (withdraw_create_response->id) {
        free(withdraw_create_response->id);
        withdraw_create_response->id = NULL;
    }
    if (withdraw_create_response->external_id) {
        free(withdraw_create_response->external_id);
        withdraw_create_response->external_id = NULL;
    }
    if (withdraw_create_response->external_integration_key) {
        free(withdraw_create_response->external_integration_key);
        withdraw_create_response->external_integration_key = NULL;
    }
    if (withdraw_create_response->external_integration_id) {
        free(withdraw_create_response->external_integration_id);
        withdraw_create_response->external_integration_id = NULL;
    }
    if (withdraw_create_response->error_code) {
        free(withdraw_create_response->error_code);
        withdraw_create_response->error_code = NULL;
    }
    if (withdraw_create_response->error_message) {
        free(withdraw_create_response->error_message);
        withdraw_create_response->error_message = NULL;
    }
    if (withdraw_create_response->payed_at) {
        withdraw_create_response_payed_at_free(withdraw_create_response->payed_at);
        withdraw_create_response->payed_at = NULL;
    }
    if (withdraw_create_response->payout_account) {
        withdraw_create_response_payout_account_free(withdraw_create_response->payout_account);
        withdraw_create_response->payout_account = NULL;
    }
    free(withdraw_create_response);
}

cJSON *withdraw_create_response_convertToJSON(withdraw_create_response_t *withdraw_create_response) {
    cJSON *item = cJSON_CreateObject();

    // withdraw_create_response->id
    if (!withdraw_create_response->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", withdraw_create_response->id) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response->external_id
    if (!withdraw_create_response->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "externalId", withdraw_create_response->external_id) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response->external_integration_key
    if (!withdraw_create_response->external_integration_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "externalIntegrationKey", withdraw_create_response->external_integration_key) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response->external_integration_id
    if (!withdraw_create_response->external_integration_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "externalIntegrationId", withdraw_create_response->external_integration_id) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response->cost_fee
    if (!withdraw_create_response->cost_fee) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "costFee", withdraw_create_response->cost_fee) == NULL) {
    goto fail; //Numeric
    }


    // withdraw_create_response->status
    if (payconductor_api_status__NULL == withdraw_create_response->status) {
        goto fail;
    }
    cJSON *status_local_JSON = status_convertToJSON(withdraw_create_response->status);
    if(status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // withdraw_create_response->error_code
    if (!withdraw_create_response->error_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorCode", withdraw_create_response->error_code) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response->error_message
    if (!withdraw_create_response->error_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorMessage", withdraw_create_response->error_message) == NULL) {
    goto fail; //String
    }


    // withdraw_create_response->payed_at
    if (!withdraw_create_response->payed_at) {
        goto fail;
    }
    cJSON *payed_at_local_JSON = withdraw_create_response_payed_at_convertToJSON(withdraw_create_response->payed_at);
    if(payed_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payedAt", payed_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // withdraw_create_response->payout_account
    if (!withdraw_create_response->payout_account) {
        goto fail;
    }
    cJSON *payout_account_local_JSON = withdraw_create_response_payout_account_convertToJSON(withdraw_create_response->payout_account);
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

withdraw_create_response_t *withdraw_create_response_parseFromJSON(cJSON *withdraw_create_responseJSON){

    withdraw_create_response_t *withdraw_create_response_local_var = NULL;

    // define the local variable for withdraw_create_response->status
    payconductor_api_status__e status_local_nonprim = 0;

    // define the local variable for withdraw_create_response->payed_at
    withdraw_create_response_payed_at_t *payed_at_local_nonprim = NULL;

    // define the local variable for withdraw_create_response->payout_account
    withdraw_create_response_payout_account_t *payout_account_local_nonprim = NULL;

    // withdraw_create_response->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "id");
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

    // withdraw_create_response->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "externalId");
    if (cJSON_IsNull(external_id)) {
        external_id = NULL;
    }
    if (!external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }

    // withdraw_create_response->external_integration_key
    cJSON *external_integration_key = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "externalIntegrationKey");
    if (cJSON_IsNull(external_integration_key)) {
        external_integration_key = NULL;
    }
    if (!external_integration_key) {
        goto end;
    }

    
    if(!cJSON_IsString(external_integration_key))
    {
    goto end; //String
    }

    // withdraw_create_response->external_integration_id
    cJSON *external_integration_id = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "externalIntegrationId");
    if (cJSON_IsNull(external_integration_id)) {
        external_integration_id = NULL;
    }
    if (!external_integration_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_integration_id))
    {
    goto end; //String
    }

    // withdraw_create_response->cost_fee
    cJSON *cost_fee = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "costFee");
    if (cJSON_IsNull(cost_fee)) {
        cost_fee = NULL;
    }
    if (!cost_fee) {
        goto end;
    }

    
    if(!cJSON_IsNumber(cost_fee))
    {
    goto end; //Numeric
    }

    // withdraw_create_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    status_local_nonprim = status_parseFromJSON(status); //custom

    // withdraw_create_response->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "errorCode");
    if (cJSON_IsNull(error_code)) {
        error_code = NULL;
    }
    if (!error_code) {
        goto end;
    }

    
    if(!cJSON_IsString(error_code))
    {
    goto end; //String
    }

    // withdraw_create_response->error_message
    cJSON *error_message = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "errorMessage");
    if (cJSON_IsNull(error_message)) {
        error_message = NULL;
    }
    if (!error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(error_message))
    {
    goto end; //String
    }

    // withdraw_create_response->payed_at
    cJSON *payed_at = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "payedAt");
    if (cJSON_IsNull(payed_at)) {
        payed_at = NULL;
    }
    if (!payed_at) {
        goto end;
    }

    
    payed_at_local_nonprim = withdraw_create_response_payed_at_parseFromJSON(payed_at); //nonprimitive

    // withdraw_create_response->payout_account
    cJSON *payout_account = cJSON_GetObjectItemCaseSensitive(withdraw_create_responseJSON, "payoutAccount");
    if (cJSON_IsNull(payout_account)) {
        payout_account = NULL;
    }
    if (!payout_account) {
        goto end;
    }

    
    payout_account_local_nonprim = withdraw_create_response_payout_account_parseFromJSON(payout_account); //nonprimitive


    withdraw_create_response_local_var = withdraw_create_response_create_internal (
        strdup(id->valuestring),
        strdup(external_id->valuestring),
        strdup(external_integration_key->valuestring),
        strdup(external_integration_id->valuestring),
        cost_fee->valuedouble,
        status_local_nonprim,
        strdup(error_code->valuestring),
        strdup(error_message->valuestring),
        payed_at_local_nonprim,
        payout_account_local_nonprim
        );

    return withdraw_create_response_local_var;
end:
    if (status_local_nonprim) {
        status_local_nonprim = 0;
    }
    if (payed_at_local_nonprim) {
        withdraw_create_response_payed_at_free(payed_at_local_nonprim);
        payed_at_local_nonprim = NULL;
    }
    if (payout_account_local_nonprim) {
        withdraw_create_response_payout_account_free(payout_account_local_nonprim);
        payout_account_local_nonprim = NULL;
    }
    return NULL;

}
