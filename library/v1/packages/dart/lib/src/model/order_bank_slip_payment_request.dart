//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/payment_method.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_bank_slip_payment_request.g.dart';

/// OrderBankSlipPaymentRequest
///
/// Properties:
/// * [paymentMethod] 
/// * [expirationInDays] - Days until bank slip expires
@BuiltValue()
abstract class OrderBankSlipPaymentRequest implements Built<OrderBankSlipPaymentRequest, OrderBankSlipPaymentRequestBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  PaymentMethod get paymentMethod;
  // enum paymentMethodEnum {  Pix,  CreditCard,  DebitCard,  BankSlip,  Crypto,  ApplePay,  NuPay,  PicPay,  AmazonPay,  SepaDebit,  GooglePay,  Draft,  };

  /// Days until bank slip expires
  @BuiltValueField(wireName: r'expirationInDays')
  num? get expirationInDays;

  OrderBankSlipPaymentRequest._();

  factory OrderBankSlipPaymentRequest([void updates(OrderBankSlipPaymentRequestBuilder b)]) = _$OrderBankSlipPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderBankSlipPaymentRequestBuilder b) => b
      ..expirationInDays = 7;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderBankSlipPaymentRequest> get serializer => _$OrderBankSlipPaymentRequestSerializer();
}

class _$OrderBankSlipPaymentRequestSerializer implements PrimitiveSerializer<OrderBankSlipPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderBankSlipPaymentRequest, _$OrderBankSlipPaymentRequest];

  @override
  final String wireName = r'OrderBankSlipPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderBankSlipPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(PaymentMethod),
    );
    if (object.expirationInDays != null) {
      yield r'expirationInDays';
      yield serializers.serialize(
        object.expirationInDays,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderBankSlipPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderBankSlipPaymentRequestBuilder result,
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
        case r'expirationInDays':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.expirationInDays = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderBankSlipPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderBankSlipPaymentRequestBuilder();
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

