# CustomerListResponse

Paginated list of customers

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**data** | [**Array&lt;CustomerResponse&gt;**](CustomerResponse.md) | List of customers | [default to undefined]
**pagination** | [**CustomerPagination**](CustomerPagination.md) |  | [default to undefined]

## Example

```typescript
import { CustomerListResponse } from 'payconductor-sdk';

const instance: CustomerListResponse = {
    data,
    pagination,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
