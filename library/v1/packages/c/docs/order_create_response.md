# order_create_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Order ID in the system | 
**external_id** | **char \*** | External order ID (provided by your integration) | 
**external_integration_key** | **char \*** | Provider used to process the order | 
**external_integration_id** | **char \*** | Order ID in the payment provider | 
**amount** | **double** | Total order amount | 
**cost_fee** | **double** | Cost fee applied to the order | 
**pix** | [**order_pix_info_t**](order_pix_info.md) \* |  | [optional] 
**bank_slip** | [**order_bank_slip_info_t**](order_bank_slip_info.md) \* |  | [optional] 
**nu_pay** | [**order_nu_pay_info_t**](order_nu_pay_info.md) \* |  | [optional] 
**pic_pay** | [**order_pic_pay_info_t**](order_pic_pay_info.md) \* |  | [optional] 
**credit_card** | [**order_credit_card_info_t**](order_credit_card_info.md) \* |  | [optional] 
**status** | **status_t \*** |  | 
**payment_method** | **payment_method_t \*** |  | 
**payed_at** | **char \*** | Date and time when the order was paid (ISO 8601) | 
**error_code** | **char \*** | Error code, if any | 
**error_message** | **char \*** | Error message, if any | 
**order_items** | [**list_t**](order_create_response_order_items_inner.md) \* |  | 
**session** | [**order_create_response_session_t**](order_create_response_session.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


