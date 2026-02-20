# WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**withdrawCreate**](WithdrawApi.md#withdrawCreate) | **POST** /withdraws/ | Create Withdrawal |
| [**withdrawList**](WithdrawApi.md#withdrawList) | **GET** /withdraws/ | List Withdrawals |
| [**withdrawRead**](WithdrawApi.md#withdrawRead) | **GET** /withdraws/{id} | Get Withdrawal By ID |


<a id="withdrawCreate"></a>
# **withdrawCreate**
> WithdrawCreateResponse withdrawCreate(withdrawCreateRequest)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = WithdrawApi()
val withdrawCreateRequest : WithdrawCreateRequest =  // WithdrawCreateRequest | Withdrawal or transfer request data
try {
    val result : WithdrawCreateResponse = apiInstance.withdrawCreate(withdrawCreateRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WithdrawApi#withdrawCreate")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WithdrawApi#withdrawCreate")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **withdrawCreateRequest** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md)| Withdrawal or transfer request data | |

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="withdrawList"></a>
# **withdrawList**
> withdrawList(page, pageSize, endDate, startDate, id)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = WithdrawApi()
val page : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val pageSize : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val endDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val startDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.withdrawList(page, pageSize, endDate, startDate, id)
} catch (e: ClientException) {
    println("4xx response calling WithdrawApi#withdrawList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WithdrawApi#withdrawList")
    e.printStackTrace()
}
```

### Parameters
| **page** | **java.math.BigDecimal**|  | [default to 1] |
| **pageSize** | **java.math.BigDecimal**|  | [default to 20] |
| **endDate** | **java.time.OffsetDateTime**|  | [optional] |
| **startDate** | **java.time.OffsetDateTime**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**|  | [optional] |

### Return type

null (empty response body)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a id="withdrawRead"></a>
# **withdrawRead**
> withdrawRead(id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = WithdrawApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.withdrawRead(id)
} catch (e: ClientException) {
    println("4xx response calling WithdrawApi#withdrawRead")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WithdrawApi#withdrawRead")
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

