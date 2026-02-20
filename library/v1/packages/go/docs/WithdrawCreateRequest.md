# WithdrawCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Amount** | **float32** | Withdrawal amount in cents | 
**ExternalId** | Pointer to **string** | Withdrawal ID in your system | [optional] 
**Merchant** | Pointer to [**MerchantInput**](MerchantInput.md) |  | [optional] 
**PayoutAccount** | [**WithdrawPayoutAccountData**](WithdrawPayoutAccountData.md) |  | 

## Methods

### NewWithdrawCreateRequest

`func NewWithdrawCreateRequest(amount float32, payoutAccount WithdrawPayoutAccountData, ) *WithdrawCreateRequest`

NewWithdrawCreateRequest instantiates a new WithdrawCreateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWithdrawCreateRequestWithDefaults

`func NewWithdrawCreateRequestWithDefaults() *WithdrawCreateRequest`

NewWithdrawCreateRequestWithDefaults instantiates a new WithdrawCreateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAmount

`func (o *WithdrawCreateRequest) GetAmount() float32`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *WithdrawCreateRequest) GetAmountOk() (*float32, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *WithdrawCreateRequest) SetAmount(v float32)`

SetAmount sets Amount field to given value.


### GetExternalId

`func (o *WithdrawCreateRequest) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *WithdrawCreateRequest) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *WithdrawCreateRequest) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.

### HasExternalId

`func (o *WithdrawCreateRequest) HasExternalId() bool`

HasExternalId returns a boolean if a field has been set.

### GetMerchant

`func (o *WithdrawCreateRequest) GetMerchant() MerchantInput`

GetMerchant returns the Merchant field if non-nil, zero value otherwise.

### GetMerchantOk

`func (o *WithdrawCreateRequest) GetMerchantOk() (*MerchantInput, bool)`

GetMerchantOk returns a tuple with the Merchant field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMerchant

`func (o *WithdrawCreateRequest) SetMerchant(v MerchantInput)`

SetMerchant sets Merchant field to given value.

### HasMerchant

`func (o *WithdrawCreateRequest) HasMerchant() bool`

HasMerchant returns a boolean if a field has been set.

### GetPayoutAccount

`func (o *WithdrawCreateRequest) GetPayoutAccount() WithdrawPayoutAccountData`

GetPayoutAccount returns the PayoutAccount field if non-nil, zero value otherwise.

### GetPayoutAccountOk

`func (o *WithdrawCreateRequest) GetPayoutAccountOk() (*WithdrawPayoutAccountData, bool)`

GetPayoutAccountOk returns a tuple with the PayoutAccount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayoutAccount

`func (o *WithdrawCreateRequest) SetPayoutAccount(v WithdrawPayoutAccountData)`

SetPayoutAccount sets PayoutAccount field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


