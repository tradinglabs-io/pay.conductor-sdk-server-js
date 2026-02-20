//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'card_expiration_data.g.dart';

/// Card expiration date
///
/// Properties:
/// * [month] - Card expiration month
/// * [year] - Card expiration year
@BuiltValue()
abstract class CardExpirationData implements Built<CardExpirationData, CardExpirationDataBuilder> {
  /// Card expiration month
  @BuiltValueField(wireName: r'month')
  num get month;

  /// Card expiration year
  @BuiltValueField(wireName: r'year')
  num get year;

  CardExpirationData._();

  factory CardExpirationData([void updates(CardExpirationDataBuilder b)]) = _$CardExpirationData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CardExpirationDataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CardExpirationData> get serializer => _$CardExpirationDataSerializer();
}

class _$CardExpirationDataSerializer implements PrimitiveSerializer<CardExpirationData> {
  @override
  final Iterable<Type> types = const [CardExpirationData, _$CardExpirationData];

  @override
  final String wireName = r'CardExpirationData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CardExpirationData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'month';
    yield serializers.serialize(
      object.month,
      specifiedType: const FullType(num),
    );
    yield r'year';
    yield serializers.serialize(
      object.year,
      specifiedType: const FullType(num),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CardExpirationData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CardExpirationDataBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'month':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.month = valueDes;
          break;
        case r'year':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.year = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CardExpirationData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CardExpirationDataBuilder();
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

