# payconductor-sdk::PostWithdraws200ResponsePayoutAccount


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | Identificador único da conta de pagamento | 
**ownerDocument** | **character** | Documento do titular da conta (CPF ou CNPJ) | [Pattern: ^\\d{11}$|^\\d{14}$] 
**ownerName** | **character** | Nome do titular da conta | 
**pixKey** | **character** | Chave PIX utilizada para o saque | 
**pixType** | **character** | Tipo da chave PIX | [default to &quot;Cpf&quot;] [Enum: [Cpf, Cnpj, Email, Phone, Random]] 


