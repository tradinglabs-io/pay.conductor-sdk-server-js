# OrderCreateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Order ID in the system | 
**ExternalId** | **NullableString** | External order ID (provided by your integration) | 
**ExternalIntegrationKey** | **string** | Provider used to process the order | 
**ExternalIntegrationId** | **NullableString** | Order ID in the payment provider | 
**Amount** | **float32** | Total order amount | 
**CostFee** | **float32** | Cost fee applied to the order | 
**Pix** | Pointer to [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**BankSlip** | Pointer to [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**NuPay** | Pointer to [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**PicPay** | Pointer to [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**CreditCard** | Pointer to [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional] 
**Status** | [**Status**](Status.md) |  | 
**PaymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | 
**PayedAt** | **NullableString** | Date and time when the order was paid (ISO 8601) | 
**ErrorCode** | **NullableString** | Error code, if any | 
**ErrorMessage** | **NullableString** | Error message, if any | 
**OrderItems** | [**[]OrderCreateResponseOrderItemsInner**](OrderCreateResponseOrderItemsInner.md) |  | 
**Session** | Pointer to [**NullableOrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional] 

## Methods

### NewOrderCreateResponse

`func NewOrderCreateResponse(id string, externalId NullableString, externalIntegrationKey string, externalIntegrationId NullableString, amount float32, costFee float32, status Status, paymentMethod PaymentMethod, payedAt NullableString, errorCode NullableString, errorMessage NullableString, orderItems []OrderCreateResponseOrderItemsInner, ) *OrderCreateResponse`

NewOrderCreateResponse instantiates a new OrderCreateResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderCreateResponseWithDefaults

`func NewOrderCreateResponseWithDefaults() *OrderCreateResponse`

NewOrderCreateResponseWithDefaults instantiates a new OrderCreateResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *OrderCreateResponse) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *OrderCreateResponse) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *OrderCreateResponse) SetId(v string)`

SetId sets Id field to given value.


### GetExternalId

`func (o *OrderCreateResponse) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *OrderCreateResponse) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *OrderCreateResponse) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.


### SetExternalIdNil

`func (o *OrderCreateResponse) SetExternalIdNil(b bool)`

 SetExternalIdNil sets the value for ExternalId to be an explicit nil

### UnsetExternalId
`func (o *OrderCreateResponse) UnsetExternalId()`

UnsetExternalId ensures that no value is present for ExternalId, not even an explicit nil
### GetExternalIntegrationKey

`func (o *OrderCreateResponse) GetExternalIntegrationKey() string`

GetExternalIntegrationKey returns the ExternalIntegrationKey field if non-nil, zero value otherwise.

### GetExternalIntegrationKeyOk

`func (o *OrderCreateResponse) GetExternalIntegrationKeyOk() (*string, bool)`

GetExternalIntegrationKeyOk returns a tuple with the ExternalIntegrationKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalIntegrationKey

`func (o *OrderCreateResponse) SetExternalIntegrationKey(v string)`

SetExternalIntegrationKey sets ExternalIntegrationKey field to given value.


### GetExternalIntegrationId

`func (o *OrderCreateResponse) GetExternalIntegrationId() string`

GetExternalIntegrationId returns the ExternalIntegrationId field if non-nil, zero value otherwise.

### GetExternalIntegrationIdOk

`func (o *OrderCreateResponse) GetExternalIntegrationIdOk() (*string, bool)`

GetExternalIntegrationIdOk returns a tuple with the ExternalIntegrationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalIntegrationId

`func (o *OrderCreateResponse) SetExternalIntegrationId(v string)`

SetExternalIntegrationId sets ExternalIntegrationId field to given value.


### SetExternalIntegrationIdNil

`func (o *OrderCreateResponse) SetExternalIntegrationIdNil(b bool)`

 SetExternalIntegrationIdNil sets the value for ExternalIntegrationId to be an explicit nil

### UnsetExternalIntegrationId
`func (o *OrderCreateResponse) UnsetExternalIntegrationId()`

UnsetExternalIntegrationId ensures that no value is present for ExternalIntegrationId, not even an explicit nil
### GetAmount

`func (o *OrderCreateResponse) GetAmount() float32`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *OrderCreateResponse) GetAmountOk() (*float32, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *OrderCreateResponse) SetAmount(v float32)`

SetAmount sets Amount field to given value.


### GetCostFee

`func (o *OrderCreateResponse) GetCostFee() float32`

GetCostFee returns the CostFee field if non-nil, zero value otherwise.

### GetCostFeeOk

`func (o *OrderCreateResponse) GetCostFeeOk() (*float32, bool)`

GetCostFeeOk returns a tuple with the CostFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCostFee

`func (o *OrderCreateResponse) SetCostFee(v float32)`

SetCostFee sets CostFee field to given value.


### GetPix

`func (o *OrderCreateResponse) GetPix() OrderPIXInfo`

GetPix returns the Pix field if non-nil, zero value otherwise.

### GetPixOk

`func (o *OrderCreateResponse) GetPixOk() (*OrderPIXInfo, bool)`

GetPixOk returns a tuple with the Pix field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPix

`func (o *OrderCreateResponse) SetPix(v OrderPIXInfo)`

SetPix sets Pix field to given value.

### HasPix

`func (o *OrderCreateResponse) HasPix() bool`

HasPix returns a boolean if a field has been set.

### GetBankSlip

`func (o *OrderCreateResponse) GetBankSlip() OrderBankSlipInfo`

GetBankSlip returns the BankSlip field if non-nil, zero value otherwise.

### GetBankSlipOk

`func (o *OrderCreateResponse) GetBankSlipOk() (*OrderBankSlipInfo, bool)`

GetBankSlipOk returns a tuple with the BankSlip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBankSlip

`func (o *OrderCreateResponse) SetBankSlip(v OrderBankSlipInfo)`

SetBankSlip sets BankSlip field to given value.

### HasBankSlip

`func (o *OrderCreateResponse) HasBankSlip() bool`

HasBankSlip returns a boolean if a field has been set.

### GetNuPay

`func (o *OrderCreateResponse) GetNuPay() OrderNuPayInfo`

GetNuPay returns the NuPay field if non-nil, zero value otherwise.

### GetNuPayOk

`func (o *OrderCreateResponse) GetNuPayOk() (*OrderNuPayInfo, bool)`

GetNuPayOk returns a tuple with the NuPay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNuPay

`func (o *OrderCreateResponse) SetNuPay(v OrderNuPayInfo)`

SetNuPay sets NuPay field to given value.

### HasNuPay

`func (o *OrderCreateResponse) HasNuPay() bool`

HasNuPay returns a boolean if a field has been set.

### GetPicPay

`func (o *OrderCreateResponse) GetPicPay() OrderPicPayInfo`

GetPicPay returns the PicPay field if non-nil, zero value otherwise.

### GetPicPayOk

`func (o *OrderCreateResponse) GetPicPayOk() (*OrderPicPayInfo, bool)`

GetPicPayOk returns a tuple with the PicPay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPicPay

`func (o *OrderCreateResponse) SetPicPay(v OrderPicPayInfo)`

SetPicPay sets PicPay field to given value.

### HasPicPay

`func (o *OrderCreateResponse) HasPicPay() bool`

HasPicPay returns a boolean if a field has been set.

### GetCreditCard

`func (o *OrderCreateResponse) GetCreditCard() OrderCreditCardInfo`

GetCreditCard returns the CreditCard field if non-nil, zero value otherwise.

### GetCreditCardOk

`func (o *OrderCreateResponse) GetCreditCardOk() (*OrderCreditCardInfo, bool)`

GetCreditCardOk returns a tuple with the CreditCard field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreditCard

`func (o *OrderCreateResponse) SetCreditCard(v OrderCreditCardInfo)`

SetCreditCard sets CreditCard field to given value.

### HasCreditCard

`func (o *OrderCreateResponse) HasCreditCard() bool`

HasCreditCard returns a boolean if a field has been set.

### GetStatus

`func (o *OrderCreateResponse) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *OrderCreateResponse) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *OrderCreateResponse) SetStatus(v Status)`

SetStatus sets Status field to given value.


### GetPaymentMethod

`func (o *OrderCreateResponse) GetPaymentMethod() PaymentMethod`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *OrderCreateResponse) GetPaymentMethodOk() (*PaymentMethod, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *OrderCreateResponse) SetPaymentMethod(v PaymentMethod)`

SetPaymentMethod sets PaymentMethod field to given value.


### GetPayedAt

`func (o *OrderCreateResponse) GetPayedAt() string`

GetPayedAt returns the PayedAt field if non-nil, zero value otherwise.

### GetPayedAtOk

`func (o *OrderCreateResponse) GetPayedAtOk() (*string, bool)`

GetPayedAtOk returns a tuple with the PayedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayedAt

`func (o *OrderCreateResponse) SetPayedAt(v string)`

SetPayedAt sets PayedAt field to given value.


### SetPayedAtNil

`func (o *OrderCreateResponse) SetPayedAtNil(b bool)`

 SetPayedAtNil sets the value for PayedAt to be an explicit nil

### UnsetPayedAt
`func (o *OrderCreateResponse) UnsetPayedAt()`

UnsetPayedAt ensures that no value is present for PayedAt, not even an explicit nil
### GetErrorCode

`func (o *OrderCreateResponse) GetErrorCode() string`

GetErrorCode returns the ErrorCode field if non-nil, zero value otherwise.

### GetErrorCodeOk

`func (o *OrderCreateResponse) GetErrorCodeOk() (*string, bool)`

GetErrorCodeOk returns a tuple with the ErrorCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorCode

`func (o *OrderCreateResponse) SetErrorCode(v string)`

SetErrorCode sets ErrorCode field to given value.


### SetErrorCodeNil

`func (o *OrderCreateResponse) SetErrorCodeNil(b bool)`

 SetErrorCodeNil sets the value for ErrorCode to be an explicit nil

### UnsetErrorCode
`func (o *OrderCreateResponse) UnsetErrorCode()`

UnsetErrorCode ensures that no value is present for ErrorCode, not even an explicit nil
### GetErrorMessage

`func (o *OrderCreateResponse) GetErrorMessage() string`

GetErrorMessage returns the ErrorMessage field if non-nil, zero value otherwise.

### GetErrorMessageOk

`func (o *OrderCreateResponse) GetErrorMessageOk() (*string, bool)`

GetErrorMessageOk returns a tuple with the ErrorMessage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorMessage

`func (o *OrderCreateResponse) SetErrorMessage(v string)`

SetErrorMessage sets ErrorMessage field to given value.


### SetErrorMessageNil

`func (o *OrderCreateResponse) SetErrorMessageNil(b bool)`

 SetErrorMessageNil sets the value for ErrorMessage to be an explicit nil

### UnsetErrorMessage
`func (o *OrderCreateResponse) UnsetErrorMessage()`

UnsetErrorMessage ensures that no value is present for ErrorMessage, not even an explicit nil
### GetOrderItems

`func (o *OrderCreateResponse) GetOrderItems() []OrderCreateResponseOrderItemsInner`

GetOrderItems returns the OrderItems field if non-nil, zero value otherwise.

### GetOrderItemsOk

`func (o *OrderCreateResponse) GetOrderItemsOk() (*[]OrderCreateResponseOrderItemsInner, bool)`

GetOrderItemsOk returns a tuple with the OrderItems field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrderItems

`func (o *OrderCreateResponse) SetOrderItems(v []OrderCreateResponseOrderItemsInner)`

SetOrderItems sets OrderItems field to given value.


### GetSession

`func (o *OrderCreateResponse) GetSession() OrderCreateResponseSession`

GetSession returns the Session field if non-nil, zero value otherwise.

### GetSessionOk

`func (o *OrderCreateResponse) GetSessionOk() (*OrderCreateResponseSession, bool)`

GetSessionOk returns a tuple with the Session field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSession

`func (o *OrderCreateResponse) SetSession(v OrderCreateResponseSession)`

SetSession sets Session field to given value.

### HasSession

`func (o *OrderCreateResponse) HasSession() bool`

HasSession returns a boolean if a field has been set.

### SetSessionNil

`func (o *OrderCreateResponse) SetSessionNil(b bool)`

 SetSessionNil sets the value for Session to be an explicit nil

### UnsetSession
`func (o *OrderCreateResponse) UnsetSession()`

UnsetSession ensures that no value is present for Session, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


