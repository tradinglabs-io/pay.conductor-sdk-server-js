# payconductor-sdk::MerchantInput

Dados do merchant para pedido ou saque

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**document** | **character** | CPF ou CNPJ do merchant sem formatação | [Pattern: ^\\d{11}$|^\\d{14}$] 
**email** | **character** | Email do merchant | 
**name** | **character** | Nome do merchant | [Max. length: 255] [Min. length: 2] 


