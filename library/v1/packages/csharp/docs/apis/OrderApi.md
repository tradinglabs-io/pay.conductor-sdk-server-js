# payconductor_sdk.Api.OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**OrderConfirm**](OrderApi.md#orderconfirm) | **POST** /orders/{id}/confirm | Confirm Order |
| [**OrderCreate**](OrderApi.md#ordercreate) | **POST** /orders/ | Create Order |
| [**OrderList**](OrderApi.md#orderlist) | **GET** /orders/ | List Orders |
| [**OrderRead**](OrderApi.md#orderread) | **GET** /orders/{id} | Get Order By ID |
| [**OrderRefund**](OrderApi.md#orderrefund) | **POST** /orders/{id}/refund | Refund Order |

<a id="orderconfirm"></a>
# **OrderConfirm**
> OrderConfirmResponse OrderConfirm (string id, OrderPaymentRequest orderPaymentRequest)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **string** |  |  |
| **orderPaymentRequest** | [**OrderPaymentRequest**](OrderPaymentRequest.md) | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) |  |

### Return type

[**OrderConfirmResponse**](OrderConfirmResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after confirming a draft order |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="ordercreate"></a>
# **OrderCreate**
> OrderCreateResponse OrderCreate (OrderCreateRequest orderCreateRequest)

Create Order

Create a new order for payment using the provided data


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **orderCreateRequest** | [**OrderCreateRequest**](OrderCreateRequest.md) | Order data for payment processing |  |

### Return type

[**OrderCreateResponse**](OrderCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after creating an order |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="orderlist"></a>
# **OrderList**
> void OrderList (decimal page, decimal pageSize, DateTime endDate = null, DateTime startDate = null, string id = null, string status = null)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **page** | **decimal** |  | [default to 1M] |
| **pageSize** | **decimal** |  | [default to 20M] |
| **endDate** | **DateTime** |  | [optional]  |
| **startDate** | **DateTime** |  | [optional]  |
| **id** | **string** |  | [optional]  |
| **status** | **string** |  | [optional]  |

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="orderread"></a>
# **OrderRead**
> void OrderRead (string id)

Get Order By ID

Retrieve the complete data of an order by our ID


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **string** |  |  |

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="orderrefund"></a>
# **OrderRefund**
> void OrderRefund (string id)

Refund Order

Initiate a refund for the order specified by ID.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **string** |  |  |

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

