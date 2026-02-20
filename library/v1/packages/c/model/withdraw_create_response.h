/*
 * withdraw_create_response.h
 *
 * Response after creating a withdrawal or transfer
 */

#ifndef _withdraw_create_response_H_
#define _withdraw_create_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdraw_create_response_t withdraw_create_response_t;

#include "status.h"
#include "withdraw_create_response_payed_at.h"
#include "withdraw_create_response_payout_account.h"



typedef struct withdraw_create_response_t {
    char *id; // string
    char *external_id; // string
    char *external_integration_key; // string
    char *external_integration_id; // string
    double cost_fee; //numeric
    payconductor_api_status__e status; //referenced enum
    char *error_code; // string
    char *error_message; // string
    struct withdraw_create_response_payed_at_t *payed_at; //model
    struct withdraw_create_response_payout_account_t *payout_account; //model

    int _library_owned; // Is the library responsible for freeing this object?
} withdraw_create_response_t;

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
);

void withdraw_create_response_free(withdraw_create_response_t *withdraw_create_response);

withdraw_create_response_t *withdraw_create_response_parseFromJSON(cJSON *withdraw_create_responseJSON);

cJSON *withdraw_create_response_convertToJSON(withdraw_create_response_t *withdraw_create_response);

#endif /* _withdraw_create_response_H_ */

