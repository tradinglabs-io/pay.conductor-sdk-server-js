# WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**withdrawCreate**](WithdrawApi.md#withdrawCreate) | **POST** /withdraws/ | Create Withdrawal |
| [**withdrawList**](WithdrawApi.md#withdrawList) | **GET** /withdraws/ | List Withdrawals |
| [**withdrawRead**](WithdrawApi.md#withdrawRead) | **GET** /withdraws/{id} | Get Withdrawal By ID |


<a id="withdrawCreate"></a>
# **withdrawCreate**
> WithdrawCreateResponse withdrawCreate(withdrawCreateRequest)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WithdrawApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    WithdrawApi apiInstance = new WithdrawApi(defaultClient);
    WithdrawCreateRequest withdrawCreateRequest = new WithdrawCreateRequest(); // WithdrawCreateRequest | Withdrawal or transfer request data
    try {
      WithdrawCreateResponse result = apiInstance.withdrawCreate(withdrawCreateRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WithdrawApi#withdrawCreate");
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
| **withdrawCreateRequest** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md)| Withdrawal or transfer request data | |

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after creating a withdrawal or transfer |  -  |

<a id="withdrawList"></a>
# **withdrawList**
> withdrawList(page, pageSize, endDate, startDate, id)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WithdrawApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    WithdrawApi apiInstance = new WithdrawApi(defaultClient);
    BigDecimal page = new BigDecimal("1"); // BigDecimal | 
    BigDecimal pageSize = new BigDecimal("20"); // BigDecimal | 
    OffsetDateTime endDate = OffsetDateTime.now(); // OffsetDateTime | 
    OffsetDateTime startDate = OffsetDateTime.now(); // OffsetDateTime | 
    String id = "id_example"; // String | 
    try {
      apiInstance.withdrawList(page, pageSize, endDate, startDate, id);
    } catch (ApiException e) {
      System.err.println("Exception when calling WithdrawApi#withdrawList");
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

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


<a id="withdrawRead"></a>
# **withdrawRead**
> withdrawRead(id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WithdrawApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://app.payconductor.ai/api/v1");
    
    // Configure HTTP basic authorization: basicAuth
    HttpBasicAuth basicAuth = (HttpBasicAuth) defaultClient.getAuthentication("basicAuth");
    basicAuth.setUsername("YOUR USERNAME");
    basicAuth.setPassword("YOUR PASSWORD");

    WithdrawApi apiInstance = new WithdrawApi(defaultClient);
    String id = "id_example"; // String | 
    try {
      apiInstance.withdrawRead(id);
    } catch (ApiException e) {
      System.err.println("Exception when calling WithdrawApi#withdrawRead");
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


