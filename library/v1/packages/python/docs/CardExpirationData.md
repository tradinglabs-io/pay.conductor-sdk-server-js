# CardExpirationData

Card expiration date

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**month** | **float** | Card expiration month | 
**year** | **float** | Card expiration year | 

## Example

```python
from payconductor_sdk.models.card_expiration_data import CardExpirationData

# TODO update the JSON string below
json = "{}"
# create an instance of CardExpirationData from a JSON string
card_expiration_data_instance = CardExpirationData.from_json(json)
# print the JSON string representation of the object
print(CardExpirationData.to_json())

# convert the object into a dict
card_expiration_data_dict = card_expiration_data_instance.to_dict()
# create an instance of CardExpirationData from a dict
card_expiration_data_from_dict = CardExpirationData.from_dict(card_expiration_data_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


