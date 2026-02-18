//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/any_of.dart';

part 'cart_ode_cr_dito_installments.g.dart';

/// Número de parcelas
@BuiltValue()
abstract class CartODeCrDitoInstallments implements Built<CartODeCrDitoInstallments, CartODeCrDitoInstallmentsBuilder> {
  /// Any Of [int]
  AnyOf get anyOf;

  CartODeCrDitoInstallments._();

  factory CartODeCrDitoInstallments([void updates(CartODeCrDitoInstallmentsBuilder b)]) = _$CartODeCrDitoInstallments;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CartODeCrDitoInstallmentsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CartODeCrDitoInstallments> get serializer => _$CartODeCrDitoInstallmentsSerializer();
}

class _$CartODeCrDitoInstallmentsSerializer implements PrimitiveSerializer<CartODeCrDitoInstallments> {
  @override
  final Iterable<Type> types = const [CartODeCrDitoInstallments, _$CartODeCrDitoInstallments];

  @override
  final String wireName = r'CartODeCrDitoInstallments';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CartODeCrDitoInstallments object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    CartODeCrDitoInstallments object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final anyOf = object.anyOf;
    return serializers.serialize(anyOf, specifiedType: FullType(AnyOf, anyOf.valueTypes.map((type) => FullType(type)).toList()))!;
  }

  @override
  CartODeCrDitoInstallments deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CartODeCrDitoInstallmentsBuilder();
    Object? anyOfDataSrc;
    final targetType = const FullType(AnyOf, [FullType(int), FullType(int), ]);
    anyOfDataSrc = serialized;
    result.anyOf = serializers.deserialize(anyOfDataSrc, specifiedType: targetType) as AnyOf;
    return result.build();
  }
}

