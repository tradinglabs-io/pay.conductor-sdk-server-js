
# OrderCreateRequest

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **chargeAmount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Total amount to be charged on the order in floating point value |  |
| **clientIp** | **kotlin.String** | Client IP address |  |
| **customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  |  |
| **discountAmount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Discount amount |  |
| **externalId** | **kotlin.String** | Order ID in your system |  |
| **payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  |  |
| **shippingFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Shipping fee |  |
| **taxFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Additional fees |  |
| **fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  |  [optional] |
| **items** | [**kotlin.collections.List&lt;OrderItemData&gt;**](OrderItemData.md) | List of products or services in the order |  [optional] |
| **merchant** | [**MerchantInput**](MerchantInput.md) |  |  [optional] |
| **splitAmountTotal** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) |  [optional] |
| **session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  |  [optional] |
| **metadata** | [**kotlin.Any**](.md) | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters |  [optional] |



