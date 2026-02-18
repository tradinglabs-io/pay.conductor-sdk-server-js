//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'cart_o_tokenizado.g.dart';

/// CartOTokenizado
///
/// Properties:
/// * [firstSixCardNumber] - Primeiros 6 dígitos do cartão de crédito
/// * [token] - Token do cartão de crédito gerado anteriormente
@BuiltValue()
abstract class CartOTokenizado implements Built<CartOTokenizado, CartOTokenizadoBuilder> {
  /// Primeiros 6 dígitos do cartão de crédito
  @BuiltValueField(wireName: r'firstSixCardNumber')
  String? get firstSixCardNumber;

  /// Token do cartão de crédito gerado anteriormente
  @BuiltValueField(wireName: r'token')
  String get token;

  CartOTokenizado._();

  factory CartOTokenizado([void updates(CartOTokenizadoBuilder b)]) = _$CartOTokenizado;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CartOTokenizadoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CartOTokenizado> get serializer => _$CartOTokenizadoSerializer();
}

class _$CartOTokenizadoSerializer implements PrimitiveSerializer<CartOTokenizado> {
  @override
  final Iterable<Type> types = const [CartOTokenizado, _$CartOTokenizado];

  @override
  final String wireName = r'CartOTokenizado';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CartOTokenizado object, {
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
    CartOTokenizado object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CartOTokenizadoBuilder result,
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
  CartOTokenizado deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CartOTokenizadoBuilder();
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

