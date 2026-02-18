

# PostWithdraws200ResponsePayoutAccount


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**id** | **String** | Identificador único da conta de pagamento |  |
|**ownerDocument** | **String** | Documento do titular da conta (CPF ou CNPJ) |  |
|**ownerName** | **String** | Nome do titular da conta |  |
|**pixKey** | **String** | Chave PIX utilizada para o saque |  |
|**pixType** | [**PixTypeEnum**](#PixTypeEnum) | Tipo da chave PIX |  |



## Enum: PixTypeEnum

| Name | Value |
|---- | -----|
| CPF | &quot;Cpf&quot; |
| CNPJ | &quot;Cnpj&quot; |
| EMAIL | &quot;Email&quot; |
| PHONE | &quot;Phone&quot; |
| RANDOM | &quot;Random&quot; |



