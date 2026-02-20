# WWW::OpenAPIClient::CustomerApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CustomerApi;
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**customer_create**](CustomerApi.md#customer_create) | **POST** /customers/ | Create New Customer
[**customer_list_custom**](CustomerApi.md#customer_list_custom) | **GET** /customers/ | Get All Customers
[**customer_read**](CustomerApi.md#customer_read) | **GET** /customers/{id} | Get Customer By ID
[**customer_update**](CustomerApi.md#customer_update) | **PATCH** /customers/{id} | Update Customer Data


# **customer_create**
> CustomerReadResponse customer_create(customer_create_request => $customer_create_request)

Create New Customer

Create a new customer by providing the required data in the request body.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CustomerApi;
my $api_instance = WWW::OpenAPIClient::CustomerApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $customer_create_request = WWW::OpenAPIClient::Object::CustomerCreateRequest->new(); # CustomerCreateRequest | Schema for creating a new customer

eval {
    my $result = $api_instance->customer_create(customer_create_request => $customer_create_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CustomerApi->customer_create: $@\n";
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customer_list_custom**
> CustomerListResponse customer_list_custom(page => $page, page_size => $page_size, email => $email, name => $name, end_date => $end_date, start_date => $start_date)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CustomerApi;
my $api_instance = WWW::OpenAPIClient::CustomerApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $page = 1; # double | 
my $page_size = 20; # double | 
my $email = "email_example"; # string | 
my $name = "name_example"; # string | 
my $end_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $start_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 

eval {
    my $result = $api_instance->customer_list_custom(page => $page, page_size => $page_size, email => $email, name => $name, end_date => $end_date, start_date => $start_date);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CustomerApi->customer_list_custom: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **double**|  | [default to 1]
 **page_size** | **double**|  | [default to 20]
 **email** | **string**|  | [optional] 
 **name** | **string**|  | [optional] 
 **end_date** | **DATE_TIME**|  | [optional] 
 **start_date** | **DATE_TIME**|  | [optional] 

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customer_read**
> CustomerReadResponse customer_read(id => $id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CustomerApi;
my $api_instance = WWW::OpenAPIClient::CustomerApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 

eval {
    my $result = $api_instance->customer_read(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CustomerApi->customer_read: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**|  | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customer_update**
> CustomerReadResponse customer_update(id => $id, customer_update_request => $customer_update_request)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CustomerApi;
my $api_instance = WWW::OpenAPIClient::CustomerApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 
my $customer_update_request = WWW::OpenAPIClient::Object::CustomerUpdateRequest->new(); # CustomerUpdateRequest | Schema for updating customer information

eval {
    my $result = $api_instance->customer_update(id => $id, customer_update_request => $customer_update_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CustomerApi->customer_update: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**|  | 
 **customer_update_request** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md)| Schema for updating customer information | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

