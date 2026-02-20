//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/order_payment_request.dart';
import 'package:openapi/src/model/customer_create_request.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/order_fraud_fingerprints.dart';
import 'package:openapi/src/model/merchant_input.dart';
import 'package:openapi/src/model/order_create_request_session.dart';
import 'package:openapi/src/model/order_item_data.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_create_request.g.dart';

/// Order data for payment processing
///
/// Properties:
/// * [chargeAmount] - Total amount to be charged on the order in floating point value
/// * [clientIp] - Client IP address
/// * [customer] 
/// * [discountAmount] - Discount amount
/// * [externalId] - Order ID in your system
/// * [fingerprints] 
/// * [items] - List of products or services in the order
/// * [merchant] 
/// * [payment] 
/// * [splitAmountTotal] - Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split)
/// * [session] 
/// * [shippingFee] - Shipping fee
/// * [taxFee] - Additional fees
/// * [metadata] - Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters
@BuiltValue()
abstract class OrderCreateRequest implements Built<OrderCreateRequest, OrderCreateRequestBuilder> {
  /// Total amount to be charged on the order in floating point value
  @BuiltValueField(wireName: r'chargeAmount')
  num get chargeAmount;

  /// Client IP address
  @BuiltValueField(wireName: r'clientIp')
  String get clientIp;

  @BuiltValueField(wireName: r'customer')
  CustomerCreateRequest get customer;

  /// Discount amount
  @BuiltValueField(wireName: r'discountAmount')
  num get discountAmount;

  /// Order ID in your system
  @BuiltValueField(wireName: r'externalId')
  String get externalId;

  @BuiltValueField(wireName: r'fingerprints')
  OrderFraudFingerprints? get fingerprints;

  /// List of products or services in the order
  @BuiltValueField(wireName: r'items')
  BuiltList<OrderItemData>? get items;

  @BuiltValueField(wireName: r'merchant')
  MerchantInput? get merchant;

  @BuiltValueField(wireName: r'payment')
  OrderPaymentRequest get payment;

  /// Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split)
  @BuiltValueField(wireName: r'splitAmountTotal')
  num? get splitAmountTotal;

  @BuiltValueField(wireName: r'session')
  OrderCreateRequestSession? get session;

  /// Shipping fee
  @BuiltValueField(wireName: r'shippingFee')
  num get shippingFee;

  /// Additional fees
  @BuiltValueField(wireName: r'taxFee')
  num get taxFee;

  /// Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters
  @BuiltValueField(wireName: r'metadata')
  JsonObject? get metadata;

  OrderCreateRequest._();

  factory OrderCreateRequest([void updates(OrderCreateRequestBuilder b)]) = _$OrderCreateRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderCreateRequestBuilder b) => b
      ..discountAmount = 0
      ..shippingFee = 0
      ..taxFee = 0;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderCreateRequest> get serializer => _$OrderCreateRequestSerializer();
}

class _$OrderCreateRequestSerializer implements PrimitiveSerializer<OrderCreateRequest> {
  @override
  final Iterable<Type> types = const [OrderCreateRequest, _$OrderCreateRequest];

  @override
  final String wireName = r'OrderCreateRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderCreateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'chargeAmount';
    yield serializers.serialize(
      object.chargeAmount,
      specifiedType: const FullType(num),
    );
    yield r'clientIp';
    yield serializers.serialize(
      object.clientIp,
      specifiedType: const FullType(String),
    );
    yield r'customer';
    yield serializers.serialize(
      object.customer,
      specifiedType: const FullType(CustomerCreateRequest),
    );
    yield r'discountAmount';
    yield serializers.serialize(
      object.discountAmount,
      specifiedType: const FullType(num),
    );
    yield r'externalId';
    yield serializers.serialize(
      object.externalId,
      specifiedType: const FullType(String),
    );
    if (object.fingerprints != null) {
      yield r'fingerprints';
      yield serializers.serialize(
        object.fingerprints,
        specifiedType: const FullType(OrderFraudFingerprints),
      );
    }
    if (object.items != null) {
      yield r'items';
      yield serializers.serialize(
        object.items,
        specifiedType: const FullType(BuiltList, [FullType(OrderItemData)]),
      );
    }
    if (object.merchant != null) {
      yield r'merchant';
      yield serializers.serialize(
        object.merchant,
        specifiedType: const FullType(MerchantInput),
      );
    }
    yield r'payment';
    yield serializers.serialize(
      object.payment,
      specifiedType: const FullType(OrderPaymentRequest),
    );
    if (object.splitAmountTotal != null) {
      yield r'splitAmountTotal';
      yield serializers.serialize(
        object.splitAmountTotal,
        specifiedType: const FullType(num),
      );
    }
    if (object.session != null) {
      yield r'session';
      yield serializers.serialize(
        object.session,
        specifiedType: const FullType(OrderCreateRequestSession),
      );
    }
    yield r'shippingFee';
    yield serializers.serialize(
      object.shippingFee,
      specifiedType: const FullType(num),
    );
    yield r'taxFee';
    yield serializers.serialize(
      object.taxFee,
      specifiedType: const FullType(num),
    );
    if (object.metadata != null) {
      yield r'metadata';
      yield serializers.serialize(
        object.metadata,
        specifiedType: const FullType(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderCreateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderCreateRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'chargeAmount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.chargeAmount = valueDes;
          break;
        case r'clientIp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.clientIp = valueDes;
          break;
        case r'customer':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CustomerCreateRequest),
          ) as CustomerCreateRequest;
          result.customer.replace(valueDes);
          break;
        case r'discountAmount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.discountAmount = valueDes;
          break;
        case r'externalId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.externalId = valueDes;
          break;
        case r'fingerprints':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderFraudFingerprints),
          ) as OrderFraudFingerprints;
          result.fingerprints.replace(valueDes);
          break;
        case r'items':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(OrderItemData)]),
          ) as BuiltList<OrderItemData>;
          result.items.replace(valueDes);
          break;
        case r'merchant':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MerchantInput),
          ) as MerchantInput;
          result.merchant.replace(valueDes);
          break;
        case r'payment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderPaymentRequest),
          ) as OrderPaymentRequest;
          result.payment.replace(valueDes);
          break;
        case r'splitAmountTotal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.splitAmountTotal = valueDes;
          break;
        case r'session':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(OrderCreateRequestSession),
          ) as OrderCreateRequestSession;
          result.session.replace(valueDes);
          break;
        case r'shippingFee':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.shippingFee = valueDes;
          break;
        case r'taxFee':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.taxFee = valueDes;
          break;
        case r'metadata':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.metadata = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderCreateRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderCreateRequestBuilder();
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

