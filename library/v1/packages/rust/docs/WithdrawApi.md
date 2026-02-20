# \WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**withdraw_create**](WithdrawApi.md#withdraw_create) | **POST** /withdraws/ | Create Withdrawal
[**withdraw_list**](WithdrawApi.md#withdraw_list) | **GET** /withdraws/ | List Withdrawals
[**withdraw_read**](WithdrawApi.md#withdraw_read) | **GET** /withdraws/{id} | Get Withdrawal By ID



## withdraw_create

> models::WithdrawCreateResponse withdraw_create(withdraw_create_request)
Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**withdraw_create_request** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md) | Withdrawal or transfer request data | [required] |

### Return type

[**models::WithdrawCreateResponse**](Withdraw_Create_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## withdraw_list

> withdraw_list(page, page_size, end_date, start_date, id)
List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**page** | **f64** |  | [required] |[default to 1]
**page_size** | **f64** |  | [required] |[default to 20]
**end_date** | Option<**String**> |  |  |
**start_date** | Option<**String**> |  |  |
**id** | Option<**String**> |  |  |

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## withdraw_read

> withdraw_read(id)
Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

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

