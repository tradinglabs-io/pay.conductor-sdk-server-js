# post_orders_request_payment_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **char \*** |  | 
**expiration_in_seconds** | [**pix_expiration_in_seconds_t**](pix_expiration_in_seconds.md) \* |  | [optional] 
**card** | [**cart_o_de_cr_dito_card_t**](cart_o_de_cr_dito_card.md) \* |  | 
**installments** | [**cart_o_de_cr_dito_installments_t**](cart_o_de_cr_dito_installments.md) \* |  | 
**soft_descriptor** | **char \*** | Texto que aparecerá na fatura do cartão (soft descriptor) | [optional] 
**expiration_in_days** | [**boleto_expiration_in_days_t**](boleto_expiration_in_days.md) \* |  | [optional] 
**nu_pay** | [**nu_pay_nu_pay_t**](nu_pay_nu_pay.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


