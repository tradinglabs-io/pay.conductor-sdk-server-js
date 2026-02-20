//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/payment_method.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_pic_pay_payment_request.g.dart';

/// OrderPicPayPaymentRequest
///
/// Properties:
/// * [paymentMethod] 
@BuiltValue()
abstract class OrderPicPayPaymentRequest implements Built<OrderPicPayPaymentRequest, OrderPicPayPaymentRequestBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  PaymentMethod get paymentMethod;
  // enum paymentMethodEnum {  Pix,  CreditCard,  DebitCard,  BankSlip,  Crypto,  ApplePay,  NuPay,  PicPay,  AmazonPay,  SepaDebit,  GooglePay,  Draft,  };

  OrderPicPayPaymentRequest._();

  factory OrderPicPayPaymentRequest([void updates(OrderPicPayPaymentRequestBuilder b)]) = _$OrderPicPayPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderPicPayPaymentRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderPicPayPaymentRequest> get serializer => _$OrderPicPayPaymentRequestSerializer();
}

class _$OrderPicPayPaymentRequestSerializer implements PrimitiveSerializer<OrderPicPayPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderPicPayPaymentRequest, _$OrderPicPayPaymentRequest];

  @override
  final String wireName = r'OrderPicPayPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderPicPayPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(PaymentMethod),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderPicPayPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderPicPayPaymentRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'paymentMethod':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PaymentMethod),
          ) as PaymentMethod;
          result.paymentMethod = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderPicPayPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderPicPayPaymentRequestBuilder();
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

