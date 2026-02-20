# CustomerListPagination

Pagination information for customer list

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**current_page** | **float** | Current page number | 
**page_size** | **float** | Number of items per page | 
**total_items** | **float** | Total number of customers | 
**total_pages** | **float** | Total number of pages | 

## Example

```python
from payconductor_sdk.models.customer_list_pagination import CustomerListPagination

# TODO update the JSON string below
json = "{}"
# create an instance of CustomerListPagination from a JSON string
customer_list_pagination_instance = CustomerListPagination.from_json(json)
# print the JSON string representation of the object
print(CustomerListPagination.to_json())

# convert the object into a dict
customer_list_pagination_dict = customer_list_pagination_instance.to_dict()
# create an instance of CustomerListPagination from a dict
customer_list_pagination_from_dict = CustomerListPagination.from_dict(customer_list_pagination_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


