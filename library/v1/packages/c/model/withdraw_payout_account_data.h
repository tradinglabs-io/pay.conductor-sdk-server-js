/*
 * withdraw_payout_account_data.h
 *
 * Bank account information for withdrawal
 */

#ifndef _withdraw_payout_account_data_H_
#define _withdraw_payout_account_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdraw_payout_account_data_t withdraw_payout_account_data_t;

#include "pix_type.h"



typedef struct withdraw_payout_account_data_t {
    char *owner_document; // string
    char *owner_name; // string
    char *pix_key; // string
    payconductor_api_pix_type__e pix_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} withdraw_payout_account_data_t;

__attribute__((deprecated)) withdraw_payout_account_data_t *withdraw_payout_account_data_create(
    char *owner_document,
    char *owner_name,
    char *pix_key,
    payconductor_api_pix_type__e pix_type
);

void withdraw_payout_account_data_free(withdraw_payout_account_data_t *withdraw_payout_account_data);

withdraw_payout_account_data_t *withdraw_payout_account_data_parseFromJSON(cJSON *withdraw_payout_account_dataJSON);

cJSON *withdraw_payout_account_data_convertToJSON(withdraw_payout_account_data_t *withdraw_payout_account_data);

#endif /* _withdraw_payout_account_data_H_ */

