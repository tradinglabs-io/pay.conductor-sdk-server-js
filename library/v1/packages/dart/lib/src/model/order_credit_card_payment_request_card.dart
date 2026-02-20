//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/order_tokenized_card_data.dart';
import 'package:openapi/src/model/card_create_request.dart';
import 'package:openapi/src/model/card_expiration_data.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'order_credit_card_payment_request_card.g.dart';

/// OrderCreditCardPaymentRequestCard
///
/// Properties:
/// * [firstSixCardNumber] - First 6 digits of the credit card
/// * [token] - Previously generated credit card token
/// * [cvv] - Card security code (CVV)
/// * [expiration] 
/// * [holderName] - Card holder name
/// * [number] - Credit card number
@BuiltValue()
abstract class OrderCreditCardPaymentRequestCard implements Built<OrderCreditCardPaymentRequestCard, OrderCreditCardPaymentRequestCardBuilder> {
  /// One Of [CardCreateRequest], [OrderTokenizedCardData]
  OneOf get oneOf;

  OrderCreditCardPaymentRequestCard._();

  factory OrderCreditCardPaymentRequestCard([void updates(OrderCreditCardPaymentRequestCardBuilder b)]) = _$OrderCreditCardPaymentRequestCard;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderCreditCardPaymentRequestCardBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderCreditCardPaymentRequestCard> get serializer => _$OrderCreditCardPaymentRequestCardSerializer();
}

class _$OrderCreditCardPaymentRequestCardSerializer implements PrimitiveSerializer<OrderCreditCardPaymentRequestCard> {
  @override
  final Iterable<Type> types = const [OrderCreditCardPaymentRequestCard, _$OrderCreditCardPaymentRequestCard];

  @override
  final String wireName = r'OrderCreditCardPaymentRequestCard';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderCreditCardPaymentRequestCard object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderCreditCardPaymentRequestCard object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  OrderCreditCardPaymentRequestCard deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderCreditCardPaymentRequestCardBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(OrderTokenizedCardData), FullType(CardCreateRequest), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

