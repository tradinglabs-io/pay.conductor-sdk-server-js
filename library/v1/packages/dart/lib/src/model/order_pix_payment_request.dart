//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_pix_payment_request.g.dart';

/// OrderPIXPaymentRequest
///
/// Properties:
/// * [paymentMethod] 
/// * [expirationInSeconds] - PIX expiration time in seconds
@BuiltValue()
abstract class OrderPIXPaymentRequest implements Built<OrderPIXPaymentRequest, OrderPIXPaymentRequestBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  String get paymentMethod;

  /// PIX expiration time in seconds
  @BuiltValueField(wireName: r'expirationInSeconds')
  num? get expirationInSeconds;

  OrderPIXPaymentRequest._();

  factory OrderPIXPaymentRequest([void updates(OrderPIXPaymentRequestBuilder b)]) = _$OrderPIXPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderPIXPaymentRequestBuilder b) => b
      ..expirationInSeconds = 3600;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderPIXPaymentRequest> get serializer => _$OrderPIXPaymentRequestSerializer();
}

class _$OrderPIXPaymentRequestSerializer implements PrimitiveSerializer<OrderPIXPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderPIXPaymentRequest, _$OrderPIXPaymentRequest];

  @override
  final String wireName = r'OrderPIXPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderPIXPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(String),
    );
    if (object.expirationInSeconds != null) {
      yield r'expirationInSeconds';
      yield serializers.serialize(
        object.expirationInSeconds,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderPIXPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderPIXPaymentRequestBuilder result,
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
        case r'expirationInSeconds':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.expirationInSeconds = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderPIXPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderPIXPaymentRequestBuilder();
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

