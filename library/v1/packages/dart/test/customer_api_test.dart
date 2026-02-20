import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for CustomerApi
void main() {
  final instance = Openapi().getCustomerApi();

  group(CustomerApi, () {
    // Create New Customer
    //
    // Create a new customer by providing the required data in the request body.
    //
    //Future<CustomerReadResponse> customerCreate(CustomerCreateRequest customerCreateRequest) async
    test('test customerCreate', () async {
      // TODO
    });

    // Get All Customers
    //
    // Retrieve a list of all customers associated with the organization, with support for filters and pagination.
    //
    //Future<CustomerListResponse> customerListCustom(num page, num pageSize, { String email, String name, DateTime endDate, DateTime startDate }) async
    test('test customerListCustom', () async {
      // TODO
    });

    // Get Customer By ID
    //
    // Retrieve the complete details of a specific customer using their unique ID.
    //
    //Future<CustomerReadResponse> customerRead(String id) async
    test('test customerRead', () async {
      // TODO
    });

    // Update Customer Data
    //
    // Update the information of an existing customer by providing the new data in the request body.
    //
    //Future<CustomerReadResponse> customerUpdate(String id, CustomerUpdateRequest customerUpdateRequest) async
    test('test customerUpdate', () async {
      // TODO
    });

  });
}
