//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:openapi/src/model/date.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/any_of.dart';

part 'withdraw_create_response_payed_at.g.dart';

/// Date and time when the withdrawal was paid (ISO 8601 format)
@BuiltValue()
abstract class WithdrawCreateResponsePayedAt implements Built<WithdrawCreateResponsePayedAt, WithdrawCreateResponsePayedAtBuilder> {
  /// Any Of [Date], [DateTime], [num]
  AnyOf get anyOf;

  WithdrawCreateResponsePayedAt._();

  factory WithdrawCreateResponsePayedAt([void updates(WithdrawCreateResponsePayedAtBuilder b)]) = _$WithdrawCreateResponsePayedAt;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WithdrawCreateResponsePayedAtBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WithdrawCreateResponsePayedAt> get serializer => _$WithdrawCreateResponsePayedAtSerializer();
}

class _$WithdrawCreateResponsePayedAtSerializer implements PrimitiveSerializer<WithdrawCreateResponsePayedAt> {
  @override
  final Iterable<Type> types = const [WithdrawCreateResponsePayedAt, _$WithdrawCreateResponsePayedAt];

  @override
  final String wireName = r'WithdrawCreateResponsePayedAt';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WithdrawCreateResponsePayedAt object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    WithdrawCreateResponsePayedAt object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final anyOf = object.anyOf;
    return serializers.serialize(anyOf, specifiedType: FullType(AnyOf, anyOf.valueTypes.map((type) => FullType(type)).toList()))!;
  }

  @override
  WithdrawCreateResponsePayedAt deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WithdrawCreateResponsePayedAtBuilder();
    Object? anyOfDataSrc;
    final targetType = const FullType(AnyOf, [FullType(Date), FullType(DateTime), FullType(Date), FullType(num), ]);
    anyOfDataSrc = serialized;
    result.anyOf = serializers.deserialize(anyOfDataSrc, specifiedType: targetType) as AnyOf;
    return result.build();
  }
}

