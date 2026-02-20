# OrderItemData

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Product or service ID in your system | 
**IsPhysical** | **bool** | Defines if the item is a physical product or a service | [default to false]
**Name** | **string** | Product or service name | 
**Qty** | **float32** | Quantity of the product or service | 
**UnitPrice** | **float32** | Unit price | 

## Methods

### NewOrderItemData

`func NewOrderItemData(id string, isPhysical bool, name string, qty float32, unitPrice float32, ) *OrderItemData`

NewOrderItemData instantiates a new OrderItemData object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderItemDataWithDefaults

`func NewOrderItemDataWithDefaults() *OrderItemData`

NewOrderItemDataWithDefaults instantiates a new OrderItemData object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *OrderItemData) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *OrderItemData) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *OrderItemData) SetId(v string)`

SetId sets Id field to given value.


### GetIsPhysical

`func (o *OrderItemData) GetIsPhysical() bool`

GetIsPhysical returns the IsPhysical field if non-nil, zero value otherwise.

### GetIsPhysicalOk

`func (o *OrderItemData) GetIsPhysicalOk() (*bool, bool)`

GetIsPhysicalOk returns a tuple with the IsPhysical field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPhysical

`func (o *OrderItemData) SetIsPhysical(v bool)`

SetIsPhysical sets IsPhysical field to given value.


### GetName

`func (o *OrderItemData) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *OrderItemData) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *OrderItemData) SetName(v string)`

SetName sets Name field to given value.


### GetQty

`func (o *OrderItemData) GetQty() float32`

GetQty returns the Qty field if non-nil, zero value otherwise.

### GetQtyOk

`func (o *OrderItemData) GetQtyOk() (*float32, bool)`

GetQtyOk returns a tuple with the Qty field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQty

`func (o *OrderItemData) SetQty(v float32)`

SetQty sets Qty field to given value.


### GetUnitPrice

`func (o *OrderItemData) GetUnitPrice() float32`

GetUnitPrice returns the UnitPrice field if non-nil, zero value otherwise.

### GetUnitPriceOk

`func (o *OrderItemData) GetUnitPriceOk() (*float32, bool)`

GetUnitPriceOk returns a tuple with the UnitPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitPrice

`func (o *OrderItemData) SetUnitPrice(v float32)`

SetUnitPrice sets UnitPrice field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


