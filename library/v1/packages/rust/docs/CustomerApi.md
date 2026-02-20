# \CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**customer_create**](CustomerApi.md#customer_create) | **POST** /customers/ | Create New Customer
[**customer_list_custom**](CustomerApi.md#customer_list_custom) | **GET** /customers/ | Get All Customers
[**customer_read**](CustomerApi.md#customer_read) | **GET** /customers/{id} | Get Customer By ID
[**customer_update**](CustomerApi.md#customer_update) | **PATCH** /customers/{id} | Update Customer Data



## customer_create

> models::CustomerReadResponse customer_create(customer_create_request)
Create New Customer

Create a new customer by providing the required data in the request body.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**customer_create_request** | [**CustomerCreateRequest**](CustomerCreateRequest.md) | Schema for creating a new customer | [required] |

### Return type

[**models::CustomerReadResponse**](Customer_Read_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## customer_list_custom

> models::CustomerListResponse customer_list_custom(page, page_size, email, name, end_date, start_date)
Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**page** | **f64** |  | [required] |[default to 1]
**page_size** | **f64** |  | [required] |[default to 20]
**email** | Option<**String**> |  |  |
**name** | Option<**String**> |  |  |
**end_date** | Option<**String**> |  |  |
**start_date** | Option<**String**> |  |  |

### Return type

[**models::CustomerListResponse**](Customer_List_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## customer_read

> models::CustomerReadResponse customer_read(id)
Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |

### Return type

[**models::CustomerReadResponse**](Customer_Read_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## customer_update

> models::CustomerReadResponse customer_update(id, customer_update_request)
Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |
**customer_update_request** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md) | Schema for updating customer information | [required] |

### Return type

[**models::CustomerReadResponse**](Customer_Read_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

