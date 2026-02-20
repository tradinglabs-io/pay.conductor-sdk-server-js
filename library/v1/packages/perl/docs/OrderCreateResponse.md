# WWW::OpenAPIClient::Object::OrderCreateResponse

## Load the model package
```perl
use WWW::OpenAPIClient::Object::OrderCreateResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Order ID in the system | 
**external_id** | **string** | External order ID (provided by your integration) | 
**external_integration_key** | **string** | Provider used to process the order | 
**external_integration_id** | **string** | Order ID in the payment provider | 
**amount** | **double** | Total order amount | 
**cost_fee** | **double** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**bank_slip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**nu_pay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**pic_pay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**credit_card** | [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | 
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**payed_at** | **string** | Date and time when the order was paid (ISO 8601) | 
**error_code** | **string** | Error code, if any | 
**error_message** | **string** | Error message, if any | 
**order_items** | [**ARRAY[OrderCreateResponseOrderItemsInner]**](OrderCreateResponseOrderItemsInner.md) |  | 
**session** | [**OrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


