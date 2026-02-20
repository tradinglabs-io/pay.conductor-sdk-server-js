# CustomerListResponse

Paginated list of customers

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**data** | [**List[CustomerReadResponse]**](CustomerReadResponse.md) | List of customers | 
**pagination** | [**CustomerListPagination**](CustomerListPagination.md) |  | 

## Example

```python
from payconductor_sdk.models.customer_list_response import CustomerListResponse

# TODO update the JSON string below
json = "{}"
# create an instance of CustomerListResponse from a JSON string
customer_list_response_instance = CustomerListResponse.from_json(json)
# print the JSON string representation of the object
print(CustomerListResponse.to_json())

# convert the object into a dict
customer_list_response_dict = customer_list_response_instance.to_dict()
# create an instance of CustomerListResponse from a dict
customer_list_response_from_dict = CustomerListResponse.from_dict(customer_list_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


