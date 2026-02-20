# CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CustomerCreate**](CustomerApi.md#CustomerCreate) | **POST** /customers/ | Create New Customer
[**CustomerListCustom**](CustomerApi.md#CustomerListCustom) | **GET** /customers/ | Get All Customers
[**CustomerRead**](CustomerApi.md#CustomerRead) | **GET** /customers/{id} | Get Customer By ID
[**CustomerUpdate**](CustomerApi.md#CustomerUpdate) | **PATCH** /customers/{id} | Update Customer Data


# **CustomerCreate**
> CustomerReadResponse CustomerCreate(customer_create_request)

Create New Customer

Create a new customer by providing the required data in the request body.

### Example
```R
library(payconductor_sdk)

# Create New Customer
#
# prepare function argument(s)
var_customer_create_request <- Customer_Create_Request$new("documentNumber_example", DocumentType$new(), "email_example", "name_example", Address_Create_Request$new("city_example", "country_example", "neighborhood_example", "number_example", "state_example", "street_example", "zipCode_example"), "phoneNumber_example") # CustomerCreateRequest | Schema for creating a new customer

api_instance <- CustomerApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CustomerCreate(var_customer_create_requestdata_file = "result.txt")
result <- api_instance$CustomerCreate(var_customer_create_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **customer_create_request** | [**CustomerCreateRequest**](CustomerCreateRequest.md)| Schema for creating a new customer | 

### Return type

[**CustomerReadResponse**](Customer_Read_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Customer response with complete information |  -  |

# **CustomerListCustom**
> CustomerListResponse CustomerListCustom(page, page_size, email = var.email, name = var.name, end_date = var.end_date, start_date = var.start_date)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example
```R
library(payconductor_sdk)

# Get All Customers
#
# prepare function argument(s)
var_page <- 1 # numeric | 
var_page_size <- 20 # numeric | 
var_email <- "email_example" # character |  (Optional)
var_name <- "name_example" # character |  (Optional)
var_end_date <- "end_date_example" # character |  (Optional)
var_start_date <- "start_date_example" # character |  (Optional)

api_instance <- CustomerApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CustomerListCustom(var_page, var_page_size, email = var_email, name = var_name, end_date = var_end_date, start_date = var_start_datedata_file = "result.txt")
result <- api_instance$CustomerListCustom(var_page, var_page_size, email = var_email, name = var_name, end_date = var_end_date, start_date = var_start_date)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **numeric**|  | [default to 1]
 **page_size** | **numeric**|  | [default to 20]
 **email** | **character**|  | [optional] 
 **name** | **character**|  | [optional] 
 **end_date** | **character**|  | [optional] 
 **start_date** | **character**|  | [optional] 

### Return type

[**CustomerListResponse**](Customer_List_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Paginated list of customers |  -  |

# **CustomerRead**
> CustomerReadResponse CustomerRead(id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example
```R
library(payconductor_sdk)

# Get Customer By ID
#
# prepare function argument(s)
var_id <- "id_example" # character | 

api_instance <- CustomerApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CustomerRead(var_iddata_file = "result.txt")
result <- api_instance$CustomerRead(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**|  | 

### Return type

[**CustomerReadResponse**](Customer_Read_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Customer response with complete information |  -  |

# **CustomerUpdate**
> CustomerReadResponse CustomerUpdate(id, customer_update_request)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example
```R
library(payconductor_sdk)

# Update Customer Data
#
# prepare function argument(s)
var_id <- "id_example" # character | 
var_customer_update_request <- Customer_Update_Request$new(Address_Create_Request$new("city_example", "country_example", "neighborhood_example", "number_example", "state_example", "street_example", "zipCode_example"), "documentNumber_example", DocumentType$new(), "email_example", "name_example", "phoneNumber_example") # CustomerUpdateRequest | Schema for updating customer information

api_instance <- CustomerApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CustomerUpdate(var_id, var_customer_update_requestdata_file = "result.txt")
result <- api_instance$CustomerUpdate(var_id, var_customer_update_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**|  | 
 **customer_update_request** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md)| Schema for updating customer information | 

### Return type

[**CustomerReadResponse**](Customer_Read_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Customer response with complete information |  -  |

