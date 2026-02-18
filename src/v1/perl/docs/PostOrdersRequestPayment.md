# WWW::OpenAPIClient::Object::PostOrdersRequestPayment

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PostOrdersRequestPayment;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **string** |  | 
**expiration_in_seconds** | [**PixExpirationInSeconds**](PixExpirationInSeconds.md) |  | [optional] 
**card** | [**CartODeCrDitoCard**](CartODeCrDitoCard.md) |  | 
**installments** | [**CartODeCrDitoInstallments**](CartODeCrDitoInstallments.md) |  | 
**soft_descriptor** | **string** | Texto que aparecerá na fatura do cartão (soft descriptor) | [optional] 
**expiration_in_days** | [**BoletoExpirationInDays**](BoletoExpirationInDays.md) |  | [optional] 
**nu_pay** | [**NuPayNuPay**](NuPayNuPay.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


