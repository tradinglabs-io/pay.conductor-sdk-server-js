

# PostOrdersRequestPayment

Dados de pagamento para o pedido (Pix, Cartão de Crédito, Boleto, NuPay, etc...)

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**paymentMethod** | **String** |  |  |
|**expirationInSeconds** | [**PixExpirationInSeconds**](PixExpirationInSeconds.md) |  |  [optional] |
|**card** | [**CartODeCrDitoCard**](CartODeCrDitoCard.md) |  |  |
|**installments** | [**CartODeCrDitoInstallments**](CartODeCrDitoInstallments.md) |  |  |
|**softDescriptor** | **String** | Texto que aparecerá na fatura do cartão (soft descriptor) |  [optional] |
|**expirationInDays** | [**BoletoExpirationInDays**](BoletoExpirationInDays.md) |  |  [optional] |
|**nuPay** | [**NuPayNuPay**](NuPayNuPay.md) |  |  |



