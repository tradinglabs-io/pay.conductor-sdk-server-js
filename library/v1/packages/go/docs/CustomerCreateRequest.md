# CustomerCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Address** | Pointer to [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] 
**DocumentNumber** | **string** | Customer CPF or CNPJ without formatting | 
**DocumentType** | [**DocumentType**](DocumentType.md) |  | 
**Email** | **string** | Customer email | 
**Name** | **string** | Customer full name | 
**PhoneNumber** | Pointer to **string** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] 

## Methods

### NewCustomerCreateRequest

`func NewCustomerCreateRequest(documentNumber string, documentType DocumentType, email string, name string, ) *CustomerCreateRequest`

NewCustomerCreateRequest instantiates a new CustomerCreateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCustomerCreateRequestWithDefaults

`func NewCustomerCreateRequestWithDefaults() *CustomerCreateRequest`

NewCustomerCreateRequestWithDefaults instantiates a new CustomerCreateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAddress

`func (o *CustomerCreateRequest) GetAddress() AddressCreateRequest`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *CustomerCreateRequest) GetAddressOk() (*AddressCreateRequest, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *CustomerCreateRequest) SetAddress(v AddressCreateRequest)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *CustomerCreateRequest) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetDocumentNumber

`func (o *CustomerCreateRequest) GetDocumentNumber() string`

GetDocumentNumber returns the DocumentNumber field if non-nil, zero value otherwise.

### GetDocumentNumberOk

`func (o *CustomerCreateRequest) GetDocumentNumberOk() (*string, bool)`

GetDocumentNumberOk returns a tuple with the DocumentNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentNumber

`func (o *CustomerCreateRequest) SetDocumentNumber(v string)`

SetDocumentNumber sets DocumentNumber field to given value.


### GetDocumentType

`func (o *CustomerCreateRequest) GetDocumentType() DocumentType`

GetDocumentType returns the DocumentType field if non-nil, zero value otherwise.

### GetDocumentTypeOk

`func (o *CustomerCreateRequest) GetDocumentTypeOk() (*DocumentType, bool)`

GetDocumentTypeOk returns a tuple with the DocumentType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentType

`func (o *CustomerCreateRequest) SetDocumentType(v DocumentType)`

SetDocumentType sets DocumentType field to given value.


### GetEmail

`func (o *CustomerCreateRequest) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *CustomerCreateRequest) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *CustomerCreateRequest) SetEmail(v string)`

SetEmail sets Email field to given value.


### GetName

`func (o *CustomerCreateRequest) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *CustomerCreateRequest) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *CustomerCreateRequest) SetName(v string)`

SetName sets Name field to given value.


### GetPhoneNumber

`func (o *CustomerCreateRequest) GetPhoneNumber() string`

GetPhoneNumber returns the PhoneNumber field if non-nil, zero value otherwise.

### GetPhoneNumberOk

`func (o *CustomerCreateRequest) GetPhoneNumberOk() (*string, bool)`

GetPhoneNumberOk returns a tuple with the PhoneNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhoneNumber

`func (o *CustomerCreateRequest) SetPhoneNumber(v string)`

SetPhoneNumber sets PhoneNumber field to given value.

### HasPhoneNumber

`func (o *CustomerCreateRequest) HasPhoneNumber() bool`

HasPhoneNumber returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


