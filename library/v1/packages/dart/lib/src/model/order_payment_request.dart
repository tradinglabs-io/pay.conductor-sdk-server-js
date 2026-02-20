//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/order_pic_pay_payment_request.dart';
import 'package:openapi/src/model/order_credit_card_payment_request.dart';
import 'package:openapi/src/model/order_credit_card_payment_request_card.dart';
import 'package:openapi/src/model/order_pix_payment_request.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/order_nu_pay_payment_request_nu_pay.dart';
import 'package:openapi/src/model/available_payment_methods.dart';
import 'package:openapi/src/model/order_bank_slip_payment_request.dart';
import 'package:openapi/src/model/order_nu_pay_payment_request.dart';
import 'package:openapi/src/model/order_draft_payment_request.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'order_payment_request.g.dart';

/// Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)
///
/// Properties:
/// * [paymentMethod] 
/// * [expirationInSeconds] - Order expiration time in seconds
/// * [card] 
/// * [installments] - Number of installments
/// * [softDescriptor] - Text that will appear on the card statement (soft descriptor)
/// * [expirationInDays] - Days until bank slip expires
/// * [nuPay] 
/// * [availablePaymentMethods] - Available payment methods for this order
@BuiltValue()
abstract class OrderPaymentRequest implements Built<OrderPaymentRequest, OrderPaymentRequestBuilder> {
  /// One Of [OrderBankSlipPaymentRequest], [OrderCreditCardPaymentRequest], [OrderDraftPaymentRequest], [OrderNuPayPaymentRequest], [OrderPIXPaymentRequest], [OrderPicPayPaymentRequest]
  OneOf get oneOf;

  static const String discriminatorFieldName = r'paymentMethod';

  static const Map<String, Type> discriminatorMapping = {
    r'BankSlip': OrderBankSlipPaymentRequest,
    r'CreditCard': OrderCreditCardPaymentRequest,
    r'Draft': OrderDraftPaymentRequest,
    r'NuPay': OrderNuPayPaymentRequest,
    r'PicPay': OrderPicPayPaymentRequest,
    r'Pix': OrderPIXPaymentRequest,
  };

  OrderPaymentRequest._();

  factory OrderPaymentRequest([void updates(OrderPaymentRequestBuilder b)]) = _$OrderPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderPaymentRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderPaymentRequest> get serializer => _$OrderPaymentRequestSerializer();
}

extension OrderPaymentRequestDiscriminatorExt on OrderPaymentRequest {
    String? get discriminatorValue {
        if (this is OrderBankSlipPaymentRequest) {
            return r'BankSlip';
        }
        if (this is OrderCreditCardPaymentRequest) {
            return r'CreditCard';
        }
        if (this is OrderDraftPaymentRequest) {
            return r'Draft';
        }
        if (this is OrderNuPayPaymentRequest) {
            return r'NuPay';
        }
        if (this is OrderPicPayPaymentRequest) {
            return r'PicPay';
        }
        if (this is OrderPIXPaymentRequest) {
            return r'Pix';
        }
        return null;
    }
}
extension OrderPaymentRequestBuilderDiscriminatorExt on OrderPaymentRequestBuilder {
    String? get discriminatorValue {
        if (this is OrderBankSlipPaymentRequestBuilder) {
            return r'BankSlip';
        }
        if (this is OrderCreditCardPaymentRequestBuilder) {
            return r'CreditCard';
        }
        if (this is OrderDraftPaymentRequestBuilder) {
            return r'Draft';
        }
        if (this is OrderNuPayPaymentRequestBuilder) {
            return r'NuPay';
        }
        if (this is OrderPicPayPaymentRequestBuilder) {
            return r'PicPay';
        }
        if (this is OrderPIXPaymentRequestBuilder) {
            return r'Pix';
        }
        return null;
    }
}

class _$OrderPaymentRequestSerializer implements PrimitiveSerializer<OrderPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderPaymentRequest, _$OrderPaymentRequest];

  @override
  final String wireName = r'OrderPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  OrderPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderPaymentRequestBuilder();
    Object? oneOfDataSrc;
    final serializedList = (serialized as Iterable<Object?>).toList();
    final discIndex = serializedList.indexOf(OrderPaymentRequest.discriminatorFieldName) + 1;
    final discValue = serializers.deserialize(serializedList[discIndex], specifiedType: FullType(String)) as String;
    oneOfDataSrc = serialized;
    final oneOfTypes = [OrderBankSlipPaymentRequest, OrderCreditCardPaymentRequest, OrderDraftPaymentRequest, OrderNuPayPaymentRequest, OrderPicPayPaymentRequest, OrderPIXPaymentRequest, ];
    Object oneOfResult;
    Type oneOfType;
    switch (discValue) {
      case r'BankSlip':
        oneOfResult = serializers.deserialize(
          oneOfDataSrc,
          specifiedType: FullType(OrderBankSlipPaymentRequest),
        ) as OrderBankSlipPaymentRequest;
        oneOfType = OrderBankSlipPaymentRequest;
        break;
      case r'CreditCard':
        oneOfResult = serializers.deserialize(
          oneOfDataSrc,
          specifiedType: FullType(OrderCreditCardPaymentRequest),
        ) as OrderCreditCardPaymentRequest;
        oneOfType = OrderCreditCardPaymentRequest;
        break;
      case r'Draft':
        oneOfResult = serializers.deserialize(
          oneOfDataSrc,
          specifiedType: FullType(OrderDraftPaymentRequest),
        ) as OrderDraftPaymentRequest;
        oneOfType = OrderDraftPaymentRequest;
        break;
      case r'NuPay':
        oneOfResult = serializers.deserialize(
          oneOfDataSrc,
          specifiedType: FullType(OrderNuPayPaymentRequest),
        ) as OrderNuPayPaymentRequest;
        oneOfType = OrderNuPayPaymentRequest;
        break;
      case r'PicPay':
        oneOfResult = serializers.deserialize(
          oneOfDataSrc,
          specifiedType: FullType(OrderPicPayPaymentRequest),
        ) as OrderPicPayPaymentRequest;
        oneOfType = OrderPicPayPaymentRequest;
        break;
      case r'Pix':
        oneOfResult = serializers.deserialize(
          oneOfDataSrc,
          specifiedType: FullType(OrderPIXPaymentRequest),
        ) as OrderPIXPaymentRequest;
        oneOfType = OrderPIXPaymentRequest;
        break;
      default:
        throw UnsupportedError("Couldn't deserialize oneOf for the discriminator value: ${discValue}");
    }
    result.oneOf = OneOfDynamic(typeIndex: oneOfTypes.indexOf(oneOfType), types: oneOfTypes, value: oneOfResult);
    return result.build();
  }
}

