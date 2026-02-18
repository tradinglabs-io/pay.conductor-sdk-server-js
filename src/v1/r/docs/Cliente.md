# payconductor-sdk::Cliente

Schema para criação de um novo cliente

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**address** | [**EndereODoCliente**](Endere_o_do_cliente.md) |  | [optional] 
**documentNumber** | **character** | CPF ou CNPJ do cliente sem formatação | [Pattern: ^\\d{11}$|^\\d{14}$] 
**documentType** | **character** |  | [Enum: [Cpf, Cnpj]] 
**email** | **character** | Email do cliente | 
**name** | **character** | Nome completo do cliente | 
**phoneNumber** | **character** | Número de telefone do cliente no formato +55 DD 9XXXXXXXX | [optional] [Pattern: ^\\+(\\d{1,2}) (\\d{2}) (\\d{8,9})$] 


