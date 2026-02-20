# WithdrawAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WithdrawAPI_withdrawCreate**](WithdrawAPI.md#WithdrawAPI_withdrawCreate) | **POST** /withdraws/ | Create Withdrawal
[**WithdrawAPI_withdrawList**](WithdrawAPI.md#WithdrawAPI_withdrawList) | **GET** /withdraws/ | List Withdrawals
[**WithdrawAPI_withdrawRead**](WithdrawAPI.md#WithdrawAPI_withdrawRead) | **GET** /withdraws/{id} | Get Withdrawal By ID


# **WithdrawAPI_withdrawCreate**
```c
// Create Withdrawal
//
// Create a new withdrawal or transfer to the provided payment account
//
withdraw_create_response_t* WithdrawAPI_withdrawCreate(apiClient_t *apiClient, withdraw_create_request_t *withdraw_create_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**withdraw_create_request** | **[withdraw_create_request_t](withdraw_create_request.md) \*** | Withdrawal or transfer request data | 

### Return type

[withdraw_create_response_t](withdraw_create_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WithdrawAPI_withdrawList**
```c
// List Withdrawals
//
// Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)
//
void WithdrawAPI_withdrawList(apiClient_t *apiClient, double page, double pageSize, char endDate, char startDate, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**page** | **double** |  | [default to 1]
**pageSize** | **double** |  | [default to 20]
**endDate** | **char** |  | [optional] 
**startDate** | **char** |  | [optional] 
**id** | **char \*** |  | [optional] 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WithdrawAPI_withdrawRead**
```c
// Get Withdrawal By ID
//
// Returns the details of a specific withdrawal or transfer using its ID
//
void WithdrawAPI_withdrawRead(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

