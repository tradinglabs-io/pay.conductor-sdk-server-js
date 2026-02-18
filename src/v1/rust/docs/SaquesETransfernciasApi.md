# \SaquesETransfernciasApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_withdraws**](SaquesETransfernciasApi.md#get_withdraws) | **GET** /withdraws/ | Lista os saques
[**get_withdraws_by_id**](SaquesETransfernciasApi.md#get_withdraws_by_id) | **GET** /withdraws/{id} | Buscar pelo ID
[**post_withdraws**](SaquesETransfernciasApi.md#post_withdraws) | **POST** /withdraws/ | Cria saque



## get_withdraws

> get_withdraws(period, page, page_size, end_date, start_date, id)
Lista os saques

Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**period** | **String** |  | [required] |[default to Last7Days]
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


## get_withdraws_by_id

> get_withdraws_by_id(id)
Buscar pelo ID

Retorna os detalhes de um saque ou transferência específico usando seu ID

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


## post_withdraws

> models::PostWithdraws200Response post_withdraws(post_withdraws_request)
Cria saque

Realiza um novo saque ou transferência para a conta de pagamento informada

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**post_withdraws_request** | [**PostWithdrawsRequest**](PostWithdrawsRequest.md) |  | [required] |

### Return type

[**models::PostWithdraws200Response**](postWithdraws_200_response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

