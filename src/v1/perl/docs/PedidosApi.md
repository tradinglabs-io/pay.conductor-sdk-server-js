# WWW::OpenAPIClient::PedidosApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::PedidosApi;
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_orders**](PedidosApi.md#get_orders) | **GET** /orders/ | Listar pedidos
[**get_orders_by_id**](PedidosApi.md#get_orders_by_id) | **GET** /orders/{id} | Buscar pelo ID
[**post_orders**](PedidosApi.md#post_orders) | **POST** /orders/ | Criar pedido
[**post_orders_by_id_refund**](PedidosApi.md#post_orders_by_id_refund) | **POST** /orders/{id}/refund | Reembolsar pedido


# **get_orders**
> get_orders(period => $period, page => $page, page_size => $page_size, end_date => $end_date, start_date => $start_date, id => $id, status => $status)

Listar pedidos

Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::PedidosApi;
my $api_instance = WWW::OpenAPIClient::PedidosApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $period = 'Last7Days'; # string | 
my $page = 1; # double | 
my $page_size = 20; # double | 
my $end_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $start_date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $id = "id_example"; # string | 
my $status = "status_example"; # string | 

eval {
    $api_instance->get_orders(period => $period, page => $page, page_size => $page_size, end_date => $end_date, start_date => $start_date, id => $id, status => $status);
};
if ($@) {
    warn "Exception when calling PedidosApi->get_orders: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **period** | **string**|  | [default to &#39;Last7Days&#39;]
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

# **get_orders_by_id**
> get_orders_by_id(id => $id)

Buscar pelo ID

Localize os dados completos de um pedido buscando pelo nosso id

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::PedidosApi;
my $api_instance = WWW::OpenAPIClient::PedidosApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 

eval {
    $api_instance->get_orders_by_id(id => $id);
};
if ($@) {
    warn "Exception when calling PedidosApi->get_orders_by_id: $@\n";
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

# **post_orders**
> PostOrders200Response post_orders(post_orders_request => $post_orders_request)

Criar pedido

Crie um novo pedido para pagamento utilizando os dados fornecidos

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::PedidosApi;
my $api_instance = WWW::OpenAPIClient::PedidosApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $post_orders_request = WWW::OpenAPIClient::Object::PostOrdersRequest->new(); # PostOrdersRequest | 

eval {
    my $result = $api_instance->post_orders(post_orders_request => $post_orders_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling PedidosApi->post_orders: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **post_orders_request** | [**PostOrdersRequest**](PostOrdersRequest.md)|  | 

### Return type

[**PostOrders200Response**](PostOrders200Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_orders_by_id_refund**
> post_orders_by_id_refund(id => $id)

Reembolsar pedido

Inicie um reembolso para o pedido especificado pelo ID.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::PedidosApi;
my $api_instance = WWW::OpenAPIClient::PedidosApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $id = "id_example"; # string | 

eval {
    $api_instance->post_orders_by_id_refund(id => $id);
};
if ($@) {
    warn "Exception when calling PedidosApi->post_orders_by_id_refund: $@\n";
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

