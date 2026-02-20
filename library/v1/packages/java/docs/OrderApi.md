# OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
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
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.OrderApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    OrderApi apiInstance = new OrderApi(defaultClient);
    String id = "id_example"; // String | 
    OrderPaymentRequest orderPaymentRequest = new OrderPaymentRequest(); // OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)
    try {
      OrderConfirmResponse result = apiInstance.orderConfirm(id, orderPaymentRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling OrderApi#orderConfirm");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**|  | |
| **orderPaymentRequest** | [**OrderPaymentRequest**](OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | |

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

<a id="orderCreate"></a>
# **orderCreate**
> OrderCreateResponse orderCreate(orderCreateRequest)

Create Order

Create a new order for payment using the provided data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.OrderApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    OrderApi apiInstance = new OrderApi(defaultClient);
    OrderCreateRequest orderCreateRequest = new OrderCreateRequest(); // OrderCreateRequest | Order data for payment processing
    try {
      OrderCreateResponse result = apiInstance.orderCreate(orderCreateRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling OrderApi#orderCreate");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **orderCreateRequest** | [**OrderCreateRequest**](OrderCreateRequest.md)| Order data for payment processing | |

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

<a id="orderList"></a>
# **orderList**
> orderList(page, pageSize, endDate, startDate, id, status)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.OrderApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    OrderApi apiInstance = new OrderApi(defaultClient);
    BigDecimal page = new BigDecimal("1"); // BigDecimal | 
    BigDecimal pageSize = new BigDecimal("20"); // BigDecimal | 
    OffsetDateTime endDate = OffsetDateTime.now(); // OffsetDateTime | 
    OffsetDateTime startDate = OffsetDateTime.now(); // OffsetDateTime | 
    String id = "id_example"; // String | 
    String status = "Generating"; // String | 
    try {
      apiInstance.orderList(page, pageSize, endDate, startDate, id, status);
    } catch (ApiException e) {
      System.err.println("Exception when calling OrderApi#orderList");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **page** | **BigDecimal**|  | [default to 1] |
| **pageSize** | **BigDecimal**|  | [default to 20] |
| **endDate** | **OffsetDateTime**|  | [optional] |
| **startDate** | **OffsetDateTime**|  | [optional] |
| **id** | **String**|  | [optional] |
| **status** | **String**|  | [optional] [enum: Generating, Pending, Completed, Failed, Canceled, Refunding, Refunded, InDispute, Chargeback] |

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


<a id="orderRead"></a>
# **orderRead**
> orderRead(id)

Get Order By ID

Retrieve the complete data of an order by our ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.OrderApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    OrderApi apiInstance = new OrderApi(defaultClient);
    String id = "id_example"; // String | 
    try {
      apiInstance.orderRead(id);
    } catch (ApiException e) {
      System.err.println("Exception when calling OrderApi#orderRead");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**|  | |

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


<a id="orderRefund"></a>
# **orderRefund**
> orderRefund(id)

Refund Order

Initiate a refund for the order specified by ID.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.OrderApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    OrderApi apiInstance = new OrderApi(defaultClient);
    String id = "id_example"; // String | 
    try {
      apiInstance.orderRefund(id);
    } catch (ApiException e) {
      System.err.println("Exception when calling OrderApi#orderRefund");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**|  | |

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


