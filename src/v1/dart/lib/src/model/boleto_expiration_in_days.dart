//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/any_of.dart';

part 'boleto_expiration_in_days.g.dart';

/// Dias até o vencimento do boleto
@BuiltValue()
abstract class BoletoExpirationInDays implements Built<BoletoExpirationInDays, BoletoExpirationInDaysBuilder> {
  /// Any Of [int]
  AnyOf get anyOf;

  BoletoExpirationInDays._();

  factory BoletoExpirationInDays([void updates(BoletoExpirationInDaysBuilder b)]) = _$BoletoExpirationInDays;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BoletoExpirationInDaysBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BoletoExpirationInDays> get serializer => _$BoletoExpirationInDaysSerializer();
}

class _$BoletoExpirationInDaysSerializer implements PrimitiveSerializer<BoletoExpirationInDays> {
  @override
  final Iterable<Type> types = const [BoletoExpirationInDays, _$BoletoExpirationInDays];

  @override
  final String wireName = r'BoletoExpirationInDays';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BoletoExpirationInDays object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    BoletoExpirationInDays object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final anyOf = object.anyOf;
    return serializers.serialize(anyOf, specifiedType: FullType(AnyOf, anyOf.valueTypes.map((type) => FullType(type)).toList()))!;
  }

  @override
  BoletoExpirationInDays deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BoletoExpirationInDaysBuilder();
    Object? anyOfDataSrc;
    final targetType = const FullType(AnyOf, [FullType(int), FullType(int), ]);
    anyOfDataSrc = serialized;
    result.anyOf = serializers.deserialize(anyOfDataSrc, specifiedType: targetType) as AnyOf;
    return result.build();
  }
}

