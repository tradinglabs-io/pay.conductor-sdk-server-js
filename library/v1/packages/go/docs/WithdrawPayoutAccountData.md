# WithdrawPayoutAccountData

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**OwnerDocument** | **string** | Account holder document (CPF or CNPJ) | 
**OwnerName** | **string** | Account holder name | 
**PixKey** | **string** | PIX key for withdrawal | 
**PixType** | [**PixType**](PixType.md) |  | 

## Methods

### NewWithdrawPayoutAccountData

`func NewWithdrawPayoutAccountData(ownerDocument string, ownerName string, pixKey string, pixType PixType, ) *WithdrawPayoutAccountData`

NewWithdrawPayoutAccountData instantiates a new WithdrawPayoutAccountData object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWithdrawPayoutAccountDataWithDefaults

`func NewWithdrawPayoutAccountDataWithDefaults() *WithdrawPayoutAccountData`

NewWithdrawPayoutAccountDataWithDefaults instantiates a new WithdrawPayoutAccountData object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetOwnerDocument

`func (o *WithdrawPayoutAccountData) GetOwnerDocument() string`

GetOwnerDocument returns the OwnerDocument field if non-nil, zero value otherwise.

### GetOwnerDocumentOk

`func (o *WithdrawPayoutAccountData) GetOwnerDocumentOk() (*string, bool)`

GetOwnerDocumentOk returns a tuple with the OwnerDocument field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwnerDocument

`func (o *WithdrawPayoutAccountData) SetOwnerDocument(v string)`

SetOwnerDocument sets OwnerDocument field to given value.


### GetOwnerName

`func (o *WithdrawPayoutAccountData) GetOwnerName() string`

GetOwnerName returns the OwnerName field if non-nil, zero value otherwise.

### GetOwnerNameOk

`func (o *WithdrawPayoutAccountData) GetOwnerNameOk() (*string, bool)`

GetOwnerNameOk returns a tuple with the OwnerName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwnerName

`func (o *WithdrawPayoutAccountData) SetOwnerName(v string)`

SetOwnerName sets OwnerName field to given value.


### GetPixKey

`func (o *WithdrawPayoutAccountData) GetPixKey() string`

GetPixKey returns the PixKey field if non-nil, zero value otherwise.

### GetPixKeyOk

`func (o *WithdrawPayoutAccountData) GetPixKeyOk() (*string, bool)`

GetPixKeyOk returns a tuple with the PixKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPixKey

`func (o *WithdrawPayoutAccountData) SetPixKey(v string)`

SetPixKey sets PixKey field to given value.


### GetPixType

`func (o *WithdrawPayoutAccountData) GetPixType() PixType`

GetPixType returns the PixType field if non-nil, zero value otherwise.

### GetPixTypeOk

`func (o *WithdrawPayoutAccountData) GetPixTypeOk() (*PixType, bool)`

GetPixTypeOk returns a tuple with the PixType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPixType

`func (o *WithdrawPayoutAccountData) SetPixType(v PixType)`

SetPixType sets PixType field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


