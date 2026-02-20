# OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**orderConfirm**](OrderApi.md#orderConfirm) | **POST** /orders/{id}/confirm | Confirm Order |
| [**orderCreate**](OrderApi.md#orderCreate) | **POST** /orders/ | Create Order |
| [**orderList**](OrderApi.md#orderList) | **GET** /orders/ | List Orders |
| [**orderRead**](OrderApi.md#orderRead) | **GET** /orders/{id} | Get Order By ID |
| [**orderRefund**](OrderApi.md#orderRefund) | **POST** /orders/{id}/refund | Refund Order |


<a id="orderConfirm"></a>
# **orderConfirm**
> OrderConfirmResponse orderConfirm(id, orderPaymentRequest)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = OrderApi()
val id : kotlin.String = id_example // kotlin.String | 
val orderPaymentRequest : OrderPaymentRequest =  // OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)
try {
    val result : OrderConfirmResponse = apiInstance.orderConfirm(id, orderPaymentRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling OrderApi#orderConfirm")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling OrderApi#orderConfirm")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.String**|  | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **orderPaymentRequest** | [**OrderPaymentRequest**](OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | |

### Return type

[**OrderConfirmResponse**](OrderConfirmResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="orderCreate"></a>
# **orderCreate**
> OrderCreateResponse orderCreate(orderCreateRequest)

Create Order

Create a new order for payment using the provided data

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = OrderApi()
val orderCreateRequest : OrderCreateRequest =  // OrderCreateRequest | Order data for payment processing
try {
    val result : OrderCreateResponse = apiInstance.orderCreate(orderCreateRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling OrderApi#orderCreate")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling OrderApi#orderCreate")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **orderCreateRequest** | [**OrderCreateRequest**](OrderCreateRequest.md)| Order data for payment processing | |

### Return type

[**OrderCreateResponse**](OrderCreateResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="orderList"></a>
# **orderList**
> orderList(page, pageSize, endDate, startDate, id, status)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = OrderApi()
val page : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val pageSize : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val endDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val startDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val id : kotlin.String = id_example // kotlin.String | 
val status : kotlin.String = status_example // kotlin.String | 
try {
    apiInstance.orderList(page, pageSize, endDate, startDate, id, status)
} catch (e: ClientException) {
    println("4xx response calling OrderApi#orderList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling OrderApi#orderList")
    e.printStackTrace()
}
```

### Parameters
| **page** | **java.math.BigDecimal**|  | [default to 1] |
| **pageSize** | **java.math.BigDecimal**|  | [default to 20] |
| **endDate** | **java.time.OffsetDateTime**|  | [optional] |
| **startDate** | **java.time.OffsetDateTime**|  | [optional] |
| **id** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **status** | **kotlin.String**|  | [optional] [enum: Generating, Pending, Completed, Failed, Canceled, Refunding, Refunded, InDispute, Chargeback] |

### Return type

null (empty response body)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a id="orderRead"></a>
# **orderRead**
> orderRead(id)

Get Order By ID

Retrieve the complete data of an order by our ID

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = OrderApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.orderRead(id)
} catch (e: ClientException) {
    println("4xx response calling OrderApi#orderRead")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling OrderApi#orderRead")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**|  | |

### Return type

null (empty response body)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a id="orderRefund"></a>
# **orderRefund**
> orderRefund(id)

Refund Order

Initiate a refund for the order specified by ID.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = OrderApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.orderRefund(id)
} catch (e: ClientException) {
    println("4xx response calling OrderApi#orderRefund")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling OrderApi#orderRefund")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**|  | |

### Return type

null (empty response body)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

