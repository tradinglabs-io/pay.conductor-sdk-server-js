#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/order_confirm_response.h"
#include "../model/order_create_request.h"
#include "../model/order_create_response.h"
#include "../model/order_payment_request.h"

// Enum STATUS for OrderAPI_orderList
typedef enum  { payconductor_api_orderList_STATUS_NULL = 0, payconductor_api_orderList_STATUS_Generating, payconductor_api_orderList_STATUS_Pending, payconductor_api_orderList_STATUS_Completed, payconductor_api_orderList_STATUS_Failed, payconductor_api_orderList_STATUS_Canceled, payconductor_api_orderList_STATUS_Refunding, payconductor_api_orderList_STATUS_Refunded, payconductor_api_orderList_STATUS_InDispute, payconductor_api_orderList_STATUS_Chargeback } payconductor_api_orderList_status_e;


// Confirm Order
//
// Confirms a Draft order, setting the payment method and processing the charges associated with the order.
//
order_confirm_response_t*
OrderAPI_orderConfirm(apiClient_t *apiClient, char *id, order_payment_request_t *order_payment_request);


// Create Order
//
// Create a new order for payment using the provided data
//
order_create_response_t*
OrderAPI_orderCreate(apiClient_t *apiClient, order_create_request_t *order_create_request);


// List Orders
//
// Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.
//
void
OrderAPI_orderList(apiClient_t *apiClient, double page, double pageSize, char endDate, char startDate, char *id, payconductor_api_orderList_status_e status);


// Get Order By ID
//
// Retrieve the complete data of an order by our ID
//
void
OrderAPI_orderRead(apiClient_t *apiClient, char *id);


// Refund Order
//
// Initiate a refund for the order specified by ID.
//
void
OrderAPI_orderRefund(apiClient_t *apiClient, char *id);


