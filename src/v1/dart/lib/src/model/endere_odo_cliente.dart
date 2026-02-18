//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'endere_odo_cliente.g.dart';

/// Schema para criação de um novo endereço
///
/// Properties:
/// * [city] - Nome da cidade
/// * [country] - Código do país no formato ISO 3166-1 alpha-2
/// * [neighborhood] - Nome do bairro
/// * [number] - Número do endereço
/// * [state] - Código do estado no formato ISO 3166-2
/// * [street] - Nome da rua
/// * [zipCode] - CEP sem formatação
@BuiltValue()
abstract class EndereODoCliente implements Built<EndereODoCliente, EndereODoClienteBuilder> {
  /// Nome da cidade
  @BuiltValueField(wireName: r'city')
  String get city;

  /// Código do país no formato ISO 3166-1 alpha-2
  @BuiltValueField(wireName: r'country')
  String get country;

  /// Nome do bairro
  @BuiltValueField(wireName: r'neighborhood')
  String get neighborhood;

  /// Número do endereço
  @BuiltValueField(wireName: r'number')
  String get number;

  /// Código do estado no formato ISO 3166-2
  @BuiltValueField(wireName: r'state')
  String get state;

  /// Nome da rua
  @BuiltValueField(wireName: r'street')
  String get street;

  /// CEP sem formatação
  @BuiltValueField(wireName: r'zipCode')
  String get zipCode;

  EndereODoCliente._();

  factory EndereODoCliente([void updates(EndereODoClienteBuilder b)]) = _$EndereODoCliente;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(EndereODoClienteBuilder b) => b
      ..country = 'BR';

  @BuiltValueSerializer(custom: true)
  static Serializer<EndereODoCliente> get serializer => _$EndereODoClienteSerializer();
}

class _$EndereODoClienteSerializer implements PrimitiveSerializer<EndereODoCliente> {
  @override
  final Iterable<Type> types = const [EndereODoCliente, _$EndereODoCliente];

  @override
  final String wireName = r'EndereODoCliente';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    EndereODoCliente object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'city';
    yield serializers.serialize(
      object.city,
      specifiedType: const FullType(String),
    );
    yield r'country';
    yield serializers.serialize(
      object.country,
      specifiedType: const FullType(String),
    );
    yield r'neighborhood';
    yield serializers.serialize(
      object.neighborhood,
      specifiedType: const FullType(String),
    );
    yield r'number';
    yield serializers.serialize(
      object.number,
      specifiedType: const FullType(String),
    );
    yield r'state';
    yield serializers.serialize(
      object.state,
      specifiedType: const FullType(String),
    );
    yield r'street';
    yield serializers.serialize(
      object.street,
      specifiedType: const FullType(String),
    );
    yield r'zipCode';
    yield serializers.serialize(
      object.zipCode,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    EndereODoCliente object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required EndereODoClienteBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'neighborhood':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.neighborhood = valueDes;
          break;
        case r'number':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.number = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'street':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.street = valueDes;
          break;
        case r'zipCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zipCode = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  EndereODoCliente deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = EndereODoClienteBuilder();
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

