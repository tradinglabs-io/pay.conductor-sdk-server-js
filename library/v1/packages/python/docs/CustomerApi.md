# payconductor_sdk.CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**customer_create**](CustomerApi.md#customer_create) | **POST** /customers/ | Create New Customer
[**customer_list_custom**](CustomerApi.md#customer_list_custom) | **GET** /customers/ | Get All Customers
[**customer_read**](CustomerApi.md#customer_read) | **GET** /customers/{id} | Get Customer By ID
[**customer_update**](CustomerApi.md#customer_update) | **PATCH** /customers/{id} | Update Customer Data


# **customer_create**
> CustomerReadResponse customer_create(customer_create_request)

Create New Customer

Create a new customer by providing the required data in the request body.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.customer_create_request import CustomerCreateRequest
from payconductor_sdk.models.customer_read_response import CustomerReadResponse
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
    api_instance = payconductor_sdk.CustomerApi(api_client)
    customer_create_request = payconductor_sdk.CustomerCreateRequest() # CustomerCreateRequest | Schema for creating a new customer

    try:
        # Create New Customer
        api_response = api_instance.customer_create(customer_create_request)
        print("The response of CustomerApi->customer_create:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling CustomerApi->customer_create: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **customer_create_request** | [**CustomerCreateRequest**](CustomerCreateRequest.md)| Schema for creating a new customer | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Customer response with complete information |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customer_list_custom**
> CustomerListResponse customer_list_custom(page, page_size, email=email, name=name, end_date=end_date, start_date=start_date)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.customer_list_response import CustomerListResponse
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
    api_instance = payconductor_sdk.CustomerApi(api_client)
    page = 1 # float |  (default to 1)
    page_size = 20 # float |  (default to 20)
    email = 'email_example' # str |  (optional)
    name = 'name_example' # str |  (optional)
    end_date = '2013-10-20T19:20:30+01:00' # datetime |  (optional)
    start_date = '2013-10-20T19:20:30+01:00' # datetime |  (optional)

    try:
        # Get All Customers
        api_response = api_instance.customer_list_custom(page, page_size, email=email, name=name, end_date=end_date, start_date=start_date)
        print("The response of CustomerApi->customer_list_custom:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling CustomerApi->customer_list_custom: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **float**|  | [default to 1]
 **page_size** | **float**|  | [default to 20]
 **email** | **str**|  | [optional] 
 **name** | **str**|  | [optional] 
 **end_date** | **datetime**|  | [optional] 
 **start_date** | **datetime**|  | [optional] 

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Paginated list of customers |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customer_read**
> CustomerReadResponse customer_read(id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.customer_read_response import CustomerReadResponse
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
    api_instance = payconductor_sdk.CustomerApi(api_client)
    id = 'id_example' # str | 

    try:
        # Get Customer By ID
        api_response = api_instance.customer_read(id)
        print("The response of CustomerApi->customer_read:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling CustomerApi->customer_read: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Customer response with complete information |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customer_update**
> CustomerReadResponse customer_update(id, customer_update_request)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.customer_read_response import CustomerReadResponse
from payconductor_sdk.models.customer_update_request import CustomerUpdateRequest
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
    api_instance = payconductor_sdk.CustomerApi(api_client)
    id = 'id_example' # str | 
    customer_update_request = payconductor_sdk.CustomerUpdateRequest() # CustomerUpdateRequest | Schema for updating customer information

    try:
        # Update Customer Data
        api_response = api_instance.customer_update(id, customer_update_request)
        print("The response of CustomerApi->customer_update:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling CustomerApi->customer_update: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  | 
 **customer_update_request** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md)| Schema for updating customer information | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Customer response with complete information |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

