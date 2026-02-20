

# OrderDraftPaymentRequest

Used to create an order without generating a real payment. Use to create orders that will be paid later

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**paymentMethod** | **String** |  |  |
|**expirationInSeconds** | **BigDecimal** | Order expiration time in seconds |  [optional] |
|**availablePaymentMethods** | **List&lt;AvailablePaymentMethods&gt;** | Available payment methods for this order |  [optional] |



