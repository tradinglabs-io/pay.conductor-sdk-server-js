# CardTokenizationCreateRequest

Data for creating a customer card with customer information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**card** | [**CardCreateRequest**](CardCreateRequest.md) |  | 
**save_card** | **bool** | Indicates if the card should be saved for future use | 
**customer** | [**CardTokenizationCreateRequestCustomer**](CardTokenizationCreateRequestCustomer.md) |  | 

## Example

```python
from payconductor_sdk.models.card_tokenization_create_request import CardTokenizationCreateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of CardTokenizationCreateRequest from a JSON string
card_tokenization_create_request_instance = CardTokenizationCreateRequest.from_json(json)
# print the JSON string representation of the object
print(CardTokenizationCreateRequest.to_json())

# convert the object into a dict
card_tokenization_create_request_dict = card_tokenization_create_request_instance.to_dict()
# create an instance of CardTokenizationCreateRequest from a dict
card_tokenization_create_request_from_dict = CardTokenizationCreateRequest.from_dict(card_tokenization_create_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


