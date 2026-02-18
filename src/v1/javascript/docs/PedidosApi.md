# PayconductorSdk.PedidosApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOrders**](PedidosApi.md#getOrders) | **GET** /orders/ | Listar pedidos
[**getOrdersById**](PedidosApi.md#getOrdersById) | **GET** /orders/{id} | Buscar pelo ID
[**postOrders**](PedidosApi.md#postOrders) | **POST** /orders/ | Criar pedido
[**postOrdersByIdRefund**](PedidosApi.md#postOrdersByIdRefund) | **POST** /orders/{id}/refund | Reembolsar pedido



## getOrders

> getOrders(period, page, pageSize, opts)

Listar pedidos

Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.PedidosApi();
let period = "'Last7Days'"; // String | 
let page = 1; // Number | 
let pageSize = 20; // Number | 
let opts = {
  'endDate': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'startDate': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'id': "id_example", // String | 
  'status': "status_example" // String | 
};
apiInstance.getOrders(period, page, pageSize, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **period** | **String**|  | [default to &#39;Last7Days&#39;]
 **page** | **Number**|  | [default to 1]
 **pageSize** | **Number**|  | [default to 20]
 **endDate** | **Date**|  | [optional] 
 **startDate** | **Date**|  | [optional] 
 **id** | **String**|  | [optional] 
 **status** | **String**|  | [optional] 

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## getOrdersById

> getOrdersById(id)

Buscar pelo ID

Localize os dados completos de um pedido buscando pelo nosso id

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.PedidosApi();
let id = "id_example"; // String | 
apiInstance.getOrdersById(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## postOrders

> PostOrders200Response postOrders(postOrdersRequest)

Criar pedido

Crie um novo pedido para pagamento utilizando os dados fornecidos

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.PedidosApi();
let postOrdersRequest = new PayconductorSdk.PostOrdersRequest(); // PostOrdersRequest | 
apiInstance.postOrders(postOrdersRequest, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **postOrdersRequest** | [**PostOrdersRequest**](PostOrdersRequest.md)|  | 

### Return type

[**PostOrders200Response**](PostOrders200Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## postOrdersByIdRefund

> postOrdersByIdRefund(id)

Reembolsar pedido

Inicie um reembolso para o pedido especificado pelo ID.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.PedidosApi();
let id = "id_example"; // String | 
apiInstance.postOrdersByIdRefund(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

