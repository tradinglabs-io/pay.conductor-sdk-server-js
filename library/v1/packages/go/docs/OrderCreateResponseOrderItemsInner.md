# OrderCreateResponseOrderItemsInner

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ExternalId** | **NullableString** | External item ID | 
**Id** | **string** | Item ID in the order | 
**Name** | **string** | Product/service name | 
**Qty** | **float32** | Quantity | 
**TotalAmount** | **float32** | Total item amount (quantity × unit price) | 
**TotalNetAmount** | **float32** | Total net amount of the item | 
**UnityPrice** | **float32** | Unit price | 

## Methods

### NewOrderCreateResponseOrderItemsInner

`func NewOrderCreateResponseOrderItemsInner(externalId NullableString, id string, name string, qty float32, totalAmount float32, totalNetAmount float32, unityPrice float32, ) *OrderCreateResponseOrderItemsInner`

NewOrderCreateResponseOrderItemsInner instantiates a new OrderCreateResponseOrderItemsInner object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderCreateResponseOrderItemsInnerWithDefaults

`func NewOrderCreateResponseOrderItemsInnerWithDefaults() *OrderCreateResponseOrderItemsInner`

NewOrderCreateResponseOrderItemsInnerWithDefaults instantiates a new OrderCreateResponseOrderItemsInner object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetExternalId

`func (o *OrderCreateResponseOrderItemsInner) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *OrderCreateResponseOrderItemsInner) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *OrderCreateResponseOrderItemsInner) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.


### SetExternalIdNil

`func (o *OrderCreateResponseOrderItemsInner) SetExternalIdNil(b bool)`

 SetExternalIdNil sets the value for ExternalId to be an explicit nil

### UnsetExternalId
`func (o *OrderCreateResponseOrderItemsInner) UnsetExternalId()`

UnsetExternalId ensures that no value is present for ExternalId, not even an explicit nil
### GetId

`func (o *OrderCreateResponseOrderItemsInner) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *OrderCreateResponseOrderItemsInner) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *OrderCreateResponseOrderItemsInner) SetId(v string)`

SetId sets Id field to given value.


### GetName

`func (o *OrderCreateResponseOrderItemsInner) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *OrderCreateResponseOrderItemsInner) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *OrderCreateResponseOrderItemsInner) SetName(v string)`

SetName sets Name field to given value.


### GetQty

`func (o *OrderCreateResponseOrderItemsInner) GetQty() float32`

GetQty returns the Qty field if non-nil, zero value otherwise.

### GetQtyOk

`func (o *OrderCreateResponseOrderItemsInner) GetQtyOk() (*float32, bool)`

GetQtyOk returns a tuple with the Qty field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQty

`func (o *OrderCreateResponseOrderItemsInner) SetQty(v float32)`

SetQty sets Qty field to given value.


### GetTotalAmount

`func (o *OrderCreateResponseOrderItemsInner) GetTotalAmount() float32`

GetTotalAmount returns the TotalAmount field if non-nil, zero value otherwise.

### GetTotalAmountOk

`func (o *OrderCreateResponseOrderItemsInner) GetTotalAmountOk() (*float32, bool)`

GetTotalAmountOk returns a tuple with the TotalAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalAmount

`func (o *OrderCreateResponseOrderItemsInner) SetTotalAmount(v float32)`

SetTotalAmount sets TotalAmount field to given value.


### GetTotalNetAmount

`func (o *OrderCreateResponseOrderItemsInner) GetTotalNetAmount() float32`

GetTotalNetAmount returns the TotalNetAmount field if non-nil, zero value otherwise.

### GetTotalNetAmountOk

`func (o *OrderCreateResponseOrderItemsInner) GetTotalNetAmountOk() (*float32, bool)`

GetTotalNetAmountOk returns a tuple with the TotalNetAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalNetAmount

`func (o *OrderCreateResponseOrderItemsInner) SetTotalNetAmount(v float32)`

SetTotalNetAmount sets TotalNetAmount field to given value.


### GetUnityPrice

`func (o *OrderCreateResponseOrderItemsInner) GetUnityPrice() float32`

GetUnityPrice returns the UnityPrice field if non-nil, zero value otherwise.

### GetUnityPriceOk

`func (o *OrderCreateResponseOrderItemsInner) GetUnityPriceOk() (*float32, bool)`

GetUnityPriceOk returns a tuple with the UnityPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnityPrice

`func (o *OrderCreateResponseOrderItemsInner) SetUnityPrice(v float32)`

SetUnityPrice sets UnityPrice field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


