# CardTokenizationCreateRequestCustomer


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**address** | [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] 
**document_number** | **str** | Customer CPF or CNPJ without formatting | 
**document_type** | [**DocumentType**](DocumentType.md) |  | 
**email** | **str** | Customer email | 
**name** | **str** | Customer full name | 
**phone_number** | **str** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] 
**id** | **str** | ID of an existing customer | 

## Example

```python
from payconductor_sdk.models.card_tokenization_create_request_customer import CardTokenizationCreateRequestCustomer

# TODO update the JSON string below
json = "{}"
# create an instance of CardTokenizationCreateRequestCustomer from a JSON string
card_tokenization_create_request_customer_instance = CardTokenizationCreateRequestCustomer.from_json(json)
# print the JSON string representation of the object
print(CardTokenizationCreateRequestCustomer.to_json())

# convert the object into a dict
card_tokenization_create_request_customer_dict = card_tokenization_create_request_customer_instance.to_dict()
# create an instance of CardTokenizationCreateRequestCustomer from a dict
card_tokenization_create_request_customer_from_dict = CardTokenizationCreateRequestCustomer.from_dict(card_tokenization_create_request_customer_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


