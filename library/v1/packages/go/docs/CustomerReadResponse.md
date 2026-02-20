# CustomerReadResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Unique customer identifier | 
**Name** | **string** | Customer full name | 
**Email** | **string** | Customer email | 
**DocumentType** | [**DocumentType**](DocumentType.md) |  | 
**DocumentNumber** | **NullableString** | Customer CPF or CNPJ without formatting | 
**PhoneNumber** | **NullableString** | Customer phone number in +55 DD 9XXXXXXXX format | 
**Address** | [**NullableCustomerAddressResponse**](CustomerAddressResponse.md) |  | 
**CreatedAt** | **string** | Date and time when the customer was created (ISO 8601 format) | 
**UpdatedAt** | **string** | Date and time when the customer was last updated (ISO 8601 format) | 

## Methods

### NewCustomerReadResponse

`func NewCustomerReadResponse(id string, name string, email string, documentType DocumentType, documentNumber NullableString, phoneNumber NullableString, address NullableCustomerAddressResponse, createdAt string, updatedAt string, ) *CustomerReadResponse`

NewCustomerReadResponse instantiates a new CustomerReadResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCustomerReadResponseWithDefaults

`func NewCustomerReadResponseWithDefaults() *CustomerReadResponse`

NewCustomerReadResponseWithDefaults instantiates a new CustomerReadResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *CustomerReadResponse) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *CustomerReadResponse) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *CustomerReadResponse) SetId(v string)`

SetId sets Id field to given value.


### GetName

`func (o *CustomerReadResponse) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *CustomerReadResponse) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *CustomerReadResponse) SetName(v string)`

SetName sets Name field to given value.


### GetEmail

`func (o *CustomerReadResponse) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *CustomerReadResponse) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *CustomerReadResponse) SetEmail(v string)`

SetEmail sets Email field to given value.


### GetDocumentType

`func (o *CustomerReadResponse) GetDocumentType() DocumentType`

GetDocumentType returns the DocumentType field if non-nil, zero value otherwise.

### GetDocumentTypeOk

`func (o *CustomerReadResponse) GetDocumentTypeOk() (*DocumentType, bool)`

GetDocumentTypeOk returns a tuple with the DocumentType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentType

`func (o *CustomerReadResponse) SetDocumentType(v DocumentType)`

SetDocumentType sets DocumentType field to given value.


### GetDocumentNumber

`func (o *CustomerReadResponse) GetDocumentNumber() string`

GetDocumentNumber returns the DocumentNumber field if non-nil, zero value otherwise.

### GetDocumentNumberOk

`func (o *CustomerReadResponse) GetDocumentNumberOk() (*string, bool)`

GetDocumentNumberOk returns a tuple with the DocumentNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentNumber

`func (o *CustomerReadResponse) SetDocumentNumber(v string)`

SetDocumentNumber sets DocumentNumber field to given value.


### SetDocumentNumberNil

`func (o *CustomerReadResponse) SetDocumentNumberNil(b bool)`

 SetDocumentNumberNil sets the value for DocumentNumber to be an explicit nil

### UnsetDocumentNumber
`func (o *CustomerReadResponse) UnsetDocumentNumber()`

UnsetDocumentNumber ensures that no value is present for DocumentNumber, not even an explicit nil
### GetPhoneNumber

`func (o *CustomerReadResponse) GetPhoneNumber() string`

GetPhoneNumber returns the PhoneNumber field if non-nil, zero value otherwise.

### GetPhoneNumberOk

`func (o *CustomerReadResponse) GetPhoneNumberOk() (*string, bool)`

GetPhoneNumberOk returns a tuple with the PhoneNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhoneNumber

`func (o *CustomerReadResponse) SetPhoneNumber(v string)`

SetPhoneNumber sets PhoneNumber field to given value.


### SetPhoneNumberNil

`func (o *CustomerReadResponse) SetPhoneNumberNil(b bool)`

 SetPhoneNumberNil sets the value for PhoneNumber to be an explicit nil

### UnsetPhoneNumber
`func (o *CustomerReadResponse) UnsetPhoneNumber()`

UnsetPhoneNumber ensures that no value is present for PhoneNumber, not even an explicit nil
### GetAddress

`func (o *CustomerReadResponse) GetAddress() CustomerAddressResponse`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *CustomerReadResponse) GetAddressOk() (*CustomerAddressResponse, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *CustomerReadResponse) SetAddress(v CustomerAddressResponse)`

SetAddress sets Address field to given value.


### SetAddressNil

`func (o *CustomerReadResponse) SetAddressNil(b bool)`

 SetAddressNil sets the value for Address to be an explicit nil

### UnsetAddress
`func (o *CustomerReadResponse) UnsetAddress()`

UnsetAddress ensures that no value is present for Address, not even an explicit nil
### GetCreatedAt

`func (o *CustomerReadResponse) GetCreatedAt() string`

GetCreatedAt returns the CreatedAt field if non-nil, zero value otherwise.

### GetCreatedAtOk

`func (o *CustomerReadResponse) GetCreatedAtOk() (*string, bool)`

GetCreatedAtOk returns a tuple with the CreatedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreatedAt

`func (o *CustomerReadResponse) SetCreatedAt(v string)`

SetCreatedAt sets CreatedAt field to given value.


### GetUpdatedAt

`func (o *CustomerReadResponse) GetUpdatedAt() string`

GetUpdatedAt returns the UpdatedAt field if non-nil, zero value otherwise.

### GetUpdatedAtOk

`func (o *CustomerReadResponse) GetUpdatedAtOk() (*string, bool)`

GetUpdatedAtOk returns a tuple with the UpdatedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpdatedAt

`func (o *CustomerReadResponse) SetUpdatedAt(v string)`

SetUpdatedAt sets UpdatedAt field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


