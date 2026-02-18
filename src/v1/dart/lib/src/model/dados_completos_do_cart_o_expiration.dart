//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'dados_completos_do_cart_o_expiration.g.dart';

/// DadosCompletosDoCartOExpiration
///
/// Properties:
/// * [month] - Mês de expiração do cartão
/// * [year] - Ano de expiração do cartão
@BuiltValue()
abstract class DadosCompletosDoCartOExpiration implements Built<DadosCompletosDoCartOExpiration, DadosCompletosDoCartOExpirationBuilder> {
  /// Mês de expiração do cartão
  @BuiltValueField(wireName: r'month')
  num get month;

  /// Ano de expiração do cartão
  @BuiltValueField(wireName: r'year')
  num get year;

  DadosCompletosDoCartOExpiration._();

  factory DadosCompletosDoCartOExpiration([void updates(DadosCompletosDoCartOExpirationBuilder b)]) = _$DadosCompletosDoCartOExpiration;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DadosCompletosDoCartOExpirationBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DadosCompletosDoCartOExpiration> get serializer => _$DadosCompletosDoCartOExpirationSerializer();
}

class _$DadosCompletosDoCartOExpirationSerializer implements PrimitiveSerializer<DadosCompletosDoCartOExpiration> {
  @override
  final Iterable<Type> types = const [DadosCompletosDoCartOExpiration, _$DadosCompletosDoCartOExpiration];

  @override
  final String wireName = r'DadosCompletosDoCartOExpiration';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DadosCompletosDoCartOExpiration object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'month';
    yield serializers.serialize(
      object.month,
      specifiedType: const FullType(num),
    );
    yield r'year';
    yield serializers.serialize(
      object.year,
      specifiedType: const FullType(num),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DadosCompletosDoCartOExpiration object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DadosCompletosDoCartOExpirationBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'month':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.month = valueDes;
          break;
        case r'year':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.year = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DadosCompletosDoCartOExpiration deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DadosCompletosDoCartOExpirationBuilder();
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

