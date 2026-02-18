# PostOrdersRequestPayment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **String** |  | 
**expiration_in_seconds** | Option<[**models::PixExpirationInSeconds**](PixExpirationInSeconds.md)> |  | [optional]
**card** | [**models::CartODeCrDitoCard**](CartODeCrDitoCard.md) |  | 
**installments** | [**models::CartODeCrDitoInstallments**](CartODeCrDitoInstallments.md) |  | 
**soft_descriptor** | Option<**String**> | Texto que aparecerá na fatura do cartão (soft descriptor) | [optional]
**expiration_in_days** | Option<[**models::BoletoExpirationInDays**](BoletoExpirationInDays.md)> |  | [optional]
**nu_pay** | [**models::NuPayNuPay**](NuPayNuPay.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


