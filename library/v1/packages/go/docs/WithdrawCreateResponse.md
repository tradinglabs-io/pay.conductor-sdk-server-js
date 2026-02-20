# WithdrawCreateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Unique withdrawal identifier | 
**ExternalId** | **NullableString** | Withdrawal ID in your system | 
**ExternalIntegrationKey** | **string** | Provider key used for the withdrawal | 
**ExternalIntegrationId** | **NullableString** | Withdrawal ID in the payment provider | 
**CostFee** | **float32** | Cost fee applied to the withdrawal | 
**Status** | [**Status**](Status.md) |  | 
**ErrorCode** | **NullableString** | Error code, if any | 
**ErrorMessage** | **NullableString** | Descriptive error message, if any | 
**PayedAt** | [**NullableWithdrawCreateResponsePayedAt**](WithdrawCreateResponsePayedAt.md) |  | 
**PayoutAccount** | [**WithdrawCreateResponsePayoutAccount**](WithdrawCreateResponsePayoutAccount.md) |  | 

## Methods

### NewWithdrawCreateResponse

`func NewWithdrawCreateResponse(id string, externalId NullableString, externalIntegrationKey string, externalIntegrationId NullableString, costFee float32, status Status, errorCode NullableString, errorMessage NullableString, payedAt NullableWithdrawCreateResponsePayedAt, payoutAccount WithdrawCreateResponsePayoutAccount, ) *WithdrawCreateResponse`

NewWithdrawCreateResponse instantiates a new WithdrawCreateResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWithdrawCreateResponseWithDefaults

`func NewWithdrawCreateResponseWithDefaults() *WithdrawCreateResponse`

NewWithdrawCreateResponseWithDefaults instantiates a new WithdrawCreateResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *WithdrawCreateResponse) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *WithdrawCreateResponse) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *WithdrawCreateResponse) SetId(v string)`

SetId sets Id field to given value.


### GetExternalId

`func (o *WithdrawCreateResponse) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *WithdrawCreateResponse) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *WithdrawCreateResponse) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.


### SetExternalIdNil

`func (o *WithdrawCreateResponse) SetExternalIdNil(b bool)`

 SetExternalIdNil sets the value for ExternalId to be an explicit nil

### UnsetExternalId
`func (o *WithdrawCreateResponse) UnsetExternalId()`

UnsetExternalId ensures that no value is present for ExternalId, not even an explicit nil
### GetExternalIntegrationKey

`func (o *WithdrawCreateResponse) GetExternalIntegrationKey() string`

GetExternalIntegrationKey returns the ExternalIntegrationKey field if non-nil, zero value otherwise.

### GetExternalIntegrationKeyOk

`func (o *WithdrawCreateResponse) GetExternalIntegrationKeyOk() (*string, bool)`

GetExternalIntegrationKeyOk returns a tuple with the ExternalIntegrationKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalIntegrationKey

`func (o *WithdrawCreateResponse) SetExternalIntegrationKey(v string)`

SetExternalIntegrationKey sets ExternalIntegrationKey field to given value.


### GetExternalIntegrationId

`func (o *WithdrawCreateResponse) GetExternalIntegrationId() string`

GetExternalIntegrationId returns the ExternalIntegrationId field if non-nil, zero value otherwise.

### GetExternalIntegrationIdOk

`func (o *WithdrawCreateResponse) GetExternalIntegrationIdOk() (*string, bool)`

GetExternalIntegrationIdOk returns a tuple with the ExternalIntegrationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalIntegrationId

`func (o *WithdrawCreateResponse) SetExternalIntegrationId(v string)`

SetExternalIntegrationId sets ExternalIntegrationId field to given value.


### SetExternalIntegrationIdNil

`func (o *WithdrawCreateResponse) SetExternalIntegrationIdNil(b bool)`

 SetExternalIntegrationIdNil sets the value for ExternalIntegrationId to be an explicit nil

### UnsetExternalIntegrationId
`func (o *WithdrawCreateResponse) UnsetExternalIntegrationId()`

UnsetExternalIntegrationId ensures that no value is present for ExternalIntegrationId, not even an explicit nil
### GetCostFee

`func (o *WithdrawCreateResponse) GetCostFee() float32`

GetCostFee returns the CostFee field if non-nil, zero value otherwise.

### GetCostFeeOk

`func (o *WithdrawCreateResponse) GetCostFeeOk() (*float32, bool)`

GetCostFeeOk returns a tuple with the CostFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCostFee

`func (o *WithdrawCreateResponse) SetCostFee(v float32)`

SetCostFee sets CostFee field to given value.


### GetStatus

`func (o *WithdrawCreateResponse) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *WithdrawCreateResponse) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *WithdrawCreateResponse) SetStatus(v Status)`

SetStatus sets Status field to given value.


### GetErrorCode

`func (o *WithdrawCreateResponse) GetErrorCode() string`

GetErrorCode returns the ErrorCode field if non-nil, zero value otherwise.

### GetErrorCodeOk

`func (o *WithdrawCreateResponse) GetErrorCodeOk() (*string, bool)`

GetErrorCodeOk returns a tuple with the ErrorCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorCode

`func (o *WithdrawCreateResponse) SetErrorCode(v string)`

SetErrorCode sets ErrorCode field to given value.


### SetErrorCodeNil

`func (o *WithdrawCreateResponse) SetErrorCodeNil(b bool)`

 SetErrorCodeNil sets the value for ErrorCode to be an explicit nil

### UnsetErrorCode
`func (o *WithdrawCreateResponse) UnsetErrorCode()`

UnsetErrorCode ensures that no value is present for ErrorCode, not even an explicit nil
### GetErrorMessage

`func (o *WithdrawCreateResponse) GetErrorMessage() string`

GetErrorMessage returns the ErrorMessage field if non-nil, zero value otherwise.

### GetErrorMessageOk

`func (o *WithdrawCreateResponse) GetErrorMessageOk() (*string, bool)`

GetErrorMessageOk returns a tuple with the ErrorMessage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorMessage

`func (o *WithdrawCreateResponse) SetErrorMessage(v string)`

SetErrorMessage sets ErrorMessage field to given value.


### SetErrorMessageNil

`func (o *WithdrawCreateResponse) SetErrorMessageNil(b bool)`

 SetErrorMessageNil sets the value for ErrorMessage to be an explicit nil

### UnsetErrorMessage
`func (o *WithdrawCreateResponse) UnsetErrorMessage()`

UnsetErrorMessage ensures that no value is present for ErrorMessage, not even an explicit nil
### GetPayedAt

`func (o *WithdrawCreateResponse) GetPayedAt() WithdrawCreateResponsePayedAt`

GetPayedAt returns the PayedAt field if non-nil, zero value otherwise.

### GetPayedAtOk

`func (o *WithdrawCreateResponse) GetPayedAtOk() (*WithdrawCreateResponsePayedAt, bool)`

GetPayedAtOk returns a tuple with the PayedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayedAt

`func (o *WithdrawCreateResponse) SetPayedAt(v WithdrawCreateResponsePayedAt)`

SetPayedAt sets PayedAt field to given value.


### SetPayedAtNil

`func (o *WithdrawCreateResponse) SetPayedAtNil(b bool)`

 SetPayedAtNil sets the value for PayedAt to be an explicit nil

### UnsetPayedAt
`func (o *WithdrawCreateResponse) UnsetPayedAt()`

UnsetPayedAt ensures that no value is present for PayedAt, not even an explicit nil
### GetPayoutAccount

`func (o *WithdrawCreateResponse) GetPayoutAccount() WithdrawCreateResponsePayoutAccount`

GetPayoutAccount returns the PayoutAccount field if non-nil, zero value otherwise.

### GetPayoutAccountOk

`func (o *WithdrawCreateResponse) GetPayoutAccountOk() (*WithdrawCreateResponsePayoutAccount, bool)`

GetPayoutAccountOk returns a tuple with the PayoutAccount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayoutAccount

`func (o *WithdrawCreateResponse) SetPayoutAccount(v WithdrawCreateResponsePayoutAccount)`

SetPayoutAccount sets PayoutAccount field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


