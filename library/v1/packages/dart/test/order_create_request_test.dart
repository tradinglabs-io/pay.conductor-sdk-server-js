import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for OrderCreateRequest
void main() {
  final instance = OrderCreateRequestBuilder();
  // TODO add properties to the builder and call build()

  group(OrderCreateRequest, () {
    // Total amount to be charged on the order in floating point value
    // num chargeAmount
    test('to test the property `chargeAmount`', () async {
      // TODO
    });

    // Client IP address
    // String clientIp
    test('to test the property `clientIp`', () async {
      // TODO
    });

    // CustomerCreateRequest customer
    test('to test the property `customer`', () async {
      // TODO
    });

    // Discount amount
    // num discountAmount (default value: 0)
    test('to test the property `discountAmount`', () async {
      // TODO
    });

    // Order ID in your system
    // String externalId
    test('to test the property `externalId`', () async {
      // TODO
    });

    // OrderFraudFingerprints fingerprints
    test('to test the property `fingerprints`', () async {
      // TODO
    });

    // List of products or services in the order
    // BuiltList<OrderItemData> items
    test('to test the property `items`', () async {
      // TODO
    });

    // MerchantInput merchant
    test('to test the property `merchant`', () async {
      // TODO
    });

    // OrderPaymentRequest payment
    test('to test the property `payment`', () async {
      // TODO
    });

    // Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split)
    // num splitAmountTotal
    test('to test the property `splitAmountTotal`', () async {
      // TODO
    });

    // OrderCreateRequestSession session
    test('to test the property `session`', () async {
      // TODO
    });

    // Shipping fee
    // num shippingFee (default value: 0)
    test('to test the property `shippingFee`', () async {
      // TODO
    });

    // Additional fees
    // num taxFee (default value: 0)
    test('to test the property `taxFee`', () async {
      // TODO
    });

    // Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters
    // JsonObject metadata
    test('to test the property `metadata`', () async {
      // TODO
    });

  });
}
