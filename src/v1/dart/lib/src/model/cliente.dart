//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/endere_odo_cliente.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'cliente.g.dart';

/// Schema para criação de um novo cliente
///
/// Properties:
/// * [address] 
/// * [documentNumber] - CPF ou CNPJ do cliente sem formatação
/// * [documentType] 
/// * [email] - Email do cliente
/// * [name] - Nome completo do cliente
/// * [phoneNumber] - Número de telefone do cliente no formato +55 DD 9XXXXXXXX
@BuiltValue()
abstract class Cliente implements Built<Cliente, ClienteBuilder> {
  @BuiltValueField(wireName: r'address')
  EndereODoCliente? get address;

  /// CPF ou CNPJ do cliente sem formatação
  @BuiltValueField(wireName: r'documentNumber')
  String get documentNumber;

  @BuiltValueField(wireName: r'documentType')
  ClienteDocumentTypeEnum get documentType;
  // enum documentTypeEnum {  Cpf,  Cnpj,  };

  /// Email do cliente
  @BuiltValueField(wireName: r'email')
  String get email;

  /// Nome completo do cliente
  @BuiltValueField(wireName: r'name')
  String get name;

  /// Número de telefone do cliente no formato +55 DD 9XXXXXXXX
  @BuiltValueField(wireName: r'phoneNumber')
  String? get phoneNumber;

  Cliente._();

  factory Cliente([void updates(ClienteBuilder b)]) = _$Cliente;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ClienteBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Cliente> get serializer => _$ClienteSerializer();
}

class _$ClienteSerializer implements PrimitiveSerializer<Cliente> {
  @override
  final Iterable<Type> types = const [Cliente, _$Cliente];

  @override
  final String wireName = r'Cliente';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Cliente object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.address != null) {
      yield r'address';
      yield serializers.serialize(
        object.address,
        specifiedType: const FullType(EndereODoCliente),
      );
    }
    yield r'documentNumber';
    yield serializers.serialize(
      object.documentNumber,
      specifiedType: const FullType(String),
    );
    yield r'documentType';
    yield serializers.serialize(
      object.documentType,
      specifiedType: const FullType(ClienteDocumentTypeEnum),
    );
    yield r'email';
    yield serializers.serialize(
      object.email,
      specifiedType: const FullType(String),
    );
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    if (object.phoneNumber != null) {
      yield r'phoneNumber';
      yield serializers.serialize(
        object.phoneNumber,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Cliente object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ClienteBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(EndereODoCliente),
          ) as EndereODoCliente;
          result.address.replace(valueDes);
          break;
        case r'documentNumber':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.documentNumber = valueDes;
          break;
        case r'documentType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ClienteDocumentTypeEnum),
          ) as ClienteDocumentTypeEnum;
          result.documentType = valueDes;
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'phoneNumber':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.phoneNumber = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Cliente deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ClienteBuilder();
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

class ClienteDocumentTypeEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'Cpf')
  static const ClienteDocumentTypeEnum cpf = _$clienteDocumentTypeEnum_cpf;
  @BuiltValueEnumConst(wireName: r'Cnpj')
  static const ClienteDocumentTypeEnum cnpj = _$clienteDocumentTypeEnum_cnpj;

  static Serializer<ClienteDocumentTypeEnum> get serializer => _$clienteDocumentTypeEnumSerializer;

  const ClienteDocumentTypeEnum._(String name): super(name);

  static BuiltSet<ClienteDocumentTypeEnum> get values => _$clienteDocumentTypeEnumValues;
  static ClienteDocumentTypeEnum valueOf(String name) => _$clienteDocumentTypeEnumValueOf(name);
}

