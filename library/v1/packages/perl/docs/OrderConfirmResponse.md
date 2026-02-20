# WWW::OpenAPIClient::Object::OrderConfirmResponse

## Load the model package
```perl
use WWW::OpenAPIClient::Object::OrderConfirmResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Order ID in the system | 
**external_id** | **string** | External order ID (provided by your integration) | 
**amount** | **double** | Total order amount | 
**cost_fee** | **double** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**bank_slip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**nu_pay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**pic_pay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | 
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**payed_at** | **string** | Date and time when the order was paid (ISO 8601) | 
**error_code** | **string** | Error code, if any | 
**error_message** | **string** | Error message, if any | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


