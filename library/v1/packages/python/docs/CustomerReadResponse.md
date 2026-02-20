# CustomerReadResponse

Customer response with complete information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Unique customer identifier | 
**name** | **str** | Customer full name | 
**email** | **str** | Customer email | 
**document_type** | [**DocumentType**](DocumentType.md) |  | 
**document_number** | **str** | Customer CPF or CNPJ without formatting | 
**phone_number** | **str** | Customer phone number in +55 DD 9XXXXXXXX format | 
**address** | [**CustomerAddressResponse**](CustomerAddressResponse.md) |  | 
**created_at** | **str** | Date and time when the customer was created (ISO 8601 format) | 
**updated_at** | **str** | Date and time when the customer was last updated (ISO 8601 format) | 

## Example

```python
from payconductor_sdk.models.customer_read_response import CustomerReadResponse

# TODO update the JSON string below
json = "{}"
# create an instance of CustomerReadResponse from a JSON string
customer_read_response_instance = CustomerReadResponse.from_json(json)
# print the JSON string representation of the object
print(CustomerReadResponse.to_json())

# convert the object into a dict
customer_read_response_dict = customer_read_response_instance.to_dict()
# create an instance of CustomerReadResponse from a dict
customer_read_response_from_dict = CustomerReadResponse.from_dict(customer_read_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


