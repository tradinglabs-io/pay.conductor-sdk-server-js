# payconductor_sdk.Api.WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**WithdrawCreate**](WithdrawApi.md#withdrawcreate) | **POST** /withdraws/ | Create Withdrawal |
| [**WithdrawList**](WithdrawApi.md#withdrawlist) | **GET** /withdraws/ | List Withdrawals |
| [**WithdrawRead**](WithdrawApi.md#withdrawread) | **GET** /withdraws/{id} | Get Withdrawal By ID |

<a id="withdrawcreate"></a>
# **WithdrawCreate**
> WithdrawCreateResponse WithdrawCreate (WithdrawCreateRequest withdrawCreateRequest)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **withdrawCreateRequest** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md) | Withdrawal or transfer request data |  |

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after creating a withdrawal or transfer |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="withdrawlist"></a>
# **WithdrawList**
> void WithdrawList (decimal page, decimal pageSize, DateTime endDate = null, DateTime startDate = null, string id = null)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **page** | **decimal** |  | [default to 1M] |
| **pageSize** | **decimal** |  | [default to 20M] |
| **endDate** | **DateTime** |  | [optional]  |
| **startDate** | **DateTime** |  | [optional]  |
| **id** | **string** |  | [optional]  |

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="withdrawread"></a>
# **WithdrawRead**
> void WithdrawRead (string id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **string** |  |  |

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

