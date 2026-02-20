//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/status.dart';
import 'package:openapi/src/model/order_bank_slip_info.dart';
import 'package:openapi/src/model/order_pic_pay_info.dart';
import 'package:openapi/src/model/order_nu_pay_info.dart';
import 'package:openapi/src/model/payment_method.dart';
import 'package:openapi/src/model/order_pix_info.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_confirm_response.g.dart';

/// Response after confirming a draft order
///
/// Properties:
/// * [id] - Order ID in the system
/// * [externalId] - External order ID (provided by your integration)
/// * [amount] - Total order amount
/// * [costFee] - Cost fee applied to the order
/// * [pix] 
/// * [bankSlip] 
/// * [nuPay] 
/// * [picPay] 
/// * [status] 
/// * [paymentMethod] 
/// * [payedAt] - Date and time when the order was paid (ISO 8601)
/// * [errorCode] - Error code, if any
/// * [errorMessage] - Error message, if any
@BuiltValue()
abstract class OrderConfirmResponse implements Built<OrderConfirmResponse, OrderConfirmResponseBuilder> {
  /// Order ID in the system
  @BuiltValueField(wireName: r'id')
  String get id;

  /// External order ID (provided by your integration)
  @BuiltValueField(wireName: r'externalId')
  String? get externalId;

  /// Total order amount
  @BuiltValueField(wireName: r'amount')
  num get amount;

  /// Cost fee applied to the order
  @BuiltValueField(wireName: r'costFee')
  num get costFee;

  @BuiltValueField(wireName: r'pix')
  OrderPIXInfo? get pix;

  @BuiltValueField(wireName: r'bankSlip')
  OrderBankSlipInfo? get bankSlip;

  @BuiltValueField(wireName: r'nuPay')
  OrderNuPayInfo? get nuPay;

  @BuiltValueField(wireName: r'picPay')
  OrderPicPayInfo? get picPay;

  @BuiltValueField(wireName: r'status')
  Status get status;
  // enum statusEnum {  Generating,  Pending,  Completed,  Failed,  Canceled,  Refunding,  Refunded,  InDispute,  Chargeback,  Transferring,  };

  @BuiltValueField(wireName: r'paymentMethod')
  PaymentMethod get paymentMethod;
  // enum paymentMethodEnum {  Pix,  CreditCard,  DebitCard,  BankSlip,  Crypto,  ApplePay,  NuPay,  PicPay,  AmazonPay,  SepaDebit,  GooglePay,  Draft,  };

  /// Date and time when the order was paid (ISO 8601)
  @BuiltValueField(wireName: r'payedAt')
  String? get payedAt;

  /// Error code, if any
  @BuiltValueField(wireName: r'errorCode')
  String? get errorCode;

  /// Error message, if any
  @BuiltValueField(wireName: r'errorMessage')
  String? get errorMessage;

  OrderConfirmResponse._();

  factory OrderConfirmResponse([void updates(OrderConfirmResponseBuilder b)]) = _$OrderConfirmResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderConfirmResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderConfirmResponse> get serializer => _$OrderConfirmResponseSerializer();
}

class _$OrderConfirmResponseSerializer implements PrimitiveSerializer<OrderConfirmResponse> {
  @override
  final Iterable<Type> types = const [OrderConfirmResponse, _$OrderConfirmResponse];

  @override
  final String wireName = r'OrderConfirmResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderConfirmResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'externalId';
    yield object.externalId == null ? null : serializers.serialize(
      object.externalId,
      specifiedType: const FullType.nullable(String),
    );
    yield r'amount';
    yield serializers.serialize(
      object.amount,
      specifiedType: const FullType(num),
    );
    yield r'costFee';
    yield serializers.serialize(
      object.costFee,
      specifiedType: const FullType(num),
    );
    if (object.pix != null) {
      yield r'pix';
      yield serializers.serialize(
        object.pix,
        specifiedType: const FullType(OrderPIXInfo),
      );
    }
    if (object.bankSlip != null) {
      yield r'bankSlip';
      yield serializers.serialize(
        object.bankSlip,
        specifiedType: const FullType(OrderBankSlipInfo),
      );
    }
    if (object.nuPay != null) {
      yield r'nuPay';
      yield serializers.serialize(
        object.nuPay,
        specifiedType: const FullType(OrderNuPayInfo),
      );
    }
    if (object.picPay != null) {
      yield r'picPay';
      yield serializers.serialize(
        object.picPay,
        specifiedType: const FullType(OrderPicPayInfo),
      );
    }
    yield r'status';
    yield serializers.serialize(
      object.status,
      specifiedType: const FullType(Status),
    );
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(PaymentMethod),
    );
    yield r'payedAt';
    yield object.payedAt == null ? null : serializers.serialize(
      object.payedAt,
      specifiedType: const FullType.nullable(String),
    );
    yield r'errorCode';
    yield object.errorCode == null ? null : serializers.serialize(
      object.errorCode,
      specifiedType: const FullType.nullable(String),
    );
    yield r'errorMessage';
    yield object.errorMessage == null ? null : serializers.serialize(
      object.errorMessage,
      specifiedType: const FullType.nullable(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderConfirmResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderConfirmResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'externalId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.externalId = valueDes;
          break;
        case r'amount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.amount = valueDes;
          break;
        case r'costFee':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.costFee = valueDes;
          break;
        case r'pix':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderPIXInfo),
          ) as OrderPIXInfo;
          result.pix.replace(valueDes);
          break;
        case r'bankSlip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderBankSlipInfo),
          ) as OrderBankSlipInfo;
          result.bankSlip.replace(valueDes);
          break;
        case r'nuPay':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderNuPayInfo),
          ) as OrderNuPayInfo;
          result.nuPay.replace(valueDes);
          break;
        case r'picPay':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderPicPayInfo),
          ) as OrderPicPayInfo;
          result.picPay.replace(valueDes);
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(Status),
          ) as Status;
          result.status = valueDes;
          break;
        case r'paymentMethod':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PaymentMethod),
          ) as PaymentMethod;
          result.paymentMethod = valueDes;
          break;
        case r'payedAt':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.payedAt = valueDes;
          break;
        case r'errorCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.errorCode = valueDes;
          break;
        case r'errorMessage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.errorMessage = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderConfirmResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderConfirmResponseBuilder();
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

