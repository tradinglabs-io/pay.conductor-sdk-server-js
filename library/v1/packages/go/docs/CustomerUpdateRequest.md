# CustomerUpdateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Address** | Pointer to [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] 
**DocumentNumber** | Pointer to **string** | Customer CPF or CNPJ without formatting | [optional] 
**DocumentType** | Pointer to [**DocumentType**](DocumentType.md) |  | [optional] 
**Email** | Pointer to **string** | Customer email | [optional] 
**Name** | Pointer to **string** | Customer full name | [optional] 
**PhoneNumber** | Pointer to **string** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] 

## Methods

### NewCustomerUpdateRequest

`func NewCustomerUpdateRequest() *CustomerUpdateRequest`

NewCustomerUpdateRequest instantiates a new CustomerUpdateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCustomerUpdateRequestWithDefaults

`func NewCustomerUpdateRequestWithDefaults() *CustomerUpdateRequest`

NewCustomerUpdateRequestWithDefaults instantiates a new CustomerUpdateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAddress

`func (o *CustomerUpdateRequest) GetAddress() AddressCreateRequest`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *CustomerUpdateRequest) GetAddressOk() (*AddressCreateRequest, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *CustomerUpdateRequest) SetAddress(v AddressCreateRequest)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *CustomerUpdateRequest) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetDocumentNumber

`func (o *CustomerUpdateRequest) GetDocumentNumber() string`

GetDocumentNumber returns the DocumentNumber field if non-nil, zero value otherwise.

### GetDocumentNumberOk

`func (o *CustomerUpdateRequest) GetDocumentNumberOk() (*string, bool)`

GetDocumentNumberOk returns a tuple with the DocumentNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentNumber

`func (o *CustomerUpdateRequest) SetDocumentNumber(v string)`

SetDocumentNumber sets DocumentNumber field to given value.

### HasDocumentNumber

`func (o *CustomerUpdateRequest) HasDocumentNumber() bool`

HasDocumentNumber returns a boolean if a field has been set.

### GetDocumentType

`func (o *CustomerUpdateRequest) GetDocumentType() DocumentType`

GetDocumentType returns the DocumentType field if non-nil, zero value otherwise.

### GetDocumentTypeOk

`func (o *CustomerUpdateRequest) GetDocumentTypeOk() (*DocumentType, bool)`

GetDocumentTypeOk returns a tuple with the DocumentType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentType

`func (o *CustomerUpdateRequest) SetDocumentType(v DocumentType)`

SetDocumentType sets DocumentType field to given value.

### HasDocumentType

`func (o *CustomerUpdateRequest) HasDocumentType() bool`

HasDocumentType returns a boolean if a field has been set.

### GetEmail

`func (o *CustomerUpdateRequest) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *CustomerUpdateRequest) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *CustomerUpdateRequest) SetEmail(v string)`

SetEmail sets Email field to given value.

### HasEmail

`func (o *CustomerUpdateRequest) HasEmail() bool`

HasEmail returns a boolean if a field has been set.

### GetName

`func (o *CustomerUpdateRequest) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *CustomerUpdateRequest) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *CustomerUpdateRequest) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *CustomerUpdateRequest) HasName() bool`

HasName returns a boolean if a field has been set.

### GetPhoneNumber

`func (o *CustomerUpdateRequest) GetPhoneNumber() string`

GetPhoneNumber returns the PhoneNumber field if non-nil, zero value otherwise.

### GetPhoneNumberOk

`func (o *CustomerUpdateRequest) GetPhoneNumberOk() (*string, bool)`

GetPhoneNumberOk returns a tuple with the PhoneNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhoneNumber

`func (o *CustomerUpdateRequest) SetPhoneNumber(v string)`

SetPhoneNumber sets PhoneNumber field to given value.

### HasPhoneNumber

`func (o *CustomerUpdateRequest) HasPhoneNumber() bool`

HasPhoneNumber returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


