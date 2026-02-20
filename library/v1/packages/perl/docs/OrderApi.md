# WWW::OpenAPIClient::OrderApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::OrderApi;
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**order_confirm**](OrderApi.md#order_confirm) | **POST** /orders/{id}/confirm | Confirm Order
[**order_create**](OrderApi.md#order_create) | **POST** /orders/ | Create Order
[**order_list**](OrderApi.md#order_list) | **GET** /orders/ | List Orders
[**order_read**](OrderApi.md#order_read) | **GET** /orders/{id} | Get Order By ID
[**order_refund**](OrderApi.md#order_refund) | **POST** /orders/{id}/refund | Refund Order


# **order_confirm**
> OrderConfirmResponse order_confirm(id => $id, order_payment_request => $order_payment_request)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::OrderApi;
my $api_instance = WWW::OpenAPIClient::OrderApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 
my $order_payment_request = WWW::OpenAPIClient::Object::OrderPaymentRequest->new(); # OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

eval {
    my $result = $api_instance->order_confirm(id => $id, order_payment_request => $order_payment_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling OrderApi->order_confirm: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**|  | 
 **order_payment_request** | [**OrderPaymentRequest**](OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | 

### Return type

[**OrderConfirmResponse**](OrderConfirmResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_create**
> OrderCreateResponse order_create(order_create_request => $order_create_request)

Create Order

Create a new order for payment using the provided data

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::OrderApi;
my $api_instance = WWW::OpenAPIClient::OrderApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $order_create_request = WWW::OpenAPIClient::Object::OrderCreateRequest->new(); # OrderCreateRequest | Order data for payment processing

eval {
    my $result = $api_instance->order_create(order_create_request => $order_create_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling OrderApi->order_create: $@\n";
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_list**
> order_list(page => $page, page_size => $page_size, end_date => $end_date, start_date => $start_date, id => $id, status => $status)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::OrderApi;
my $api_instance = WWW::OpenAPIClient::OrderApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $page = 1; # double | 
my $page_size = 20; # double | 
my $end_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $start_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $id = "id_example"; # string | 
my $status = "status_example"; # string | 

eval {
    $api_instance->order_list(page => $page, page_size => $page_size, end_date => $end_date, start_date => $start_date, id => $id, status => $status);
};
if ($@) {
    warn "Exception when calling OrderApi->order_list: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **double**|  | [default to 1]
 **page_size** | **double**|  | [default to 20]
 **end_date** | **DATE_TIME**|  | [optional] 
 **start_date** | **DATE_TIME**|  | [optional] 
 **id** | **string**|  | [optional] 
 **status** | **string**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_read**
> order_read(id => $id)

Get Order By ID

Retrieve the complete data of an order by our ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::OrderApi;
my $api_instance = WWW::OpenAPIClient::OrderApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 

eval {
    $api_instance->order_read(id => $id);
};
if ($@) {
    warn "Exception when calling OrderApi->order_read: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **order_refund**
> order_refund(id => $id)

Refund Order

Initiate a refund for the order specified by ID.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::OrderApi;
my $api_instance = WWW::OpenAPIClient::OrderApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 

eval {
    $api_instance->order_refund(id => $id);
};
if ($@) {
    warn "Exception when calling OrderApi->order_refund: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

