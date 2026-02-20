//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_create_response_session.g.dart';

/// OrderCreateResponseSession
///
/// Properties:
/// * [sessionId] - ID of the checkout session associated with the order
@BuiltValue()
abstract class OrderCreateResponseSession implements Built<OrderCreateResponseSession, OrderCreateResponseSessionBuilder> {
  /// ID of the checkout session associated with the order
  @BuiltValueField(wireName: r'sessionId')
  String get sessionId;

  OrderCreateResponseSession._();

  factory OrderCreateResponseSession([void updates(OrderCreateResponseSessionBuilder b)]) = _$OrderCreateResponseSession;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderCreateResponseSessionBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderCreateResponseSession> get serializer => _$OrderCreateResponseSessionSerializer();
}

class _$OrderCreateResponseSessionSerializer implements PrimitiveSerializer<OrderCreateResponseSession> {
  @override
  final Iterable<Type> types = const [OrderCreateResponseSession, _$OrderCreateResponseSession];

  @override
  final String wireName = r'OrderCreateResponseSession';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderCreateResponseSession object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'sessionId';
    yield serializers.serialize(
      object.sessionId,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderCreateResponseSession object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderCreateResponseSessionBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'sessionId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sessionId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderCreateResponseSession deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderCreateResponseSessionBuilder();
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

