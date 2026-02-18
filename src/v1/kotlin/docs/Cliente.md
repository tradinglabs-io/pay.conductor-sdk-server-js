
# Cliente

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **documentNumber** | **kotlin.String** | CPF ou CNPJ do cliente sem formatação |  |
| **documentType** | [**inline**](#DocumentType) |  |  |
| **email** | **kotlin.String** | Email do cliente |  |
| **name** | **kotlin.String** | Nome completo do cliente |  |
| **address** | [**EndereODoCliente**](EndereODoCliente.md) |  |  [optional] |
| **phoneNumber** | **kotlin.String** | Número de telefone do cliente no formato +55 DD 9XXXXXXXX |  [optional] |


<a id="DocumentType"></a>
## Enum: documentType
| Name | Value |
| ---- | ----- |
| documentType | Cpf, Cnpj |



