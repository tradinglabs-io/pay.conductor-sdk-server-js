# CardTokenizationCustomerByIdData

Reference to an existing customer by ID

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | ID of an existing customer | 

## Example

```python
from payconductor_sdk.models.card_tokenization_customer_by_id_data import CardTokenizationCustomerByIdData

# TODO update the JSON string below
json = "{}"
# create an instance of CardTokenizationCustomerByIdData from a JSON string
card_tokenization_customer_by_id_data_instance = CardTokenizationCustomerByIdData.from_json(json)
# print the JSON string representation of the object
print(CardTokenizationCustomerByIdData.to_json())

# convert the object into a dict
card_tokenization_customer_by_id_data_dict = card_tokenization_customer_by_id_data_instance.to_dict()
# create an instance of CardTokenizationCustomerByIdData from a dict
card_tokenization_customer_by_id_data_from_dict = CardTokenizationCustomerByIdData.from_dict(card_tokenization_customer_by_id_data_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


