# WithdrawCreateResponsePayoutAccount

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Unique payment account identifier | 
**OwnerDocument** | **string** | Account holder document (CPF or CNPJ) | 
**OwnerName** | **string** | Account holder name | 
**PixKey** | **string** | PIX key used for the withdrawal | 
**PixType** | [**PixType**](PixType.md) |  | 

## Methods

### NewWithdrawCreateResponsePayoutAccount

`func NewWithdrawCreateResponsePayoutAccount(id string, ownerDocument string, ownerName string, pixKey string, pixType PixType, ) *WithdrawCreateResponsePayoutAccount`

NewWithdrawCreateResponsePayoutAccount instantiates a new WithdrawCreateResponsePayoutAccount object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWithdrawCreateResponsePayoutAccountWithDefaults

`func NewWithdrawCreateResponsePayoutAccountWithDefaults() *WithdrawCreateResponsePayoutAccount`

NewWithdrawCreateResponsePayoutAccountWithDefaults instantiates a new WithdrawCreateResponsePayoutAccount object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *WithdrawCreateResponsePayoutAccount) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *WithdrawCreateResponsePayoutAccount) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *WithdrawCreateResponsePayoutAccount) SetId(v string)`

SetId sets Id field to given value.


### GetOwnerDocument

`func (o *WithdrawCreateResponsePayoutAccount) GetOwnerDocument() string`

GetOwnerDocument returns the OwnerDocument field if non-nil, zero value otherwise.

### GetOwnerDocumentOk

`func (o *WithdrawCreateResponsePayoutAccount) GetOwnerDocumentOk() (*string, bool)`

GetOwnerDocumentOk returns a tuple with the OwnerDocument field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwnerDocument

`func (o *WithdrawCreateResponsePayoutAccount) SetOwnerDocument(v string)`

SetOwnerDocument sets OwnerDocument field to given value.


### GetOwnerName

`func (o *WithdrawCreateResponsePayoutAccount) GetOwnerName() string`

GetOwnerName returns the OwnerName field if non-nil, zero value otherwise.

### GetOwnerNameOk

`func (o *WithdrawCreateResponsePayoutAccount) GetOwnerNameOk() (*string, bool)`

GetOwnerNameOk returns a tuple with the OwnerName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwnerName

`func (o *WithdrawCreateResponsePayoutAccount) SetOwnerName(v string)`

SetOwnerName sets OwnerName field to given value.


### GetPixKey

`func (o *WithdrawCreateResponsePayoutAccount) GetPixKey() string`

GetPixKey returns the PixKey field if non-nil, zero value otherwise.

### GetPixKeyOk

`func (o *WithdrawCreateResponsePayoutAccount) GetPixKeyOk() (*string, bool)`

GetPixKeyOk returns a tuple with the PixKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPixKey

`func (o *WithdrawCreateResponsePayoutAccount) SetPixKey(v string)`

SetPixKey sets PixKey field to given value.


### GetPixType

`func (o *WithdrawCreateResponsePayoutAccount) GetPixType() PixType`

GetPixType returns the PixType field if non-nil, zero value otherwise.

### GetPixTypeOk

`func (o *WithdrawCreateResponsePayoutAccount) GetPixTypeOk() (*PixType, bool)`

GetPixTypeOk returns a tuple with the PixType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPixType

`func (o *WithdrawCreateResponsePayoutAccount) SetPixType(v PixType)`

SetPixType sets PixType field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


