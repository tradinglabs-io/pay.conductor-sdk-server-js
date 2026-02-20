# WWW::OpenAPIClient::WithdrawApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::WithdrawApi;
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**withdraw_create**](WithdrawApi.md#withdraw_create) | **POST** /withdraws/ | Create Withdrawal
[**withdraw_list**](WithdrawApi.md#withdraw_list) | **GET** /withdraws/ | List Withdrawals
[**withdraw_read**](WithdrawApi.md#withdraw_read) | **GET** /withdraws/{id} | Get Withdrawal By ID


# **withdraw_create**
> WithdrawCreateResponse withdraw_create(withdraw_create_request => $withdraw_create_request)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::WithdrawApi;
my $api_instance = WWW::OpenAPIClient::WithdrawApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $withdraw_create_request = WWW::OpenAPIClient::Object::WithdrawCreateRequest->new(); # WithdrawCreateRequest | Withdrawal or transfer request data

eval {
    my $result = $api_instance->withdraw_create(withdraw_create_request => $withdraw_create_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling WithdrawApi->withdraw_create: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdraw_create_request** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md)| Withdrawal or transfer request data | 

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **withdraw_list**
> withdraw_list(page => $page, page_size => $page_size, end_date => $end_date, start_date => $start_date, id => $id)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::WithdrawApi;
my $api_instance = WWW::OpenAPIClient::WithdrawApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $page = 1; # double | 
my $page_size = 20; # double | 
my $end_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $start_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $id = "id_example"; # string | 

eval {
    $api_instance->withdraw_list(page => $page, page_size => $page_size, end_date => $end_date, start_date => $start_date, id => $id);
};
if ($@) {
    warn "Exception when calling WithdrawApi->withdraw_list: $@\n";
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

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **withdraw_read**
> withdraw_read(id => $id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::WithdrawApi;
my $api_instance = WWW::OpenAPIClient::WithdrawApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 

eval {
    $api_instance->withdraw_read(id => $id);
};
if ($@) {
    warn "Exception when calling WithdrawApi->withdraw_read: $@\n";
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

