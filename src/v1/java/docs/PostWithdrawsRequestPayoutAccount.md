

# PostWithdrawsRequestPayoutAccount


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**ownerDocument** | **String** | Documento do titular da conta (CPF ou CNPJ) |  |
|**ownerName** | **String** | Nome do titular da conta |  |
|**pixKey** | **String** | PIX key for withdrawal |  |
|**pixType** | [**PixTypeEnum**](#PixTypeEnum) | PIX key type |  |



## Enum: PixTypeEnum

| Name | Value |
|---- | -----|
| CNPJ | &quot;Cnpj&quot; |
| CPF | &quot;Cpf&quot; |
| EMAIL | &quot;Email&quot; |
| PHONE | &quot;Phone&quot; |
| RANDOM | &quot;Random&quot; |



