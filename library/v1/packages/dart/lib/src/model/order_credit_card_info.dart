//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_credit_card_info.g.dart';

/// Credit card payment data
///
/// Properties:
/// * [authorizationCode] - Transaction authorization code
@BuiltValue()
abstract class OrderCreditCardInfo implements Built<OrderCreditCardInfo, OrderCreditCardInfoBuilder> {
  /// Transaction authorization code
  @BuiltValueField(wireName: r'authorizationCode')
  String? get authorizationCode;

  OrderCreditCardInfo._();

  factory OrderCreditCardInfo([void updates(OrderCreditCardInfoBuilder b)]) = _$OrderCreditCardInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderCreditCardInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderCreditCardInfo> get serializer => _$OrderCreditCardInfoSerializer();
}

class _$OrderCreditCardInfoSerializer implements PrimitiveSerializer<OrderCreditCardInfo> {
  @override
  final Iterable<Type> types = const [OrderCreditCardInfo, _$OrderCreditCardInfo];

  @override
  final String wireName = r'OrderCreditCardInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderCreditCardInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.authorizationCode != null) {
      yield r'authorizationCode';
      yield serializers.serialize(
        object.authorizationCode,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderCreditCardInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderCreditCardInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'authorizationCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.authorizationCode = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderCreditCardInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderCreditCardInfoBuilder();
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

