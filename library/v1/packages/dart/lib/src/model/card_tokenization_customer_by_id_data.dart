//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'card_tokenization_customer_by_id_data.g.dart';

/// Reference to an existing customer by ID
///
/// Properties:
/// * [id] - ID of an existing customer
@BuiltValue()
abstract class CardTokenizationCustomerByIdData implements Built<CardTokenizationCustomerByIdData, CardTokenizationCustomerByIdDataBuilder> {
  /// ID of an existing customer
  @BuiltValueField(wireName: r'id')
  String get id;

  CardTokenizationCustomerByIdData._();

  factory CardTokenizationCustomerByIdData([void updates(CardTokenizationCustomerByIdDataBuilder b)]) = _$CardTokenizationCustomerByIdData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CardTokenizationCustomerByIdDataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CardTokenizationCustomerByIdData> get serializer => _$CardTokenizationCustomerByIdDataSerializer();
}

class _$CardTokenizationCustomerByIdDataSerializer implements PrimitiveSerializer<CardTokenizationCustomerByIdData> {
  @override
  final Iterable<Type> types = const [CardTokenizationCustomerByIdData, _$CardTokenizationCustomerByIdData];

  @override
  final String wireName = r'CardTokenizationCustomerByIdData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CardTokenizationCustomerByIdData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CardTokenizationCustomerByIdData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CardTokenizationCustomerByIdDataBuilder result,
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
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CardTokenizationCustomerByIdData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CardTokenizationCustomerByIdDataBuilder();
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

