# payconductor_sdk.Model.OrderCreateRequest
Order data for payment processing

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ChargeAmount** | **decimal** | Total amount to be charged on the order in floating point value | 
**ClientIp** | **string** | Client IP address | 
**Customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  | 
**ExternalId** | **string** | Order ID in your system | 
**Payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  | 
**DiscountAmount** | **decimal** | Discount amount | [default to 0M]
**Fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  | [optional] 
**Items** | [**List&lt;OrderItemData&gt;**](OrderItemData.md) | List of products or services in the order | [optional] 
**Merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**SplitAmountTotal** | **decimal** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] 
**Session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  | [optional] 
**ShippingFee** | **decimal** | Shipping fee | [default to 0M]
**TaxFee** | **decimal** | Additional fees | [default to 0M]
**Metadata** | **Object** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

