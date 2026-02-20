# CustomerAddressResponse

Customer address information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Unique address identifier | 
**street** | **str** | Street name | 
**number** | **str** | Address number | 
**neighborhood** | **str** | Neighborhood name | 
**city** | **str** | City name | 
**state** | **str** | State code in ISO 3166-2 format | 
**zip_code** | **str** | ZIP code without formatting | 
**country** | **str** | Country code in ISO 3166-1 alpha-2 format | 

## Example

```python
from payconductor_sdk.models.customer_address_response import CustomerAddressResponse

# TODO update the JSON string below
json = "{}"
# create an instance of CustomerAddressResponse from a JSON string
customer_address_response_instance = CustomerAddressResponse.from_json(json)
# print the JSON string representation of the object
print(CustomerAddressResponse.to_json())

# convert the object into a dict
customer_address_response_dict = customer_address_response_instance.to_dict()
# create an instance of CustomerAddressResponse from a dict
customer_address_response_from_dict = CustomerAddressResponse.from_dict(customer_address_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


