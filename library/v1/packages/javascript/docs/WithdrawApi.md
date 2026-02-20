# PayconductorSdk.WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**withdrawCreate**](WithdrawApi.md#withdrawCreate) | **POST** /withdraws/ | Create Withdrawal
[**withdrawList**](WithdrawApi.md#withdrawList) | **GET** /withdraws/ | List Withdrawals
[**withdrawRead**](WithdrawApi.md#withdrawRead) | **GET** /withdraws/{id} | Get Withdrawal By ID



## withdrawCreate

> WithdrawCreateResponse withdrawCreate(withdrawCreateRequest)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.WithdrawApi();
let withdrawCreateRequest = new PayconductorSdk.WithdrawCreateRequest(); // WithdrawCreateRequest | Withdrawal or transfer request data
apiInstance.withdrawCreate(withdrawCreateRequest, (error, data, response) => {
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
 **withdrawCreateRequest** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md)| Withdrawal or transfer request data | 

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## withdrawList

> withdrawList(page, pageSize, opts)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.WithdrawApi();
let page = 1; // Number | 
let pageSize = 20; // Number | 
let opts = {
  'endDate': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'startDate': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'id': "id_example" // String | 
};
apiInstance.withdrawList(page, pageSize, opts, (error, data, response) => {
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
 **page** | **Number**|  | [default to 1]
 **pageSize** | **Number**|  | [default to 20]
 **endDate** | **Date**|  | [optional] 
 **startDate** | **Date**|  | [optional] 
 **id** | **String**|  | [optional] 

### Return type

null (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## withdrawRead

> withdrawRead(id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.WithdrawApi();
let id = "id_example"; // String | 
apiInstance.withdrawRead(id, (error, data, response) => {
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

