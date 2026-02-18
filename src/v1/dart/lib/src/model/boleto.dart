//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/boleto_expiration_in_days.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'boleto.g.dart';

/// Boleto
///
/// Properties:
/// * [paymentMethod] 
/// * [expirationInDays] 
@BuiltValue()
abstract class Boleto implements Built<Boleto, BoletoBuilder> {
  @BuiltValueField(wireName: r'paymentMethod')
  String get paymentMethod;

  @BuiltValueField(wireName: r'expirationInDays')
  BoletoExpirationInDays? get expirationInDays;

  Boleto._();

  factory Boleto([void updates(BoletoBuilder b)]) = _$Boleto;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BoletoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Boleto> get serializer => _$BoletoSerializer();
}

class _$BoletoSerializer implements PrimitiveSerializer<Boleto> {
  @override
  final Iterable<Type> types = const [Boleto, _$Boleto];

  @override
  final String wireName = r'Boleto';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Boleto object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentMethod';
    yield serializers.serialize(
      object.paymentMethod,
      specifiedType: const FullType(String),
    );
    if (object.expirationInDays != null) {
      yield r'expirationInDays';
      yield serializers.serialize(
        object.expirationInDays,
        specifiedType: const FullType(BoletoExpirationInDays),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Boleto object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BoletoBuilder result,
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
        case r'expirationInDays':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BoletoExpirationInDays),
          ) as BoletoExpirationInDays;
          result.expirationInDays.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Boleto deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BoletoBuilder();
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

