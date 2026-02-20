# \OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**order_confirm**](OrderApi.md#order_confirm) | **POST** /orders/{id}/confirm | Confirm Order
[**order_create**](OrderApi.md#order_create) | **POST** /orders/ | Create Order
[**order_list**](OrderApi.md#order_list) | **GET** /orders/ | List Orders
[**order_read**](OrderApi.md#order_read) | **GET** /orders/{id} | Get Order By ID
[**order_refund**](OrderApi.md#order_refund) | **POST** /orders/{id}/refund | Refund Order



## order_confirm

> models::OrderConfirmResponse order_confirm(id, order_payment_request)
Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |
**order_payment_request** | [**OrderPaymentRequest**](OrderPaymentRequest.md) | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | [required] |

### Return type

[**models::OrderConfirmResponse**](Order_Confirm_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## order_create

> models::OrderCreateResponse order_create(order_create_request)
Create Order

Create a new order for payment using the provided data

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**order_create_request** | [**OrderCreateRequest**](OrderCreateRequest.md) | Order data for payment processing | [required] |

### Return type

[**models::OrderCreateResponse**](Order_Create_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## order_list

> order_list(page, page_size, end_date, start_date, id, status)
List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**page** | **f64** |  | [required] |[default to 1]
**page_size** | **f64** |  | [required] |[default to 20]
**end_date** | Option<**String**> |  |  |
**start_date** | Option<**String**> |  |  |
**id** | Option<**String**> |  |  |
**status** | Option<**String**> |  |  |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## order_read

> order_read(id)
Get Order By ID

Retrieve the complete data of an order by our ID

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## order_refund

> order_refund(id)
Refund Order

Initiate a refund for the order specified by ID.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

