## payconductor-sdk@1.0.0

This generator creates TypeScript/JavaScript client that utilizes [axios](https://github.com/axios/axios). The generated Node module can be used in the following environments:

Environment
* Node.js
* Webpack
* Browserify

Language level
* ES5 - you must have a Promises/A+ library installed
* ES6

Module system
* CommonJS
* ES6 module system

It can be used in both TypeScript and JavaScript. In TypeScript, the definition will be automatically resolved via `package.json`. ([Reference](https://www.typescriptlang.org/docs/handbook/declaration-files/consumption.html))

### Building

To build and compile the typescript sources to javascript use:
```
npm install
npm run build
```

### Publishing

First build the package then run `npm publish`

### Consuming

navigate to the folder of your consuming project and run one of the following commands.

_published:_

```
npm install payconductor-sdk@1.0.0 --save
```

_unPublished (not recommended):_

```
npm install PATH_TO_GENERATED_PACKAGE --save
```

### Documentation for API Endpoints

All URIs are relative to *https://app.payconductor.ai/api/v1*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*PedidosApi* | [**getOrders**](docs/PedidosApi.md#getorders) | **GET** /orders/ | Listar pedidos
*PedidosApi* | [**getOrdersById**](docs/PedidosApi.md#getordersbyid) | **GET** /orders/{id} | Buscar pelo ID
*PedidosApi* | [**postOrders**](docs/PedidosApi.md#postorders) | **POST** /orders/ | Criar pedido
*PedidosApi* | [**postOrdersByIdRefund**](docs/PedidosApi.md#postordersbyidrefund) | **POST** /orders/{id}/refund | Reembolsar pedido
*SaquesETransfernciasApi* | [**getWithdraws**](docs/SaquesETransfernciasApi.md#getwithdraws) | **GET** /withdraws/ | Lista os saques
*SaquesETransfernciasApi* | [**getWithdrawsById**](docs/SaquesETransfernciasApi.md#getwithdrawsbyid) | **GET** /withdraws/{id} | Buscar pelo ID
*SaquesETransfernciasApi* | [**postWithdraws**](docs/SaquesETransfernciasApi.md#postwithdraws) | **POST** /withdraws/ | Cria saque


### Documentation For Models

 - [Boleto](docs/Boleto.md)
 - [BoletoExpirationInDays](docs/BoletoExpirationInDays.md)
 - [CartODeCrDito](docs/CartODeCrDito.md)
 - [CartODeCrDitoCard](docs/CartODeCrDitoCard.md)
 - [CartODeCrDitoInstallments](docs/CartODeCrDitoInstallments.md)
 - [CartOTokenizado](docs/CartOTokenizado.md)
 - [Cliente](docs/Cliente.md)
 - [DadosCompletosDoCartO](docs/DadosCompletosDoCartO.md)
 - [DadosCompletosDoCartOExpiration](docs/DadosCompletosDoCartOExpiration.md)
 - [EndereODoCliente](docs/EndereODoCliente.md)
 - [MerchantInput](docs/MerchantInput.md)
 - [NuPay](docs/NuPay.md)
 - [NuPayNuPay](docs/NuPayNuPay.md)
 - [PicPay](docs/PicPay.md)
 - [Pix](docs/Pix.md)
 - [PixExpirationInSeconds](docs/PixExpirationInSeconds.md)
 - [PostOrders200Response](docs/PostOrders200Response.md)
 - [PostOrders200ResponseBankSlip](docs/PostOrders200ResponseBankSlip.md)
 - [PostOrders200ResponseCreditCard](docs/PostOrders200ResponseCreditCard.md)
 - [PostOrders200ResponseNuPay](docs/PostOrders200ResponseNuPay.md)
 - [PostOrders200ResponseOrderItemsInner](docs/PostOrders200ResponseOrderItemsInner.md)
 - [PostOrders200ResponsePicPay](docs/PostOrders200ResponsePicPay.md)
 - [PostOrders200ResponsePix](docs/PostOrders200ResponsePix.md)
 - [PostOrders200ResponseSession](docs/PostOrders200ResponseSession.md)
 - [PostOrdersRequest](docs/PostOrdersRequest.md)
 - [PostOrdersRequestFingerprints](docs/PostOrdersRequestFingerprints.md)
 - [PostOrdersRequestItemsInner](docs/PostOrdersRequestItemsInner.md)
 - [PostOrdersRequestPayment](docs/PostOrdersRequestPayment.md)
 - [PostOrdersRequestSession](docs/PostOrdersRequestSession.md)
 - [PostWithdraws200Response](docs/PostWithdraws200Response.md)
 - [PostWithdraws200ResponsePayedAt](docs/PostWithdraws200ResponsePayedAt.md)
 - [PostWithdraws200ResponsePayoutAccount](docs/PostWithdraws200ResponsePayoutAccount.md)
 - [PostWithdrawsRequest](docs/PostWithdrawsRequest.md)
 - [PostWithdrawsRequestPayoutAccount](docs/PostWithdrawsRequestPayoutAccount.md)


<a id="documentation-for-authorization"></a>
## Documentation For Authorization


Authentication schemes defined for the API:
<a id="basicAuth"></a>
### basicAuth

- **Type**: HTTP basic authentication

