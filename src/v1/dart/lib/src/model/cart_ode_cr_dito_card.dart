//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/dados_completos_do_cart_o.dart';
import 'package:openapi/src/model/cart_o_tokenizado.dart';
import 'package:openapi/src/model/dados_completos_do_cart_o_expiration.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/any_of.dart';

part 'cart_ode_cr_dito_card.g.dart';

/// CartODeCrDitoCard
///
/// Properties:
/// * [firstSixCardNumber] - Primeiros 6 dígitos do cartão de crédito
/// * [token] - Token do cartão de crédito gerado anteriormente
/// * [cvv] - Código de segurança do cartão (CVV)
/// * [expiration] 
/// * [holderName] - Nome do titular do cartão
/// * [number] - Número do cartão de crédito
@BuiltValue()
abstract class CartODeCrDitoCard implements Built<CartODeCrDitoCard, CartODeCrDitoCardBuilder> {
  /// Any Of [CartOTokenizado], [DadosCompletosDoCartO]
  AnyOf get anyOf;

  CartODeCrDitoCard._();

  factory CartODeCrDitoCard([void updates(CartODeCrDitoCardBuilder b)]) = _$CartODeCrDitoCard;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CartODeCrDitoCardBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CartODeCrDitoCard> get serializer => _$CartODeCrDitoCardSerializer();
}

class _$CartODeCrDitoCardSerializer implements PrimitiveSerializer<CartODeCrDitoCard> {
  @override
  final Iterable<Type> types = const [CartODeCrDitoCard, _$CartODeCrDitoCard];

  @override
  final String wireName = r'CartODeCrDitoCard';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CartODeCrDitoCard object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    CartODeCrDitoCard object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final anyOf = object.anyOf;
    return serializers.serialize(anyOf, specifiedType: FullType(AnyOf, anyOf.valueTypes.map((type) => FullType(type)).toList()))!;
  }

  @override
  CartODeCrDitoCard deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CartODeCrDitoCardBuilder();
    Object? anyOfDataSrc;
    final targetType = const FullType(AnyOf, [FullType(CartOTokenizado), FullType(DadosCompletosDoCartO), ]);
    anyOfDataSrc = serialized;
    result.anyOf = serializers.deserialize(anyOfDataSrc, specifiedType: targetType) as AnyOf;
    return result.build();
  }
}

