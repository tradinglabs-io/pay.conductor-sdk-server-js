# SaquesETransfernciasApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**getWithdraws**](SaquesETransfernciasApi.md#getWithdraws) | **GET** /withdraws/ | Lista os saques |
| [**getWithdrawsById**](SaquesETransfernciasApi.md#getWithdrawsById) | **GET** /withdraws/{id} | Buscar pelo ID |
| [**postWithdraws**](SaquesETransfernciasApi.md#postWithdraws) | **POST** /withdraws/ | Cria saque |


<a id="getWithdraws"></a>
# **getWithdraws**
> getWithdraws(period, page, pageSize, endDate, startDate, id)

Lista os saques

Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = SaquesETransfernciasApi()
val period : kotlin.String = period_example // kotlin.String | 
val page : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val pageSize : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val endDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val startDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.getWithdraws(period, page, pageSize, endDate, startDate, id)
} catch (e: ClientException) {
    println("4xx response calling SaquesETransfernciasApi#getWithdraws")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SaquesETransfernciasApi#getWithdraws")
    e.printStackTrace()
}
```

### Parameters
| **period** | **kotlin.String**|  | [default to Period.Last7Days] [enum: Today, Yesterday, Last7Days, Last30Days, ThisMonth, LastMonth, ThisYear, Custom] |
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

<a id="getWithdrawsById"></a>
# **getWithdrawsById**
> getWithdrawsById(id)

Buscar pelo ID

Retorna os detalhes de um saque ou transferência específico usando seu ID

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = SaquesETransfernciasApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.getWithdrawsById(id)
} catch (e: ClientException) {
    println("4xx response calling SaquesETransfernciasApi#getWithdrawsById")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SaquesETransfernciasApi#getWithdrawsById")
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

<a id="postWithdraws"></a>
# **postWithdraws**
> PostWithdraws200Response postWithdraws(postWithdrawsRequest)

Cria saque

Realiza um novo saque ou transferência para a conta de pagamento informada

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = SaquesETransfernciasApi()
val postWithdrawsRequest : PostWithdrawsRequest =  // PostWithdrawsRequest | 
try {
    val result : PostWithdraws200Response = apiInstance.postWithdraws(postWithdrawsRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SaquesETransfernciasApi#postWithdraws")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SaquesETransfernciasApi#postWithdraws")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **postWithdrawsRequest** | [**PostWithdrawsRequest**](PostWithdrawsRequest.md)|  | |

### Return type

[**PostWithdraws200Response**](PostWithdraws200Response.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

