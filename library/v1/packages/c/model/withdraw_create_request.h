/*
 * withdraw_create_request.h
 *
 * Withdrawal or transfer request data
 */

#ifndef _withdraw_create_request_H_
#define _withdraw_create_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdraw_create_request_t withdraw_create_request_t;

#include "merchant_input.h"
#include "withdraw_payout_account_data.h"



typedef struct withdraw_create_request_t {
    double amount; //numeric
    char *external_id; // string
    struct merchant_input_t *merchant; //model
    struct withdraw_payout_account_data_t *payout_account; //model

    int _library_owned; // Is the library responsible for freeing this object?
} withdraw_create_request_t;

__attribute__((deprecated)) withdraw_create_request_t *withdraw_create_request_create(
    double amount,
    char *external_id,
    merchant_input_t *merchant,
    withdraw_payout_account_data_t *payout_account
);

void withdraw_create_request_free(withdraw_create_request_t *withdraw_create_request);

withdraw_create_request_t *withdraw_create_request_parseFromJSON(cJSON *withdraw_create_requestJSON);

cJSON *withdraw_create_request_convertToJSON(withdraw_create_request_t *withdraw_create_request);

#endif /* _withdraw_create_request_H_ */

