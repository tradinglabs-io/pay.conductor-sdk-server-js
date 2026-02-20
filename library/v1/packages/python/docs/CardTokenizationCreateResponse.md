# CardTokenizationCreateResponse

Response containing customer ID and card token

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**customer_id** | **str** | ID of the customer associated with the created card | 
**token** | **str** | Token of the created card for future transactions | 

## Example

```python
from payconductor_sdk.models.card_tokenization_create_response import CardTokenizationCreateResponse

# TODO update the JSON string below
json = "{}"
# create an instance of CardTokenizationCreateResponse from a JSON string
card_tokenization_create_response_instance = CardTokenizationCreateResponse.from_json(json)
# print the JSON string representation of the object
print(CardTokenizationCreateResponse.to_json())

# convert the object into a dict
card_tokenization_create_response_dict = card_tokenization_create_response_instance.to_dict()
# create an instance of CardTokenizationCreateResponse from a dict
card_tokenization_create_response_from_dict = CardTokenizationCreateResponse.from_dict(card_tokenization_create_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


