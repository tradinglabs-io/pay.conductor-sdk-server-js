# OrderDraftPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**models::PaymentMethod**](PaymentMethod.md) |  | 
**expiration_in_seconds** | Option<**f64**> | Order expiration time in seconds | [optional][default to 3600]
**available_payment_methods** | Option<[**Vec<models::AvailablePaymentMethods>**](AvailablePaymentMethods.md)> | Available payment methods for this order | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


