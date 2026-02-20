import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for OrderPaymentRequest
void main() {
  final instance = OrderPaymentRequestBuilder();
  // TODO add properties to the builder and call build()

  group(OrderPaymentRequest, () {
    // PaymentMethod paymentMethod
    test('to test the property `paymentMethod`', () async {
      // TODO
    });

    // Order expiration time in seconds
    // num expirationInSeconds (default value: 3600)
    test('to test the property `expirationInSeconds`', () async {
      // TODO
    });

    // OrderCreditCardPaymentRequestCard card
    test('to test the property `card`', () async {
      // TODO
    });

    // Number of installments
    // num installments (default value: 1)
    test('to test the property `installments`', () async {
      // TODO
    });

    // Text that will appear on the card statement (soft descriptor)
    // String softDescriptor
    test('to test the property `softDescriptor`', () async {
      // TODO
    });

    // Days until bank slip expires
    // num expirationInDays (default value: 7)
    test('to test the property `expirationInDays`', () async {
      // TODO
    });

    // OrderNuPayPaymentRequestNuPay nuPay
    test('to test the property `nuPay`', () async {
      // TODO
    });

    // Available payment methods for this order
    // BuiltList<AvailablePaymentMethods> availablePaymentMethods
    test('to test the property `availablePaymentMethods`', () async {
      // TODO
    });

  });
}
