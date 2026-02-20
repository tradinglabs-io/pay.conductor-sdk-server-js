# CustomerUpdateRequest

Schema for updating customer information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**address** | [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] 
**document_number** | **str** | Customer CPF or CNPJ without formatting | [optional] 
**document_type** | [**DocumentType**](DocumentType.md) |  | [optional] 
**email** | **str** | Customer email | [optional] 
**name** | **str** | Customer full name | [optional] 
**phone_number** | **str** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] 

## Example

```python
from payconductor_sdk.models.customer_update_request import CustomerUpdateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of CustomerUpdateRequest from a JSON string
customer_update_request_instance = CustomerUpdateRequest.from_json(json)
# print the JSON string representation of the object
print(CustomerUpdateRequest.to_json())

# convert the object into a dict
customer_update_request_dict = customer_update_request_instance.to_dict()
# create an instance of CustomerUpdateRequest from a dict
customer_update_request_from_dict = CustomerUpdateRequest.from_dict(customer_update_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


