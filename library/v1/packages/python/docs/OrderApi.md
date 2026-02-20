# payconductor_sdk.OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**order_confirm**](OrderApi.md#order_confirm) | **POST** /orders/{id}/confirm | Confirm Order
[**order_create**](OrderApi.md#order_create) | **POST** /orders/ | Create Order
[**order_list**](OrderApi.md#order_list) | **GET** /orders/ | List Orders
[**order_read**](OrderApi.md#order_read) | **GET** /orders/{id} | Get Order By ID
[**order_refund**](OrderApi.md#order_refund) | **POST** /orders/{id}/refund | Refund Order


# **order_confirm**
> OrderConfirmResponse order_confirm(id, order_payment_request)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.order_confirm_response import OrderConfirmResponse
from payconductor_sdk.models.order_payment_request import OrderPaymentRequest
from payconductor_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://app.payconductor.ai/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = payconductor_sdk.Configuration(
    host = "https://app.payconductor.ai/api/v1"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure HTTP basic authorization: basicAuth
configuration = payconductor_sdk.Configuration(
    username = os.environ["USERNAME"],
    password = os.environ["PASSWORD"]
)

# Enter a context with an instance of the API client
with payconductor_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = payconductor_sdk.OrderApi(api_client)
    id = 'id_example' # str | 
    order_payment_request = payconductor_sdk.OrderPaymentRequest() # OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

    try:
        # Confirm Order
        api_response = api_instance.order_confirm(id, order_payment_request)
        print("The response of OrderApi->order_confirm:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling OrderApi->order_confirm: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  | 
 **order_payment_request** | [**OrderPaymentRequest**](OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | 

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
**200** | Response after confirming a draft order |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_create**
> OrderCreateResponse order_create(order_create_request)

Create Order

Create a new order for payment using the provided data

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.order_create_request import OrderCreateRequest
from payconductor_sdk.models.order_create_response import OrderCreateResponse
from payconductor_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://app.payconductor.ai/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = payconductor_sdk.Configuration(
    host = "https://app.payconductor.ai/api/v1"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure HTTP basic authorization: basicAuth
configuration = payconductor_sdk.Configuration(
    username = os.environ["USERNAME"],
    password = os.environ["PASSWORD"]
)

# Enter a context with an instance of the API client
with payconductor_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = payconductor_sdk.OrderApi(api_client)
    order_create_request = payconductor_sdk.OrderCreateRequest() # OrderCreateRequest | Order data for payment processing

    try:
        # Create Order
        api_response = api_instance.order_create(order_create_request)
        print("The response of OrderApi->order_create:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling OrderApi->order_create: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **order_create_request** | [**OrderCreateRequest**](OrderCreateRequest.md)| Order data for payment processing | 

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
**200** | Response after creating an order |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_list**
> order_list(page, page_size, end_date=end_date, start_date=start_date, id=id, status=status)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://app.payconductor.ai/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = payconductor_sdk.Configuration(
    host = "https://app.payconductor.ai/api/v1"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure HTTP basic authorization: basicAuth
configuration = payconductor_sdk.Configuration(
    username = os.environ["USERNAME"],
    password = os.environ["PASSWORD"]
)

# Enter a context with an instance of the API client
with payconductor_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = payconductor_sdk.OrderApi(api_client)
    page = 1 # float |  (default to 1)
    page_size = 20 # float |  (default to 20)
    end_date = '2013-10-20T19:20:30+01:00' # datetime |  (optional)
    start_date = '2013-10-20T19:20:30+01:00' # datetime |  (optional)
    id = 'id_example' # str |  (optional)
    status = 'status_example' # str |  (optional)

    try:
        # List Orders
        api_instance.order_list(page, page_size, end_date=end_date, start_date=start_date, id=id, status=status)
    except Exception as e:
        print("Exception when calling OrderApi->order_list: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **float**|  | [default to 1]
 **page_size** | **float**|  | [default to 20]
 **end_date** | **datetime**|  | [optional] 
 **start_date** | **datetime**|  | [optional] 
 **id** | **str**|  | [optional] 
 **status** | **str**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_read**
> order_read(id)

Get Order By ID

Retrieve the complete data of an order by our ID

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://app.payconductor.ai/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = payconductor_sdk.Configuration(
    host = "https://app.payconductor.ai/api/v1"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure HTTP basic authorization: basicAuth
configuration = payconductor_sdk.Configuration(
    username = os.environ["USERNAME"],
    password = os.environ["PASSWORD"]
)

# Enter a context with an instance of the API client
with payconductor_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = payconductor_sdk.OrderApi(api_client)
    id = 'id_example' # str | 

    try:
        # Get Order By ID
        api_instance.order_read(id)
    except Exception as e:
        print("Exception when calling OrderApi->order_read: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_refund**
> order_refund(id)

Refund Order

Initiate a refund for the order specified by ID.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://app.payconductor.ai/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = payconductor_sdk.Configuration(
    host = "https://app.payconductor.ai/api/v1"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure HTTP basic authorization: basicAuth
configuration = payconductor_sdk.Configuration(
    username = os.environ["USERNAME"],
    password = os.environ["PASSWORD"]
)

# Enter a context with an instance of the API client
with payconductor_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = payconductor_sdk.OrderApi(api_client)
    id = 'id_example' # str | 

    try:
        # Refund Order
        api_instance.order_refund(id)
    except Exception as e:
        print("Exception when calling OrderApi->order_refund: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

