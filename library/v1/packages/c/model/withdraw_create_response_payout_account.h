/*
 * withdraw_create_response_payout_account.h
 *
 * 
 */

#ifndef _withdraw_create_response_payout_account_H_
#define _withdraw_create_response_payout_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdraw_create_response_payout_account_t withdraw_create_response_payout_account_t;

#include "pix_type.h"



typedef struct withdraw_create_response_payout_account_t {
    char *id; // string
    char *owner_document; // string
    char *owner_name; // string
    char *pix_key; // string
    payconductor_api_pix_type__e pix_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} withdraw_create_response_payout_account_t;

__attribute__((deprecated)) withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_create(
    char *id,
    char *owner_document,
    char *owner_name,
    char *pix_key,
    payconductor_api_pix_type__e pix_type
);

void withdraw_create_response_payout_account_free(withdraw_create_response_payout_account_t *withdraw_create_response_payout_account);

withdraw_create_response_payout_account_t *withdraw_create_response_payout_account_parseFromJSON(cJSON *withdraw_create_response_payout_accountJSON);

cJSON *withdraw_create_response_payout_account_convertToJSON(withdraw_create_response_payout_account_t *withdraw_create_response_payout_account);

#endif /* _withdraw_create_response_payout_account_H_ */

