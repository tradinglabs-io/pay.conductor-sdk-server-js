# CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**customerCreate**](CustomerApi.md#customerCreate) | **POST** /customers/ | Create New Customer |
| [**customerListCustom**](CustomerApi.md#customerListCustom) | **GET** /customers/ | Get All Customers |
| [**customerRead**](CustomerApi.md#customerRead) | **GET** /customers/{id} | Get Customer By ID |
| [**customerUpdate**](CustomerApi.md#customerUpdate) | **PATCH** /customers/{id} | Update Customer Data |


<a id="customerCreate"></a>
# **customerCreate**
> CustomerReadResponse customerCreate(customerCreateRequest)

Create New Customer

Create a new customer by providing the required data in the request body.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = CustomerApi()
val customerCreateRequest : CustomerCreateRequest =  // CustomerCreateRequest | Schema for creating a new customer
try {
    val result : CustomerReadResponse = apiInstance.customerCreate(customerCreateRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CustomerApi#customerCreate")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CustomerApi#customerCreate")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **customerCreateRequest** | [**CustomerCreateRequest**](CustomerCreateRequest.md)| Schema for creating a new customer | |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="customerListCustom"></a>
# **customerListCustom**
> CustomerListResponse customerListCustom(page, pageSize, email, name, endDate, startDate)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = CustomerApi()
val page : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val pageSize : java.math.BigDecimal = 8.14 // java.math.BigDecimal | 
val email : kotlin.String = email_example // kotlin.String | 
val name : kotlin.String = name_example // kotlin.String | 
val endDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val startDate : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
try {
    val result : CustomerListResponse = apiInstance.customerListCustom(page, pageSize, email, name, endDate, startDate)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CustomerApi#customerListCustom")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CustomerApi#customerListCustom")
    e.printStackTrace()
}
```

### Parameters
| **page** | **java.math.BigDecimal**|  | [default to 1] |
| **pageSize** | **java.math.BigDecimal**|  | [default to 20] |
| **email** | **kotlin.String**|  | [optional] |
| **name** | **kotlin.String**|  | [optional] |
| **endDate** | **java.time.OffsetDateTime**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **startDate** | **java.time.OffsetDateTime**|  | [optional] |

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="customerRead"></a>
# **customerRead**
> CustomerReadResponse customerRead(id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = CustomerApi()
val id : kotlin.String = id_example // kotlin.String | 
try {
    val result : CustomerReadResponse = apiInstance.customerRead(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CustomerApi#customerRead")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CustomerApi#customerRead")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**|  | |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="customerUpdate"></a>
# **customerUpdate**
> CustomerReadResponse customerUpdate(id, customerUpdateRequest)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = CustomerApi()
val id : kotlin.String = id_example // kotlin.String | 
val customerUpdateRequest : CustomerUpdateRequest =  // CustomerUpdateRequest | Schema for updating customer information
try {
    val result : CustomerReadResponse = apiInstance.customerUpdate(id, customerUpdateRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CustomerApi#customerUpdate")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CustomerApi#customerUpdate")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.String**|  | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **customerUpdateRequest** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md)| Schema for updating customer information | |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

