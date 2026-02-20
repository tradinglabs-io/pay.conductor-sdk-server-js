//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/available_payment_methods.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_draft_payment_request.g.dart';

/// Used to create an order without generating a real payment. Use to create orders that will be paid later
///
/// Properties:
/// * [paymentMethod] 
/// * [expirationInSeconds] - Order expiration time in seconds
/// * [availablePaymentMethods] - Available payment methods for this order
@BuiltValue()
abstract class OrderDraftPaymentRequest implements Built<OrderDraftPaymentRequest, OrderDraftPaymentRequestBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  String get paymentMethod;

  /// Order expiration time in seconds
  @BuiltValueField(wireName: r'expirationInSeconds')
  num? get expirationInSeconds;

  /// Available payment methods for this order
  @BuiltValueField(wireName: r'availablePaymentMethods')
  BuiltList<AvailablePaymentMethods>? get availablePaymentMethods;

  OrderDraftPaymentRequest._();

  factory OrderDraftPaymentRequest([void updates(OrderDraftPaymentRequestBuilder b)]) = _$OrderDraftPaymentRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderDraftPaymentRequestBuilder b) => b
      ..expirationInSeconds = 3600;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderDraftPaymentRequest> get serializer => _$OrderDraftPaymentRequestSerializer();
}

class _$OrderDraftPaymentRequestSerializer implements PrimitiveSerializer<OrderDraftPaymentRequest> {
  @override
  final Iterable<Type> types = const [OrderDraftPaymentRequest, _$OrderDraftPaymentRequest];

  @override
  final String wireName = r'OrderDraftPaymentRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderDraftPaymentRequest object, {
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
    if (object.availablePaymentMethods != null) {
      yield r'availablePaymentMethods';
      yield serializers.serialize(
        object.availablePaymentMethods,
        specifiedType: const FullType(BuiltList, [FullType(AvailablePaymentMethods)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderDraftPaymentRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderDraftPaymentRequestBuilder result,
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
        case r'availablePaymentMethods':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(AvailablePaymentMethods)]),
          ) as BuiltList<AvailablePaymentMethods>;
          result.availablePaymentMethods.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderDraftPaymentRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderDraftPaymentRequestBuilder();
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

