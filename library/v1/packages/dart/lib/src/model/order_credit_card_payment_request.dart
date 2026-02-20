//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/order_credit_card_payment_request_card.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_credit_card_payment_request.g.dart';

/// OrderCreditCardPaymentRequest
///
/// Properties:
/// * [paymentMethod] 
/// * [card] 
/// * [installments] - Number of installments
/// * [softDescriptor] - Text that will appear on the card statement (soft descriptor)
@BuiltValue()
abstract class OrderCreditCardPaymentRequest implements Built<OrderCreditCardPaymentRequest, OrderCreditCardPaymentRequestBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  String get paymentMethod;

  @BuiltValueField(wireName: r'card')
  OrderCreditCardPaymentRequestCard get card;

  /// Number of installments
  @BuiltValueField(wireName: r'installments')
  num get installments;

  /// Text that will appear on the card statement (soft descriptor)
  @BuiltValueField(wireName: r'softDescriptor')
  String? get softDescriptor;

  OrderCreditCardPaymentRequest._();

  factory OrderCreditCardPaymentRequest([void updates(OrderCreditCardPaymentRequestBuilder b)]) = _$OrderCreditCardPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderCreditCardPaymentRequestBuilder b) => b
      ..installments = 1;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderCreditCardPaymentRequest> get serializer => _$OrderCreditCardPaymentRequestSerializer();
}

class _$OrderCreditCardPaymentRequestSerializer implements PrimitiveSerializer<OrderCreditCardPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderCreditCardPaymentRequest, _$OrderCreditCardPaymentRequest];

  @override
  final String wireName = r'OrderCreditCardPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderCreditCardPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(String),
    );
    yield r'card';
    yield serializers.serialize(
      object.card,
      specifiedType: const FullType(OrderCreditCardPaymentRequestCard),
    );
    yield r'installments';
    yield serializers.serialize(
      object.installments,
      specifiedType: const FullType(num),
    );
    if (object.softDescriptor != null) {
      yield r'softDescriptor';
      yield serializers.serialize(
        object.softDescriptor,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderCreditCardPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderCreditCardPaymentRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'paymentMethod':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.paymentMethod = valueDes;
          break;
        case r'card':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderCreditCardPaymentRequestCard),
          ) as OrderCreditCardPaymentRequestCard;
          result.card.replace(valueDes);
          break;
        case r'installments':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.installments = valueDes;
          break;
        case r'softDescriptor':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.softDescriptor = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderCreditCardPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderCreditCardPaymentRequestBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

