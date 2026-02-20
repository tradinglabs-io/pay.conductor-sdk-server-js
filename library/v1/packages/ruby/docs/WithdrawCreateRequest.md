# OpenapiClient::WithdrawCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **amount** | **Float** | Withdrawal amount in cents |  |
| **external_id** | **String** | Withdrawal ID in your system | [optional] |
| **merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] |
| **payout_account** | [**WithdrawPayoutAccountData**](WithdrawPayoutAccountData.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WithdrawCreateRequest.new(
  amount: null,
  external_id: null,
  merchant: null,
  payout_account: null
)
```

