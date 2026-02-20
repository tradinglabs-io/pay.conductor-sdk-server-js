# WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WithdrawCreate**](WithdrawApi.md#WithdrawCreate) | **POST** /withdraws/ | Create Withdrawal
[**WithdrawList**](WithdrawApi.md#WithdrawList) | **GET** /withdraws/ | List Withdrawals
[**WithdrawRead**](WithdrawApi.md#WithdrawRead) | **GET** /withdraws/{id} | Get Withdrawal By ID


# **WithdrawCreate**
> WithdrawCreateResponse WithdrawCreate(withdraw_create_request)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example
```R
library(payconductor_sdk)

# Create Withdrawal
#
# prepare function argument(s)
var_withdraw_create_request <- Withdraw_Create_Request$new(123, Withdraw_Payout_Account_Data$new("ownerDocument_example", "ownerName_example", "pixKey_example", PixType$new()), "externalId_example", MerchantInput$new("document_example", "email_example", "name_example")) # WithdrawCreateRequest | Withdrawal or transfer request data

api_instance <- WithdrawApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$WithdrawCreate(var_withdraw_create_requestdata_file = "result.txt")
result <- api_instance$WithdrawCreate(var_withdraw_create_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdraw_create_request** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md)| Withdrawal or transfer request data | 

### Return type

[**WithdrawCreateResponse**](Withdraw_Create_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after creating a withdrawal or transfer |  -  |

# **WithdrawList**
> WithdrawList(page, page_size, end_date = var.end_date, start_date = var.start_date, id = var.id)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example
```R
library(payconductor_sdk)

# List Withdrawals
#
# prepare function argument(s)
var_page <- 1 # numeric | 
var_page_size <- 20 # numeric | 
var_end_date <- "end_date_example" # character |  (Optional)
var_start_date <- "start_date_example" # character |  (Optional)
var_id <- "id_example" # character |  (Optional)

api_instance <- WithdrawApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$WithdrawList(var_page, var_page_size, end_date = var_end_date, start_date = var_start_date, id = var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **numeric**|  | [default to 1]
 **page_size** | **numeric**|  | [default to 20]
 **end_date** | **character**|  | [optional] 
 **start_date** | **character**|  | [optional] 
 **id** | **character**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


# **WithdrawRead**
> WithdrawRead(id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example
```R
library(payconductor_sdk)

# Get Withdrawal By ID
#
# prepare function argument(s)
var_id <- "id_example" # character | 

api_instance <- WithdrawApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$WithdrawRead(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


