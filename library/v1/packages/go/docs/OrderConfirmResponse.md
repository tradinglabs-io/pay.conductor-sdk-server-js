# OrderConfirmResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Order ID in the system | 
**ExternalId** | **NullableString** | External order ID (provided by your integration) | 
**Amount** | **float32** | Total order amount | 
**CostFee** | **float32** | Cost fee applied to the order | 
**Pix** | Pointer to [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**BankSlip** | Pointer to [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**NuPay** | Pointer to [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**PicPay** | Pointer to [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**Status** | [**Status**](Status.md) |  | 
**PaymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | 
**PayedAt** | **NullableString** | Date and time when the order was paid (ISO 8601) | 
**ErrorCode** | **NullableString** | Error code, if any | 
**ErrorMessage** | **NullableString** | Error message, if any | 

## Methods

### NewOrderConfirmResponse

`func NewOrderConfirmResponse(id string, externalId NullableString, amount float32, costFee float32, status Status, paymentMethod PaymentMethod, payedAt NullableString, errorCode NullableString, errorMessage NullableString, ) *OrderConfirmResponse`

NewOrderConfirmResponse instantiates a new OrderConfirmResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderConfirmResponseWithDefaults

`func NewOrderConfirmResponseWithDefaults() *OrderConfirmResponse`

NewOrderConfirmResponseWithDefaults instantiates a new OrderConfirmResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *OrderConfirmResponse) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *OrderConfirmResponse) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *OrderConfirmResponse) SetId(v string)`

SetId sets Id field to given value.


### GetExternalId

`func (o *OrderConfirmResponse) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *OrderConfirmResponse) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *OrderConfirmResponse) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.


### SetExternalIdNil

`func (o *OrderConfirmResponse) SetExternalIdNil(b bool)`

 SetExternalIdNil sets the value for ExternalId to be an explicit nil

### UnsetExternalId
`func (o *OrderConfirmResponse) UnsetExternalId()`

UnsetExternalId ensures that no value is present for ExternalId, not even an explicit nil
### GetAmount

`func (o *OrderConfirmResponse) GetAmount() float32`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *OrderConfirmResponse) GetAmountOk() (*float32, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *OrderConfirmResponse) SetAmount(v float32)`

SetAmount sets Amount field to given value.


### GetCostFee

`func (o *OrderConfirmResponse) GetCostFee() float32`

GetCostFee returns the CostFee field if non-nil, zero value otherwise.

### GetCostFeeOk

`func (o *OrderConfirmResponse) GetCostFeeOk() (*float32, bool)`

GetCostFeeOk returns a tuple with the CostFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCostFee

`func (o *OrderConfirmResponse) SetCostFee(v float32)`

SetCostFee sets CostFee field to given value.


### GetPix

`func (o *OrderConfirmResponse) GetPix() OrderPIXInfo`

GetPix returns the Pix field if non-nil, zero value otherwise.

### GetPixOk

`func (o *OrderConfirmResponse) GetPixOk() (*OrderPIXInfo, bool)`

GetPixOk returns a tuple with the Pix field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPix

`func (o *OrderConfirmResponse) SetPix(v OrderPIXInfo)`

SetPix sets Pix field to given value.

### HasPix

`func (o *OrderConfirmResponse) HasPix() bool`

HasPix returns a boolean if a field has been set.

### GetBankSlip

`func (o *OrderConfirmResponse) GetBankSlip() OrderBankSlipInfo`

GetBankSlip returns the BankSlip field if non-nil, zero value otherwise.

### GetBankSlipOk

`func (o *OrderConfirmResponse) GetBankSlipOk() (*OrderBankSlipInfo, bool)`

GetBankSlipOk returns a tuple with the BankSlip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBankSlip

`func (o *OrderConfirmResponse) SetBankSlip(v OrderBankSlipInfo)`

SetBankSlip sets BankSlip field to given value.

### HasBankSlip

`func (o *OrderConfirmResponse) HasBankSlip() bool`

HasBankSlip returns a boolean if a field has been set.

### GetNuPay

`func (o *OrderConfirmResponse) GetNuPay() OrderNuPayInfo`

GetNuPay returns the NuPay field if non-nil, zero value otherwise.

### GetNuPayOk

`func (o *OrderConfirmResponse) GetNuPayOk() (*OrderNuPayInfo, bool)`

GetNuPayOk returns a tuple with the NuPay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNuPay

`func (o *OrderConfirmResponse) SetNuPay(v OrderNuPayInfo)`

SetNuPay sets NuPay field to given value.

### HasNuPay

`func (o *OrderConfirmResponse) HasNuPay() bool`

HasNuPay returns a boolean if a field has been set.

### GetPicPay

`func (o *OrderConfirmResponse) GetPicPay() OrderPicPayInfo`

GetPicPay returns the PicPay field if non-nil, zero value otherwise.

### GetPicPayOk

`func (o *OrderConfirmResponse) GetPicPayOk() (*OrderPicPayInfo, bool)`

GetPicPayOk returns a tuple with the PicPay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPicPay

`func (o *OrderConfirmResponse) SetPicPay(v OrderPicPayInfo)`

SetPicPay sets PicPay field to given value.

### HasPicPay

`func (o *OrderConfirmResponse) HasPicPay() bool`

HasPicPay returns a boolean if a field has been set.

### GetStatus

`func (o *OrderConfirmResponse) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *OrderConfirmResponse) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *OrderConfirmResponse) SetStatus(v Status)`

SetStatus sets Status field to given value.


### GetPaymentMethod

`func (o *OrderConfirmResponse) GetPaymentMethod() PaymentMethod`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *OrderConfirmResponse) GetPaymentMethodOk() (*PaymentMethod, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *OrderConfirmResponse) SetPaymentMethod(v PaymentMethod)`

SetPaymentMethod sets PaymentMethod field to given value.


### GetPayedAt

`func (o *OrderConfirmResponse) GetPayedAt() string`

GetPayedAt returns the PayedAt field if non-nil, zero value otherwise.

### GetPayedAtOk

`func (o *OrderConfirmResponse) GetPayedAtOk() (*string, bool)`

GetPayedAtOk returns a tuple with the PayedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayedAt

`func (o *OrderConfirmResponse) SetPayedAt(v string)`

SetPayedAt sets PayedAt field to given value.


### SetPayedAtNil

`func (o *OrderConfirmResponse) SetPayedAtNil(b bool)`

 SetPayedAtNil sets the value for PayedAt to be an explicit nil

### UnsetPayedAt
`func (o *OrderConfirmResponse) UnsetPayedAt()`

UnsetPayedAt ensures that no value is present for PayedAt, not even an explicit nil
### GetErrorCode

`func (o *OrderConfirmResponse) GetErrorCode() string`

GetErrorCode returns the ErrorCode field if non-nil, zero value otherwise.

### GetErrorCodeOk

`func (o *OrderConfirmResponse) GetErrorCodeOk() (*string, bool)`

GetErrorCodeOk returns a tuple with the ErrorCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorCode

`func (o *OrderConfirmResponse) SetErrorCode(v string)`

SetErrorCode sets ErrorCode field to given value.


### SetErrorCodeNil

`func (o *OrderConfirmResponse) SetErrorCodeNil(b bool)`

 SetErrorCodeNil sets the value for ErrorCode to be an explicit nil

### UnsetErrorCode
`func (o *OrderConfirmResponse) UnsetErrorCode()`

UnsetErrorCode ensures that no value is present for ErrorCode, not even an explicit nil
### GetErrorMessage

`func (o *OrderConfirmResponse) GetErrorMessage() string`

GetErrorMessage returns the ErrorMessage field if non-nil, zero value otherwise.

### GetErrorMessageOk

`func (o *OrderConfirmResponse) GetErrorMessageOk() (*string, bool)`

GetErrorMessageOk returns a tuple with the ErrorMessage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorMessage

`func (o *OrderConfirmResponse) SetErrorMessage(v string)`

SetErrorMessage sets ErrorMessage field to given value.


### SetErrorMessageNil

`func (o *OrderConfirmResponse) SetErrorMessageNil(b bool)`

 SetErrorMessageNil sets the value for ErrorMessage to be an explicit nil

### UnsetErrorMessage
`func (o *OrderConfirmResponse) UnsetErrorMessage()`

UnsetErrorMessage ensures that no value is present for ErrorMessage, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


