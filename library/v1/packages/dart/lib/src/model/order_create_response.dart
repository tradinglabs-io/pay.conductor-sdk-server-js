//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/order_create_response_order_items_inner.dart';
import 'package:openapi/src/model/status.dart';
import 'package:openapi/src/model/order_bank_slip_info.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/order_credit_card_info.dart';
import 'package:openapi/src/model/order_pic_pay_info.dart';
import 'package:openapi/src/model/order_nu_pay_info.dart';
import 'package:openapi/src/model/payment_method.dart';
import 'package:openapi/src/model/order_create_response_session.dart';
import 'package:openapi/src/model/order_pix_info.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_create_response.g.dart';

/// Response after creating an order
///
/// Properties:
/// * [id] - Order ID in the system
/// * [externalId] - External order ID (provided by your integration)
/// * [externalIntegrationKey] - Provider used to process the order
/// * [externalIntegrationId] - Order ID in the payment provider
/// * [amount] - Total order amount
/// * [costFee] - Cost fee applied to the order
/// * [pix] 
/// * [bankSlip] 
/// * [nuPay] 
/// * [picPay] 
/// * [creditCard] 
/// * [status] 
/// * [paymentMethod] 
/// * [payedAt] - Date and time when the order was paid (ISO 8601)
/// * [errorCode] - Error code, if any
/// * [errorMessage] - Error message, if any
/// * [orderItems] 
/// * [session] 
@BuiltValue()
abstract class OrderCreateResponse implements Built<OrderCreateResponse, OrderCreateResponseBuilder> {
  /// Order ID in the system
  @BuiltValueField(wireName: r'id')
  String get id;

  /// External order ID (provided by your integration)
  @BuiltValueField(wireName: r'externalId')
  String? get externalId;

  /// Provider used to process the order
  @BuiltValueField(wireName: r'externalIntegrationKey')
  String get externalIntegrationKey;

  /// Order ID in the payment provider
  @BuiltValueField(wireName: r'externalIntegrationId')
  String? get externalIntegrationId;

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

  @BuiltValueField(wireName: r'creditCard')
  OrderCreditCardInfo? get creditCard;

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

  @BuiltValueField(wireName: r'orderItems')
  BuiltList<OrderCreateResponseOrderItemsInner> get orderItems;

  @BuiltValueField(wireName: r'session')
  OrderCreateResponseSession? get session;

  OrderCreateResponse._();

  factory OrderCreateResponse([void updates(OrderCreateResponseBuilder b)]) = _$OrderCreateResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderCreateResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderCreateResponse> get serializer => _$OrderCreateResponseSerializer();
}

class _$OrderCreateResponseSerializer implements PrimitiveSerializer<OrderCreateResponse> {
  @override
  final Iterable<Type> types = const [OrderCreateResponse, _$OrderCreateResponse];

  @override
  final String wireName = r'OrderCreateResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderCreateResponse object, {
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
    yield r'externalIntegrationKey';
    yield serializers.serialize(
      object.externalIntegrationKey,
      specifiedType: const FullType(String),
    );
    yield r'externalIntegrationId';
    yield object.externalIntegrationId == null ? null : serializers.serialize(
      object.externalIntegrationId,
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
    if (object.creditCard != null) {
      yield r'creditCard';
      yield serializers.serialize(
        object.creditCard,
        specifiedType: const FullType(OrderCreditCardInfo),
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
    yield r'orderItems';
    yield serializers.serialize(
      object.orderItems,
      specifiedType: const FullType(BuiltList, [FullType(OrderCreateResponseOrderItemsInner)]),
    );
    if (object.session != null) {
      yield r'session';
      yield serializers.serialize(
        object.session,
        specifiedType: const FullType.nullable(OrderCreateResponseSession),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderCreateResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderCreateResponseBuilder result,
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
        case r'externalIntegrationKey':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.externalIntegrationKey = valueDes;
          break;
        case r'externalIntegrationId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.externalIntegrationId = valueDes;
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
        case r'creditCard':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderCreditCardInfo),
          ) as OrderCreditCardInfo;
          result.creditCard.replace(valueDes);
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
        case r'orderItems':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(OrderCreateResponseOrderItemsInner)]),
          ) as BuiltList<OrderCreateResponseOrderItemsInner>;
          result.orderItems.replace(valueDes);
          break;
        case r'session':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(OrderCreateResponseSession),
          ) as OrderCreateResponseSession?;
          if (valueDes == null) continue;
          result.session.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderCreateResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderCreateResponseBuilder();
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

