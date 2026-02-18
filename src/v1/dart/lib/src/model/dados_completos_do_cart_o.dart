//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/dados_completos_do_cart_o_expiration.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'dados_completos_do_cart_o.g.dart';

/// DadosCompletosDoCartO
///
/// Properties:
/// * [cvv] - Código de segurança do cartão (CVV)
/// * [expiration] 
/// * [holderName] - Nome do titular do cartão
/// * [number] - Número do cartão de crédito
@BuiltValue()
abstract class DadosCompletosDoCartO implements Built<DadosCompletosDoCartO, DadosCompletosDoCartOBuilder> {
  /// Código de segurança do cartão (CVV)
  @BuiltValueField(wireName: r'cvv')
  String get cvv;

  @BuiltValueField(wireName: r'expiration')
  DadosCompletosDoCartOExpiration get expiration;

  /// Nome do titular do cartão
  @BuiltValueField(wireName: r'holderName')
  String get holderName;

  /// Número do cartão de crédito
  @BuiltValueField(wireName: r'number')
  String get number;

  DadosCompletosDoCartO._();

  factory DadosCompletosDoCartO([void updates(DadosCompletosDoCartOBuilder b)]) = _$DadosCompletosDoCartO;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DadosCompletosDoCartOBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DadosCompletosDoCartO> get serializer => _$DadosCompletosDoCartOSerializer();
}

class _$DadosCompletosDoCartOSerializer implements PrimitiveSerializer<DadosCompletosDoCartO> {
  @override
  final Iterable<Type> types = const [DadosCompletosDoCartO, _$DadosCompletosDoCartO];

  @override
  final String wireName = r'DadosCompletosDoCartO';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DadosCompletosDoCartO object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'cvv';
    yield serializers.serialize(
      object.cvv,
      specifiedType: const FullType(String),
    );
    yield r'expiration';
    yield serializers.serialize(
      object.expiration,
      specifiedType: const FullType(DadosCompletosDoCartOExpiration),
    );
    yield r'holderName';
    yield serializers.serialize(
      object.holderName,
      specifiedType: const FullType(String),
    );
    yield r'number';
    yield serializers.serialize(
      object.number,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DadosCompletosDoCartO object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DadosCompletosDoCartOBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'cvv':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cvv = valueDes;
          break;
        case r'expiration':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DadosCompletosDoCartOExpiration),
          ) as DadosCompletosDoCartOExpiration;
          result.expiration.replace(valueDes);
          break;
        case r'holderName':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.holderName = valueDes;
          break;
        case r'number':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.number = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DadosCompletosDoCartO deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DadosCompletosDoCartOBuilder();
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

