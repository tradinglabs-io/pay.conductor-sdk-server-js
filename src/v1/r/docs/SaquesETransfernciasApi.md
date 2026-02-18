# SaquesETransfernciasApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetWithdraws**](SaquesETransfernciasApi.md#GetWithdraws) | **GET** /withdraws/ | Lista os saques
[**GetWithdrawsById**](SaquesETransfernciasApi.md#GetWithdrawsById) | **GET** /withdraws/{id} | Buscar pelo ID
[**PostWithdraws**](SaquesETransfernciasApi.md#PostWithdraws) | **POST** /withdraws/ | Cria saque


# **GetWithdraws**
> GetWithdraws(period, page, page_size, end_date = var.end_date, start_date = var.start_date, id = var.id)

Lista os saques

Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)

### Example
```R
library(payconductor-sdk)

# Lista os saques
#
# prepare function argument(s)
var_period <- "Last7Days" # character | 
var_page <- 1 # numeric | 
var_page_size <- 20 # numeric | 
var_end_date <- "end_date_example" # character |  (Optional)
var_start_date <- "start_date_example" # character |  (Optional)
var_id <- "id_example" # character |  (Optional)

api_instance <- SaquesETransfernciasApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$GetWithdraws(var_period, var_page, var_page_size, end_date = var_end_date, start_date = var_start_date, id = var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **period** | Enum [Today, Yesterday, Last7Days, Last30Days, ThisMonth, LastMonth, ThisYear, Custom] |  | [default to &quot;Last7Days&quot;]
 **page** | **numeric**|  | [default to 1]
 **page_size** | **numeric**|  | [default to 20]
 **end_date** | **character**|  | [optional] 
 **start_date** | **character**|  | [optional] 
 **id** | **character**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


# **GetWithdrawsById**
> GetWithdrawsById(id)

Buscar pelo ID

Retorna os detalhes de um saque ou transferência específico usando seu ID

### Example
```R
library(payconductor-sdk)

# Buscar pelo ID
#
# prepare function argument(s)
var_id <- "id_example" # character | 

api_instance <- SaquesETransfernciasApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$GetWithdrawsById(var_id)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


# **PostWithdraws**
> PostWithdraws200Response PostWithdraws(post_withdraws_request)

Cria saque

Realiza um novo saque ou transferência para a conta de pagamento informada

### Example
```R
library(payconductor-sdk)

# Cria saque
#
# prepare function argument(s)
var_post_withdraws_request <- postWithdraws_request$new(123, postWithdraws_request_payoutAccount$new("ownerDocument_example", "ownerName_example", "pixKey_example", "Cnpj"), "externalId_example", MerchantInput$new("document_example", "email_example", "name_example")) # PostWithdrawsRequest | 

api_instance <- SaquesETransfernciasApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostWithdraws(var_post_withdraws_requestdata_file = "result.txt")
result <- api_instance$PostWithdraws(var_post_withdraws_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **post_withdraws_request** | [**PostWithdrawsRequest**](PostWithdrawsRequest.md)|  | 

### Return type

[**PostWithdraws200Response**](postWithdraws_200_response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response for status 200 |  -  |

