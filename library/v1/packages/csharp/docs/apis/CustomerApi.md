# payconductor_sdk.Api.CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**CustomerCreate**](CustomerApi.md#customercreate) | **POST** /customers/ | Create New Customer |
| [**CustomerListCustom**](CustomerApi.md#customerlistcustom) | **GET** /customers/ | Get All Customers |
| [**CustomerRead**](CustomerApi.md#customerread) | **GET** /customers/{id} | Get Customer By ID |
| [**CustomerUpdate**](CustomerApi.md#customerupdate) | **PATCH** /customers/{id} | Update Customer Data |

<a id="customercreate"></a>
# **CustomerCreate**
> CustomerReadResponse CustomerCreate (CustomerCreateRequest customerCreateRequest)

Create New Customer

Create a new customer by providing the required data in the request body.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **customerCreateRequest** | [**CustomerCreateRequest**](CustomerCreateRequest.md) | Schema for creating a new customer |  |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Customer response with complete information |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="customerlistcustom"></a>
# **CustomerListCustom**
> CustomerListResponse CustomerListCustom (decimal page, decimal pageSize, string email = null, string name = null, DateTime endDate = null, DateTime startDate = null)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **page** | **decimal** |  | [default to 1M] |
| **pageSize** | **decimal** |  | [default to 20M] |
| **email** | **string** |  | [optional]  |
| **name** | **string** |  | [optional]  |
| **endDate** | **DateTime** |  | [optional]  |
| **startDate** | **DateTime** |  | [optional]  |

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Paginated list of customers |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="customerread"></a>
# **CustomerRead**
> CustomerReadResponse CustomerRead (string id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **string** |  |  |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Customer response with complete information |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="customerupdate"></a>
# **CustomerUpdate**
> CustomerReadResponse CustomerUpdate (string id, CustomerUpdateRequest customerUpdateRequest)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **string** |  |  |
| **customerUpdateRequest** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md) | Schema for updating customer information |  |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Customer response with complete information |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

