#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/withdraw_create_request.h"
#include "../model/withdraw_create_response.h"


// Create Withdrawal
//
// Create a new withdrawal or transfer to the provided payment account
//
withdraw_create_response_t*
WithdrawAPI_withdrawCreate(apiClient_t *apiClient, withdraw_create_request_t *withdraw_create_request);


// List Withdrawals
//
// Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)
//
void
WithdrawAPI_withdrawList(apiClient_t *apiClient, double page, double pageSize, char endDate, char startDate, char *id);


// Get Withdrawal By ID
//
// Returns the details of a specific withdrawal or transfer using its ID
//
void
WithdrawAPI_withdrawRead(apiClient_t *apiClient, char *id);


