# PedidosAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PedidosAPI_getOrders**](PedidosAPI.md#PedidosAPI_getOrders) | **GET** /orders/ | Listar pedidos
[**PedidosAPI_getOrdersById**](PedidosAPI.md#PedidosAPI_getOrdersById) | **GET** /orders/{id} | Buscar pelo ID
[**PedidosAPI_postOrders**](PedidosAPI.md#PedidosAPI_postOrders) | **POST** /orders/ | Criar pedido
[**PedidosAPI_postOrdersByIdRefund**](PedidosAPI.md#PedidosAPI_postOrdersByIdRefund) | **POST** /orders/{id}/refund | Reembolsar pedido


# **PedidosAPI_getOrders**
```c
// Listar pedidos
//
// Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário.
//
void PedidosAPI_getOrders(apiClient_t *apiClient, payconductor_api_getOrders_period_e period, double page, double pageSize, char endDate, char startDate, char *id, payconductor_api_getOrders_status_e status);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**period** | **payconductor_api_getOrders_period_e** |  | [default to &#39;Last7Days&#39;]
**page** | **double** |  | [default to 1]
**pageSize** | **double** |  | [default to 20]
**endDate** | **char** |  | [optional] 
**startDate** | **char** |  | [optional] 
**id** | **char \*** |  | [optional] 
**status** | **payconductor_api_getOrders_status_e** |  | [optional] 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PedidosAPI_getOrdersById**
```c
// Buscar pelo ID
//
// Localize os dados completos de um pedido buscando pelo nosso id
//
void PedidosAPI_getOrdersById(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PedidosAPI_postOrders**
```c
// Criar pedido
//
// Crie um novo pedido para pagamento utilizando os dados fornecidos
//
post_orders_200_response_t* PedidosAPI_postOrders(apiClient_t *apiClient, post_orders_request_t *post_orders_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**post_orders_request** | **[post_orders_request_t](post_orders_request.md) \*** |  | 

### Return type

[post_orders_200_response_t](post_orders_200_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PedidosAPI_postOrdersByIdRefund**
```c
// Reembolsar pedido
//
// Inicie um reembolso para o pedido especificado pelo ID.
//
void PedidosAPI_postOrdersByIdRefund(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

