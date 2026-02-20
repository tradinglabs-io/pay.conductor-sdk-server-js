# AddressCreateRequest

Schema for creating a new address

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**city** | **str** | City name | 
**country** | **str** | Country code in ISO 3166-1 alpha-2 format | [default to 'BR']
**neighborhood** | **str** | Neighborhood name | 
**number** | **str** | Address number | 
**state** | **str** | State code in ISO 3166-2 format | 
**street** | **str** | Street name | 
**zip_code** | **str** | ZIP code without formatting | 

## Example

```python
from payconductor_sdk.models.address_create_request import AddressCreateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of AddressCreateRequest from a JSON string
address_create_request_instance = AddressCreateRequest.from_json(json)
# print the JSON string representation of the object
print(AddressCreateRequest.to_json())

# convert the object into a dict
address_create_request_dict = address_create_request_instance.to_dict()
# create an instance of AddressCreateRequest from a dict
address_create_request_from_dict = AddressCreateRequest.from_dict(address_create_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


