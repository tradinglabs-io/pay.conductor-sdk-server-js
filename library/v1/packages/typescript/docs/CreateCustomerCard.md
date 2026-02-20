# CreateCustomerCard

Data for creating a customer card with customer information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**card** | [**CreateCardData**](CreateCardData.md) |  | [default to undefined]
**saveCard** | **boolean** | Indicates if the card should be saved for future use | [default to undefined]
**customer** | [**CreateCustomerCardCustomer**](CreateCustomerCardCustomer.md) |  | [default to undefined]

## Example

```typescript
import { CreateCustomerCard } from 'payconductor-sdk';

const instance: CreateCustomerCard = {
    card,
    saveCard,
    customer,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
