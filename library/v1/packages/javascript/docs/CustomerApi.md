# PayconductorSdk.CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**customerCreate**](CustomerApi.md#customerCreate) | **POST** /customers/ | Create New Customer
[**customerListCustom**](CustomerApi.md#customerListCustom) | **GET** /customers/ | Get All Customers
[**customerRead**](CustomerApi.md#customerRead) | **GET** /customers/{id} | Get Customer By ID
[**customerUpdate**](CustomerApi.md#customerUpdate) | **PATCH** /customers/{id} | Update Customer Data



## customerCreate

> CustomerReadResponse customerCreate(customerCreateRequest)

Create New Customer

Create a new customer by providing the required data in the request body.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.CustomerApi();
let customerCreateRequest = new PayconductorSdk.CustomerCreateRequest(); // CustomerCreateRequest | Schema for creating a new customer
apiInstance.customerCreate(customerCreateRequest, (error, data, response) => {
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
 **customerCreateRequest** | [**CustomerCreateRequest**](CustomerCreateRequest.md)| Schema for creating a new customer | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## customerListCustom

> CustomerListResponse customerListCustom(page, pageSize, opts)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.CustomerApi();
let page = 1; // Number | 
let pageSize = 20; // Number | 
let opts = {
  'email': "email_example", // String | 
  'name': "name_example", // String | 
  'endDate': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'startDate': new Date("2013-10-20T19:20:30+01:00") // Date | 
};
apiInstance.customerListCustom(page, pageSize, opts, (error, data, response) => {
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
 **page** | **Number**|  | [default to 1]
 **pageSize** | **Number**|  | [default to 20]
 **email** | **String**|  | [optional] 
 **name** | **String**|  | [optional] 
 **endDate** | **Date**|  | [optional] 
 **startDate** | **Date**|  | [optional] 

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## customerRead

> CustomerReadResponse customerRead(id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.CustomerApi();
let id = "id_example"; // String | 
apiInstance.customerRead(id, (error, data, response) => {
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
 **id** | **String**|  | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## customerUpdate

> CustomerReadResponse customerUpdate(id, customerUpdateRequest)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.CustomerApi();
let id = "id_example"; // String | 
let customerUpdateRequest = new PayconductorSdk.CustomerUpdateRequest(); // CustomerUpdateRequest | Schema for updating customer information
apiInstance.customerUpdate(id, customerUpdateRequest, (error, data, response) => {
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
 **id** | **String**|  | 
 **customerUpdateRequest** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md)| Schema for updating customer information | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

