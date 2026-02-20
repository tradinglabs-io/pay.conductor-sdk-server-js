#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/customer_create_request.h"
#include "../model/customer_list_response.h"
#include "../model/customer_read_response.h"
#include "../model/customer_update_request.h"


// Create New Customer
//
// Create a new customer by providing the required data in the request body.
//
customer_read_response_t*
CustomerAPI_customerCreate(apiClient_t *apiClient, customer_create_request_t *customer_create_request);


// Get All Customers
//
// Retrieve a list of all customers associated with the organization, with support for filters and pagination.
//
customer_list_response_t*
CustomerAPI_customerListCustom(apiClient_t *apiClient, double page, double pageSize, char *email, char *name, char endDate, char startDate);


// Get Customer By ID
//
// Retrieve the complete details of a specific customer using their unique ID.
//
customer_read_response_t*
CustomerAPI_customerRead(apiClient_t *apiClient, char *id);


// Update Customer Data
//
// Update the information of an existing customer by providing the new data in the request body.
//
customer_read_response_t*
CustomerAPI_customerUpdate(apiClient_t *apiClient, char *id, customer_update_request_t *customer_update_request);


