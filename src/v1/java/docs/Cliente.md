

# Cliente

Schema para criação de um novo cliente

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**address** | [**EndereODoCliente**](EndereODoCliente.md) |  |  [optional] |
|**documentNumber** | **String** | CPF ou CNPJ do cliente sem formatação |  |
|**documentType** | [**DocumentTypeEnum**](#DocumentTypeEnum) |  |  |
|**email** | **String** | Email do cliente |  |
|**name** | **String** | Nome completo do cliente |  |
|**phoneNumber** | **String** | Número de telefone do cliente no formato +55 DD 9XXXXXXXX |  [optional] |



## Enum: DocumentTypeEnum

| Name | Value |
|---- | -----|
| CPF | &quot;Cpf&quot; |
| CNPJ | &quot;Cnpj&quot; |



