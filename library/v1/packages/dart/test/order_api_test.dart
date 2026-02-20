import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for OrderApi
void main() {
  final instance = Openapi().getOrderApi();

  group(OrderApi, () {
    // Confirm Order
    //
    // Confirms a Draft order, setting the payment method and processing the charges associated with the order.
    //
    //Future<OrderConfirmResponse> orderConfirm(String id, OrderPaymentRequest orderPaymentRequest) async
    test('test orderConfirm', () async {
      // TODO
    });

    // Create Order
    //
    // Create a new order for payment using the provided data
    //
    //Future<OrderCreateResponse> orderCreate(OrderCreateRequest orderCreateRequest) async
    test('test orderCreate', () async {
      // TODO
    });

    // List Orders
    //
    // Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.
    //
    //Future orderList(num page, num pageSize, { DateTime endDate, DateTime startDate, String id, String status }) async
    test('test orderList', () async {
      // TODO
    });

    // Get Order By ID
    //
    // Retrieve the complete data of an order by our ID
    //
    //Future orderRead(String id) async
    test('test orderRead', () async {
      // TODO
    });

    // Refund Order
    //
    // Initiate a refund for the order specified by ID.
    //
    //Future orderRefund(String id) async
    test('test orderRefund', () async {
      // TODO
    });

  });
}
