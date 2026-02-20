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
*CardTokenizationApi* | [**cardTokenize**](docs/CardTokenizationApi.md#cardtokenize) | **POST** /card-tokenization/ | Tokenize Card
*CustomerApi* | [**customerCreate**](docs/CustomerApi.md#customercreate) | **POST** /customers/ | Create New Customer
*CustomerApi* | [**customerListCustom**](docs/CustomerApi.md#customerlistcustom) | **GET** /customers/ | Get All Customers
*CustomerApi* | [**customerRead**](docs/CustomerApi.md#customerread) | **GET** /customers/{id} | Get Customer By ID
*CustomerApi* | [**customerUpdate**](docs/CustomerApi.md#customerupdate) | **PATCH** /customers/{id} | Update Customer Data
*OrderApi* | [**orderConfirm**](docs/OrderApi.md#orderconfirm) | **POST** /orders/{id}/confirm | Confirm Order
*OrderApi* | [**orderCreate**](docs/OrderApi.md#ordercreate) | **POST** /orders/ | Create Order
*OrderApi* | [**orderList**](docs/OrderApi.md#orderlist) | **GET** /orders/ | List Orders
*OrderApi* | [**orderRead**](docs/OrderApi.md#orderread) | **GET** /orders/{id} | Get Order By ID
*OrderApi* | [**orderRefund**](docs/OrderApi.md#orderrefund) | **POST** /orders/{id}/refund | Refund Order
*WithdrawApi* | [**withdrawCreate**](docs/WithdrawApi.md#withdrawcreate) | **POST** /withdraws/ | Create Withdrawal
*WithdrawApi* | [**withdrawList**](docs/WithdrawApi.md#withdrawlist) | **GET** /withdraws/ | List Withdrawals
*WithdrawApi* | [**withdrawRead**](docs/WithdrawApi.md#withdrawread) | **GET** /withdraws/{id} | Get Withdrawal By ID


### Documentation For Models

 - [AddressCreateRequest](docs/AddressCreateRequest.md)
 - [AvailablePaymentMethods](docs/AvailablePaymentMethods.md)
 - [CardCreateRequest](docs/CardCreateRequest.md)
 - [CardExpirationData](docs/CardExpirationData.md)
 - [CardTokenizationCreateRequest](docs/CardTokenizationCreateRequest.md)
 - [CardTokenizationCreateRequestCustomer](docs/CardTokenizationCreateRequestCustomer.md)
 - [CardTokenizationCreateResponse](docs/CardTokenizationCreateResponse.md)
 - [CardTokenizationCustomerByIdData](docs/CardTokenizationCustomerByIdData.md)
 - [CustomerAddressResponse](docs/CustomerAddressResponse.md)
 - [CustomerCreateRequest](docs/CustomerCreateRequest.md)
 - [CustomerListPagination](docs/CustomerListPagination.md)
 - [CustomerListResponse](docs/CustomerListResponse.md)
 - [CustomerReadResponse](docs/CustomerReadResponse.md)
 - [CustomerUpdateRequest](docs/CustomerUpdateRequest.md)
 - [DocumentType](docs/DocumentType.md)
 - [Event](docs/Event.md)
 - [MerchantInput](docs/MerchantInput.md)
 - [OrderBankSlipInfo](docs/OrderBankSlipInfo.md)
 - [OrderBankSlipPaymentRequest](docs/OrderBankSlipPaymentRequest.md)
 - [OrderConfirmResponse](docs/OrderConfirmResponse.md)
 - [OrderCreateRequest](docs/OrderCreateRequest.md)
 - [OrderCreateRequestSession](docs/OrderCreateRequestSession.md)
 - [OrderCreateResponse](docs/OrderCreateResponse.md)
 - [OrderCreateResponseOrderItemsInner](docs/OrderCreateResponseOrderItemsInner.md)
 - [OrderCreateResponseSession](docs/OrderCreateResponseSession.md)
 - [OrderCreditCardInfo](docs/OrderCreditCardInfo.md)
 - [OrderCreditCardPaymentRequest](docs/OrderCreditCardPaymentRequest.md)
 - [OrderCreditCardPaymentRequestCard](docs/OrderCreditCardPaymentRequestCard.md)
 - [OrderDraftPaymentRequest](docs/OrderDraftPaymentRequest.md)
 - [OrderFraudFingerprints](docs/OrderFraudFingerprints.md)
 - [OrderItemData](docs/OrderItemData.md)
 - [OrderNuPayInfo](docs/OrderNuPayInfo.md)
 - [OrderNuPayPaymentRequest](docs/OrderNuPayPaymentRequest.md)
 - [OrderNuPayPaymentRequestNuPay](docs/OrderNuPayPaymentRequestNuPay.md)
 - [OrderPIXInfo](docs/OrderPIXInfo.md)
 - [OrderPIXPaymentRequest](docs/OrderPIXPaymentRequest.md)
 - [OrderPaymentRequest](docs/OrderPaymentRequest.md)
 - [OrderPicPayInfo](docs/OrderPicPayInfo.md)
 - [OrderPicPayPaymentRequest](docs/OrderPicPayPaymentRequest.md)
 - [OrderTokenizedCardData](docs/OrderTokenizedCardData.md)
 - [PaymentMethod](docs/PaymentMethod.md)
 - [PixType](docs/PixType.md)
 - [Status](docs/Status.md)
 - [WithdrawCreateRequest](docs/WithdrawCreateRequest.md)
 - [WithdrawCreateResponse](docs/WithdrawCreateResponse.md)
 - [WithdrawCreateResponsePayedAt](docs/WithdrawCreateResponsePayedAt.md)
 - [WithdrawCreateResponsePayoutAccount](docs/WithdrawCreateResponsePayoutAccount.md)
 - [WithdrawPayoutAccountData](docs/WithdrawPayoutAccountData.md)


<a id="documentation-for-authorization"></a>
## Documentation For Authorization


Authentication schemes defined for the API:
<a id="basicAuth"></a>
### basicAuth

- **Type**: HTTP basic authentication

