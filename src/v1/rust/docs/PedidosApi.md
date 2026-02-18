# \PedidosApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_orders**](PedidosApi.md#get_orders) | **GET** /orders/ | Listar pedidos
[**get_orders_by_id**](PedidosApi.md#get_orders_by_id) | **GET** /orders/{id} | Buscar pelo ID
[**post_orders**](PedidosApi.md#post_orders) | **POST** /orders/ | Criar pedido
[**post_orders_by_id_refund**](PedidosApi.md#post_orders_by_id_refund) | **POST** /orders/{id}/refund | Reembolsar pedido



## get_orders

> get_orders(period, page, page_size, end_date, start_date, id, status)
Listar pedidos

Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**period** | **String** |  | [required] |[default to Last7Days]
**page** | **f64** |  | [required] |[default to 1]
**page_size** | **f64** |  | [required] |[default to 20]
**end_date** | Option<**String**> |  |  |
**start_date** | Option<**String**> |  |  |
**id** | Option<**String**> |  |  |
**status** | Option<**String**> |  |  |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_orders_by_id

> get_orders_by_id(id)
Buscar pelo ID

Localize os dados completos de um pedido buscando pelo nosso id

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## post_orders

> models::PostOrders200Response post_orders(post_orders_request)
Criar pedido

Crie um novo pedido para pagamento utilizando os dados fornecidos

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**post_orders_request** | [**PostOrdersRequest**](PostOrdersRequest.md) |  | [required] |

### Return type

[**models::PostOrders200Response**](postOrders_200_response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## post_orders_by_id_refund

> post_orders_by_id_refund(id)
Reembolsar pedido

Inicie um reembolso para o pedido especificado pelo ID.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**id** | **String** |  | [required] |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

