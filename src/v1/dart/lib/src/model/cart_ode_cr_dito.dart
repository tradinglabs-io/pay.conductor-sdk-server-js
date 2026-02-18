//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/cart_ode_cr_dito_installments.dart';
import 'package:openapi/src/model/cart_ode_cr_dito_card.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'cart_ode_cr_dito.g.dart';

/// CartODeCrDito
///
/// Properties:
/// * [paymentMethod] 
/// * [card] 
/// * [installments] 
/// * [softDescriptor] - Texto que aparecerá na fatura do cartão (soft descriptor)
@BuiltValue()
abstract class CartODeCrDito implements Built<CartODeCrDito, CartODeCrDitoBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  String get paymentMethod;

  @BuiltValueField(wireName: r'card')
  CartODeCrDitoCard get card;

  @BuiltValueField(wireName: r'installments')
  CartODeCrDitoInstallments get installments;

  /// Texto que aparecerá na fatura do cartão (soft descriptor)
  @BuiltValueField(wireName: r'softDescriptor')
  String? get softDescriptor;

  CartODeCrDito._();

  factory CartODeCrDito([void updates(CartODeCrDitoBuilder b)]) = _$CartODeCrDito;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CartODeCrDitoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CartODeCrDito> get serializer => _$CartODeCrDitoSerializer();
}

class _$CartODeCrDitoSerializer implements PrimitiveSerializer<CartODeCrDito> {
  @override
  final Iterable<Type> types = const [CartODeCrDito, _$CartODeCrDito];

  @override
  final String wireName = r'CartODeCrDito';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CartODeCrDito object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(String),
    );
    yield r'card';
    yield serializers.serialize(
      object.card,
      specifiedType: const FullType(CartODeCrDitoCard),
    );
    yield r'installments';
    yield serializers.serialize(
      object.installments,
      specifiedType: const FullType(CartODeCrDitoInstallments),
    );
    if (object.softDescriptor != null) {
      yield r'softDescriptor';
      yield serializers.serialize(
        object.softDescriptor,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    CartODeCrDito object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CartODeCrDitoBuilder result,
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
        case r'card':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CartODeCrDitoCard),
          ) as CartODeCrDitoCard;
          result.card.replace(valueDes);
          break;
        case r'installments':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CartODeCrDitoInstallments),
          ) as CartODeCrDitoInstallments;
          result.installments.replace(valueDes);
          break;
        case r'softDescriptor':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.softDescriptor = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CartODeCrDito deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CartODeCrDitoBuilder();
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

