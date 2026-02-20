//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'card_tokenization_create_response.g.dart';

/// Response containing customer ID and card token
///
/// Properties:
/// * [customerId] - ID of the customer associated with the created card
/// * [token] - Token of the created card for future transactions
@BuiltValue()
abstract class CardTokenizationCreateResponse implements Built<CardTokenizationCreateResponse, CardTokenizationCreateResponseBuilder> {
  /// ID of the customer associated with the created card
  @BuiltValueField(wireName: r'customerId')
  String get customerId;

  /// Token of the created card for future transactions
  @BuiltValueField(wireName: r'token')
  String get token;

  CardTokenizationCreateResponse._();

  factory CardTokenizationCreateResponse([void updates(CardTokenizationCreateResponseBuilder b)]) = _$CardTokenizationCreateResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CardTokenizationCreateResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CardTokenizationCreateResponse> get serializer => _$CardTokenizationCreateResponseSerializer();
}

class _$CardTokenizationCreateResponseSerializer implements PrimitiveSerializer<CardTokenizationCreateResponse> {
  @override
  final Iterable<Type> types = const [CardTokenizationCreateResponse, _$CardTokenizationCreateResponse];

  @override
  final String wireName = r'CardTokenizationCreateResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CardTokenizationCreateResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'customerId';
    yield serializers.serialize(
      object.customerId,
      specifiedType: const FullType(String),
    );
    yield r'token';
    yield serializers.serialize(
      object.token,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CardTokenizationCreateResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CardTokenizationCreateResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'customerId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.customerId = valueDes;
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
  CardTokenizationCreateResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CardTokenizationCreateResponseBuilder();
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

