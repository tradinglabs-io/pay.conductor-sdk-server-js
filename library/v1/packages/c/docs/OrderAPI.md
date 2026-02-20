# OrderAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OrderAPI_orderConfirm**](OrderAPI.md#OrderAPI_orderConfirm) | **POST** /orders/{id}/confirm | Confirm Order
[**OrderAPI_orderCreate**](OrderAPI.md#OrderAPI_orderCreate) | **POST** /orders/ | Create Order
[**OrderAPI_orderList**](OrderAPI.md#OrderAPI_orderList) | **GET** /orders/ | List Orders
[**OrderAPI_orderRead**](OrderAPI.md#OrderAPI_orderRead) | **GET** /orders/{id} | Get Order By ID
[**OrderAPI_orderRefund**](OrderAPI.md#OrderAPI_orderRefund) | **POST** /orders/{id}/refund | Refund Order


# **OrderAPI_orderConfirm**
```c
// Confirm Order
//
// Confirms a Draft order, setting the payment method and processing the charges associated with the order.
//
order_confirm_response_t* OrderAPI_orderConfirm(apiClient_t *apiClient, char *id, order_payment_request_t *order_payment_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**order_payment_request** | **[order_payment_request_t](order_payment_request.md) \*** | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | 

### Return type

[order_confirm_response_t](order_confirm_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderCreate**
```c
// Create Order
//
// Create a new order for payment using the provided data
//
order_create_response_t* OrderAPI_orderCreate(apiClient_t *apiClient, order_create_request_t *order_create_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_create_request** | **[order_create_request_t](order_create_request.md) \*** | Order data for payment processing | 

### Return type

[order_create_response_t](order_create_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderList**
```c
// List Orders
//
// Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.
//
void OrderAPI_orderList(apiClient_t *apiClient, double page, double pageSize, char endDate, char startDate, char *id, payconductor_api_orderList_status_e status);
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
**status** | **payconductor_api_orderList_status_e** |  | [optional] 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderRead**
```c
// Get Order By ID
//
// Retrieve the complete data of an order by our ID
//
void OrderAPI_orderRead(apiClient_t *apiClient, char *id);
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

# **OrderAPI_orderRefund**
```c
// Refund Order
//
// Initiate a refund for the order specified by ID.
//
void OrderAPI_orderRefund(apiClient_t *apiClient, char *id);
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

