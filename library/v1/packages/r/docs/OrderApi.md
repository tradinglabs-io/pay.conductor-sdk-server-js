# OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OrderConfirm**](OrderApi.md#OrderConfirm) | **POST** /orders/{id}/confirm | Confirm Order
[**OrderCreate**](OrderApi.md#OrderCreate) | **POST** /orders/ | Create Order
[**OrderList**](OrderApi.md#OrderList) | **GET** /orders/ | List Orders
[**OrderRead**](OrderApi.md#OrderRead) | **GET** /orders/{id} | Get Order By ID
[**OrderRefund**](OrderApi.md#OrderRefund) | **POST** /orders/{id}/refund | Refund Order


# **OrderConfirm**
> OrderConfirmResponse OrderConfirm(id, order_payment_request)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Example
```R
library(payconductor_sdk)

# Confirm Order
#
# prepare function argument(s)
var_id <- "id_example" # character | 
var_order_payment_request <- Order_Payment_Request$new(PaymentMethod$new(), OrderCreditCardPaymentRequest_card$new("token_example", "cvv_example", Card_Expiration_Data$new(123, 123), "holderName_example", "number_example", "firstSixCardNumber_example"), 123, OrderNuPayPaymentRequest_nuPay$new("cancelUrl_example", "merchantName_example", "returnUrl_example", "storeName_example"), 123, "softDescriptor_example", 123, c(AvailablePaymentMethods$new())) # OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

api_instance <- OrderApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$OrderConfirm(var_id, var_order_payment_requestdata_file = "result.txt")
result <- api_instance$OrderConfirm(var_id, var_order_payment_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**|  | 
 **order_payment_request** | [**OrderPaymentRequest**](OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | 

### Return type

[**OrderConfirmResponse**](Order_Confirm_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after confirming a draft order |  -  |

# **OrderCreate**
> OrderCreateResponse OrderCreate(order_create_request)

Create Order

Create a new order for payment using the provided data

### Example
```R
library(payconductor_sdk)

# Create Order
#
# prepare function argument(s)
var_order_create_request <- Order_Create_Request$new(123, "clientIp_example", Customer_Create_Request$new("documentNumber_example", DocumentType$new(), "email_example", "name_example", Address_Create_Request$new("city_example", "country_example", "neighborhood_example", "number_example", "state_example", "street_example", "zipCode_example"), "phoneNumber_example"), 123, "externalId_example", Order_Payment_Request$new(PaymentMethod$new(), OrderCreditCardPaymentRequest_card$new("token_example", "cvv_example", Card_Expiration_Data$new(123, 123), "holderName_example", "number_example", "firstSixCardNumber_example"), 123, OrderNuPayPaymentRequest_nuPay$new("cancelUrl_example", "merchantName_example", "returnUrl_example", "storeName_example"), 123, "softDescriptor_example", 123, c(AvailablePaymentMethods$new())), 123, 123, Order_Fraud_Fingerprints$new("threatMetrixFingerprintId_example"), c(Order_Item_Data$new("id_example", "isPhysical_example", "name_example", 123, 123)), MerchantInput$new("document_example", "email_example", "name_example"), 123, Order_Create_Request_session$new(123, "checkoutUrl_example", "sessionId_example", "externalSessionId_example"), 123) # OrderCreateRequest | Order data for payment processing

api_instance <- OrderApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$OrderCreate(var_order_create_requestdata_file = "result.txt")
result <- api_instance$OrderCreate(var_order_create_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **order_create_request** | [**OrderCreateRequest**](OrderCreateRequest.md)| Order data for payment processing | 

### Return type

[**OrderCreateResponse**](Order_Create_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response after creating an order |  -  |

# **OrderList**
> OrderList(page, page_size, end_date = var.end_date, start_date = var.start_date, id = var.id, status = var.status)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example
```R
library(payconductor_sdk)

# List Orders
#
# prepare function argument(s)
var_page <- 1 # numeric | 
var_page_size <- 20 # numeric | 
var_end_date <- "end_date_example" # character |  (Optional)
var_start_date <- "start_date_example" # character |  (Optional)
var_id <- "id_example" # character |  (Optional)
var_status <- "status_example" # character |  (Optional)

api_instance <- OrderApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$OrderList(var_page, var_page_size, end_date = var_end_date, start_date = var_start_date, id = var_id, status = var_status)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **numeric**|  | [default to 1]
 **page_size** | **numeric**|  | [default to 20]
 **end_date** | **character**|  | [optional] 
 **start_date** | **character**|  | [optional] 
 **id** | **character**|  | [optional] 
 **status** | Enum [Generating, Pending, Completed, Failed, Canceled, Refunding, Refunded, InDispute, Chargeback] |  | [optional] 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


# **OrderRead**
> OrderRead(id)

Get Order By ID

Retrieve the complete data of an order by our ID

### Example
```R
library(payconductor_sdk)

# Get Order By ID
#
# prepare function argument(s)
var_id <- "id_example" # character | 

api_instance <- OrderApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$OrderRead(var_id)
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


# **OrderRefund**
> OrderRefund(id)

Refund Order

Initiate a refund for the order specified by ID.

### Example
```R
library(payconductor_sdk)

# Refund Order
#
# prepare function argument(s)
var_id <- "id_example" # character | 

api_instance <- OrderApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
api_instance$OrderRefund(var_id)
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


