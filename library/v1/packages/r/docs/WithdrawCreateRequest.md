# payconductor_sdk::WithdrawCreateRequest

Withdrawal or transfer request data

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**amount** | **numeric** | Withdrawal amount in cents | [Min: 1] 
**externalId** | **character** | Withdrawal ID in your system | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payoutAccount** | [**WithdrawPayoutAccountData**](Withdraw_Payout_Account_Data.md) |  | 


