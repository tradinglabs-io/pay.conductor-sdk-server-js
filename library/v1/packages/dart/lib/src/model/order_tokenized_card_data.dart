//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_tokenized_card_data.g.dart';

/// OrderTokenizedCardData
///
/// Properties:
/// * [firstSixCardNumber] - First 6 digits of the credit card
/// * [token] - Previously generated credit card token
@BuiltValue()
abstract class OrderTokenizedCardData implements Built<OrderTokenizedCardData, OrderTokenizedCardDataBuilder> {
  /// First 6 digits of the credit card
  @BuiltValueField(wireName: r'firstSixCardNumber')
  String? get firstSixCardNumber;

  /// Previously generated credit card token
  @BuiltValueField(wireName: r'token')
  String get token;

  OrderTokenizedCardData._();

  factory OrderTokenizedCardData([void updates(OrderTokenizedCardDataBuilder b)]) = _$OrderTokenizedCardData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderTokenizedCardDataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderTokenizedCardData> get serializer => _$OrderTokenizedCardDataSerializer();
}

class _$OrderTokenizedCardDataSerializer implements PrimitiveSerializer<OrderTokenizedCardData> {
  @override
  final Iterable<Type> types = const [OrderTokenizedCardData, _$OrderTokenizedCardData];

  @override
  final String wireName = r'OrderTokenizedCardData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderTokenizedCardData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.firstSixCardNumber != null) {
      yield r'firstSixCardNumber';
      yield serializers.serialize(
        object.firstSixCardNumber,
        specifiedType: const FullType(String),
      );
    }
    yield r'token';
    yield serializers.serialize(
      object.token,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderTokenizedCardData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderTokenizedCardDataBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'firstSixCardNumber':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.firstSixCardNumber = valueDes;
          break;
        case r'token':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.token = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderTokenizedCardData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderTokenizedCardDataBuilder();
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

