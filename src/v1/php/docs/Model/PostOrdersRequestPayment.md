# # PostOrdersRequestPayment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **string** |  |
**expiration_in_seconds** | [**\OpenAPI\Client\Model\PixExpirationInSeconds**](PixExpirationInSeconds.md) |  | [optional]
**card** | [**\OpenAPI\Client\Model\CartODeCrDitoCard**](CartODeCrDitoCard.md) |  |
**installments** | [**\OpenAPI\Client\Model\CartODeCrDitoInstallments**](CartODeCrDitoInstallments.md) |  |
**soft_descriptor** | **string** | Texto que aparecerá na fatura do cartão (soft descriptor) | [optional]
**expiration_in_days** | [**\OpenAPI\Client\Model\BoletoExpirationInDays**](BoletoExpirationInDays.md) |  | [optional]
**nu_pay** | [**\OpenAPI\Client\Model\NuPayNuPay**](NuPayNuPay.md) |  |

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
