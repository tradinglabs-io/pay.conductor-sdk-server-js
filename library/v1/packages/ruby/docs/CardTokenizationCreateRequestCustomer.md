# OpenapiClient::CardTokenizationCreateRequestCustomer

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::CardTokenizationCreateRequestCustomer.openapi_one_of
# =>
# [
#   :'CardTokenizationCustomerByIdData',
#   :'CustomerCreateRequest'
# ]
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::CardTokenizationCreateRequestCustomer.build(data)
# => #<CardTokenizationCustomerByIdData:0x00007fdd4aab02a0>

OpenapiClient::CardTokenizationCreateRequestCustomer.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `CardTokenizationCustomerByIdData`
- `CustomerCreateRequest`
- `nil` (if no type matches)

