# PedidosApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**getOrders**](PedidosApi.md#getOrders) | **GET** /orders/ | Listar pedidos |
| [**getOrdersById**](PedidosApi.md#getOrdersById) | **GET** /orders/{id} | Buscar pelo ID |
| [**postOrders**](PedidosApi.md#postOrders) | **POST** /orders/ | Criar pedido |
| [**postOrdersByIdRefund**](PedidosApi.md#postOrdersByIdRefund) | **POST** /orders/{id}/refund | Reembolsar pedido |


<a id="getOrders"></a>
# **getOrders**
> getOrders(period, page, pageSize, endDate, startDate, id, status)

Listar pedidos

Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário.

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = PedidosApi()
val period : kotlin.String = period_example // kotlin.String | 
val page : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val pageSize : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val endDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val startDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val id : kotlin.String = id_example // kotlin.String | 
val status : kotlin.String = status_example // kotlin.String | 
try {
    apiInstance.getOrders(period, page, pageSize, endDate, startDate, id, status)
} catch (e: ClientException) {
    println("4xx response calling PedidosApi#getOrders")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PedidosApi#getOrders")
    e.printStackTrace()
}
```

### Parameters
| **period** | **kotlin.String**|  | [default to Period.Last7Days] [enum: Today, Yesterday, Last7Days, Last30Days, ThisMonth, LastMonth, ThisYear, Custom] |
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

<a id="getOrdersById"></a>
# **getOrdersById**
> getOrdersById(id)

Buscar pelo ID

Localize os dados completos de um pedido buscando pelo nosso id

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = PedidosApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.getOrdersById(id)
} catch (e: ClientException) {
    println("4xx response calling PedidosApi#getOrdersById")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PedidosApi#getOrdersById")
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

<a id="postOrders"></a>
# **postOrders**
> PostOrders200Response postOrders(postOrdersRequest)

Criar pedido

Crie um novo pedido para pagamento utilizando os dados fornecidos

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = PedidosApi()
val postOrdersRequest : PostOrdersRequest =  // PostOrdersRequest | 
try {
    val result : PostOrders200Response = apiInstance.postOrders(postOrdersRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PedidosApi#postOrders")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PedidosApi#postOrders")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **postOrdersRequest** | [**PostOrdersRequest**](PostOrdersRequest.md)|  | |

### Return type

[**PostOrders200Response**](PostOrders200Response.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="postOrdersByIdRefund"></a>
# **postOrdersByIdRefund**
> postOrdersByIdRefund(id)

Reembolsar pedido

Inicie um reembolso para o pedido especificado pelo ID.

### Example
```kotlin
// Import classes:
//import payconductor-sdk.infrastructure.*
//import payconductor-sdk.models.*

val apiInstance = PedidosApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    apiInstance.postOrdersByIdRefund(id)
} catch (e: ClientException) {
    println("4xx response calling PedidosApi#postOrdersByIdRefund")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PedidosApi#postOrdersByIdRefund")
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

