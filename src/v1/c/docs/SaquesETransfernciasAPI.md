# SaquesETransfernciasAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SaquesETransfernciasAPI_getWithdraws**](SaquesETransfernciasAPI.md#SaquesETransfernciasAPI_getWithdraws) | **GET** /withdraws/ | Lista os saques
[**SaquesETransfernciasAPI_getWithdrawsById**](SaquesETransfernciasAPI.md#SaquesETransfernciasAPI_getWithdrawsById) | **GET** /withdraws/{id} | Buscar pelo ID
[**SaquesETransfernciasAPI_postWithdraws**](SaquesETransfernciasAPI.md#SaquesETransfernciasAPI_postWithdraws) | **POST** /withdraws/ | Cria saque


# **SaquesETransfernciasAPI_getWithdraws**
```c
// Lista os saques
//
// Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)
//
void SaquesETransfernciasAPI_getWithdraws(apiClient_t *apiClient, payconductor_api_getWithdraws_period_e period, double page, double pageSize, char endDate, char startDate, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**period** | **payconductor_api_getWithdraws_period_e** |  | [default to &#39;Last7Days&#39;]
**page** | **double** |  | [default to 1]
**pageSize** | **double** |  | [default to 20]
**endDate** | **char** |  | [optional] 
**startDate** | **char** |  | [optional] 
**id** | **char \*** |  | [optional] 

### Return type

void

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SaquesETransfernciasAPI_getWithdrawsById**
```c
// Buscar pelo ID
//
// Retorna os detalhes de um saque ou transferência específico usando seu ID
//
void SaquesETransfernciasAPI_getWithdrawsById(apiClient_t *apiClient, char *id);
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

# **SaquesETransfernciasAPI_postWithdraws**
```c
// Cria saque
//
// Realiza um novo saque ou transferência para a conta de pagamento informada
//
post_withdraws_200_response_t* SaquesETransfernciasAPI_postWithdraws(apiClient_t *apiClient, post_withdraws_request_t *post_withdraws_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**post_withdraws_request** | **[post_withdraws_request_t](post_withdraws_request.md) \*** |  | 

### Return type

[post_withdraws_200_response_t](post_withdraws_200_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

