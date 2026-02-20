//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/order_nu_pay_payment_request_nu_pay.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_nu_pay_payment_request.g.dart';

/// OrderNuPayPaymentRequest
///
/// Properties:
/// * [paymentMethod] 
/// * [nuPay] 
@BuiltValue()
abstract class OrderNuPayPaymentRequest implements Built<OrderNuPayPaymentRequest, OrderNuPayPaymentRequestBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  String get paymentMethod;

  @BuiltValueField(wireName: r'nuPay')
  OrderNuPayPaymentRequestNuPay get nuPay;

  OrderNuPayPaymentRequest._();

  factory OrderNuPayPaymentRequest([void updates(OrderNuPayPaymentRequestBuilder b)]) = _$OrderNuPayPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderNuPayPaymentRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderNuPayPaymentRequest> get serializer => _$OrderNuPayPaymentRequestSerializer();
}

class _$OrderNuPayPaymentRequestSerializer implements PrimitiveSerializer<OrderNuPayPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderNuPayPaymentRequest, _$OrderNuPayPaymentRequest];

  @override
  final String wireName = r'OrderNuPayPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderNuPayPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(String),
    );
    yield r'nuPay';
    yield serializers.serialize(
      object.nuPay,
      specifiedType: const FullType(OrderNuPayPaymentRequestNuPay),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderNuPayPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderNuPayPaymentRequestBuilder result,
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
        case r'nuPay':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderNuPayPaymentRequestNuPay),
          ) as OrderNuPayPaymentRequestNuPay;
          result.nuPay.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderNuPayPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderNuPayPaymentRequestBuilder();
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

