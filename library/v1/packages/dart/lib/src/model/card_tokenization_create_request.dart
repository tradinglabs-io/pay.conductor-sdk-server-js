//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/card_create_request.dart';
import 'package:openapi/src/model/card_tokenization_create_request_customer.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'card_tokenization_create_request.g.dart';

/// Data for creating a customer card with customer information
///
/// Properties:
/// * [card] 
/// * [saveCard] - Indicates if the card should be saved for future use
/// * [customer] 
@BuiltValue()
abstract class CardTokenizationCreateRequest implements Built<CardTokenizationCreateRequest, CardTokenizationCreateRequestBuilder> {
  @BuiltValueField(wireName: r'card')
  CardCreateRequest get card;

  /// Indicates if the card should be saved for future use
  @BuiltValueField(wireName: r'saveCard')
  bool get saveCard;

  @BuiltValueField(wireName: r'customer')
  CardTokenizationCreateRequestCustomer get customer;

  CardTokenizationCreateRequest._();

  factory CardTokenizationCreateRequest([void updates(CardTokenizationCreateRequestBuilder b)]) = _$CardTokenizationCreateRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CardTokenizationCreateRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CardTokenizationCreateRequest> get serializer => _$CardTokenizationCreateRequestSerializer();
}

class _$CardTokenizationCreateRequestSerializer implements PrimitiveSerializer<CardTokenizationCreateRequest> {
  @override
  final Iterable<Type> types = const [CardTokenizationCreateRequest, _$CardTokenizationCreateRequest];

  @override
  final String wireName = r'CardTokenizationCreateRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CardTokenizationCreateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'card';
    yield serializers.serialize(
      object.card,
      specifiedType: const FullType(CardCreateRequest),
    );
    yield r'saveCard';
    yield serializers.serialize(
      object.saveCard,
      specifiedType: const FullType(bool),
    );
    yield r'customer';
    yield serializers.serialize(
      object.customer,
      specifiedType: const FullType(CardTokenizationCreateRequestCustomer),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CardTokenizationCreateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CardTokenizationCreateRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'card':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CardCreateRequest),
          ) as CardCreateRequest;
          result.card.replace(valueDes);
          break;
        case r'saveCard':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.saveCard = valueDes;
          break;
        case r'customer':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CardTokenizationCreateRequestCustomer),
          ) as CardTokenizationCreateRequestCustomer;
          result.customer.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CardTokenizationCreateRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CardTokenizationCreateRequestBuilder();
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

