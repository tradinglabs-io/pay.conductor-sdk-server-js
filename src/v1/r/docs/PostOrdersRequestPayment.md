# payconductor-sdk::PostOrdersRequestPayment

Dados de pagamento para o pedido (Pix, Cartão de Crédito, Boleto, NuPay, etc...)

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | **character** |  | 
**expirationInSeconds** | [**PixExpirationInSeconds**](Pix_expirationInSeconds.md) |  | [optional] 
**card** | [**CartODeCrDitoCard**](Cart_o_de_cr_dito_card.md) |  | 
**installments** | [**CartODeCrDitoInstallments**](Cart_o_de_cr_dito_installments.md) |  | 
**softDescriptor** | **character** | Texto que aparecerá na fatura do cartão (soft descriptor) | [optional] [Max. length: 22] [Min. length: 1] 
**expirationInDays** | [**BoletoExpirationInDays**](Boleto_expirationInDays.md) |  | [optional] 
**nuPay** | [**NuPayNuPay**](NuPay_nuPay.md) |  | 


