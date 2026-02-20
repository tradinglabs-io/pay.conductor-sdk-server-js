# CustomerAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CustomerAPI_customerCreate**](CustomerAPI.md#CustomerAPI_customerCreate) | **POST** /customers/ | Create New Customer
[**CustomerAPI_customerListCustom**](CustomerAPI.md#CustomerAPI_customerListCustom) | **GET** /customers/ | Get All Customers
[**CustomerAPI_customerRead**](CustomerAPI.md#CustomerAPI_customerRead) | **GET** /customers/{id} | Get Customer By ID
[**CustomerAPI_customerUpdate**](CustomerAPI.md#CustomerAPI_customerUpdate) | **PATCH** /customers/{id} | Update Customer Data


# **CustomerAPI_customerCreate**
```c
// Create New Customer
//
// Create a new customer by providing the required data in the request body.
//
customer_read_response_t* CustomerAPI_customerCreate(apiClient_t *apiClient, customer_create_request_t *customer_create_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_create_request** | **[customer_create_request_t](customer_create_request.md) \*** | Schema for creating a new customer | 

### Return type

[customer_read_response_t](customer_read_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerListCustom**
```c
// Get All Customers
//
// Retrieve a list of all customers associated with the organization, with support for filters and pagination.
//
customer_list_response_t* CustomerAPI_customerListCustom(apiClient_t *apiClient, double page, double pageSize, char *email, char *name, char endDate, char startDate);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**page** | **double** |  | [default to 1]
**pageSize** | **double** |  | [default to 20]
**email** | **char \*** |  | [optional] 
**name** | **char \*** |  | [optional] 
**endDate** | **char** |  | [optional] 
**startDate** | **char** |  | [optional] 

### Return type

[customer_list_response_t](customer_list_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerRead**
```c
// Get Customer By ID
//
// Retrieve the complete details of a specific customer using their unique ID.
//
customer_read_response_t* CustomerAPI_customerRead(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

[customer_read_response_t](customer_read_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerUpdate**
```c
// Update Customer Data
//
// Update the information of an existing customer by providing the new data in the request body.
//
customer_read_response_t* CustomerAPI_customerUpdate(apiClient_t *apiClient, char *id, customer_update_request_t *customer_update_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 
**customer_update_request** | **[customer_update_request_t](customer_update_request.md) \*** | Schema for updating customer information | 

### Return type

[customer_read_response_t](customer_read_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

