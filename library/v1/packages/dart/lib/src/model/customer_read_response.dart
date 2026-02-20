//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/customer_address_response.dart';
import 'package:openapi/src/model/document_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'customer_read_response.g.dart';

/// Customer response with complete information
///
/// Properties:
/// * [id] - Unique customer identifier
/// * [name] - Customer full name
/// * [email] - Customer email
/// * [documentType] 
/// * [documentNumber] - Customer CPF or CNPJ without formatting
/// * [phoneNumber] - Customer phone number in +55 DD 9XXXXXXXX format
/// * [address] 
/// * [createdAt] - Date and time when the customer was created (ISO 8601 format)
/// * [updatedAt] - Date and time when the customer was last updated (ISO 8601 format)
@BuiltValue()
abstract class CustomerReadResponse implements Built<CustomerReadResponse, CustomerReadResponseBuilder> {
  /// Unique customer identifier
  @BuiltValueField(wireName: r'id')
  String get id;

  /// Customer full name
  @BuiltValueField(wireName: r'name')
  String get name;

  /// Customer email
  @BuiltValueField(wireName: r'email')
  String get email;

  @BuiltValueField(wireName: r'documentType')
  DocumentType get documentType;
  // enum documentTypeEnum {  Cpf,  Cnpj,  };

  /// Customer CPF or CNPJ without formatting
  @BuiltValueField(wireName: r'documentNumber')
  String? get documentNumber;

  /// Customer phone number in +55 DD 9XXXXXXXX format
  @BuiltValueField(wireName: r'phoneNumber')
  String? get phoneNumber;

  @BuiltValueField(wireName: r'address')
  CustomerAddressResponse? get address;

  /// Date and time when the customer was created (ISO 8601 format)
  @BuiltValueField(wireName: r'createdAt')
  String get createdAt;

  /// Date and time when the customer was last updated (ISO 8601 format)
  @BuiltValueField(wireName: r'updatedAt')
  String get updatedAt;

  CustomerReadResponse._();

  factory CustomerReadResponse([void updates(CustomerReadResponseBuilder b)]) = _$CustomerReadResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CustomerReadResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CustomerReadResponse> get serializer => _$CustomerReadResponseSerializer();
}

class _$CustomerReadResponseSerializer implements PrimitiveSerializer<CustomerReadResponse> {
  @override
  final Iterable<Type> types = const [CustomerReadResponse, _$CustomerReadResponse];

  @override
  final String wireName = r'CustomerReadResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CustomerReadResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'email';
    yield serializers.serialize(
      object.email,
      specifiedType: const FullType(String),
    );
    yield r'documentType';
    yield serializers.serialize(
      object.documentType,
      specifiedType: const FullType(DocumentType),
    );
    yield r'documentNumber';
    yield object.documentNumber == null ? null : serializers.serialize(
      object.documentNumber,
      specifiedType: const FullType.nullable(String),
    );
    yield r'phoneNumber';
    yield object.phoneNumber == null ? null : serializers.serialize(
      object.phoneNumber,
      specifiedType: const FullType.nullable(String),
    );
    yield r'address';
    yield object.address == null ? null : serializers.serialize(
      object.address,
      specifiedType: const FullType.nullable(CustomerAddressResponse),
    );
    yield r'createdAt';
    yield serializers.serialize(
      object.createdAt,
      specifiedType: const FullType(String),
    );
    yield r'updatedAt';
    yield serializers.serialize(
      object.updatedAt,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CustomerReadResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CustomerReadResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'documentType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DocumentType),
          ) as DocumentType;
          result.documentType = valueDes;
          break;
        case r'documentNumber':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.documentNumber = valueDes;
          break;
        case r'phoneNumber':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.phoneNumber = valueDes;
          break;
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(CustomerAddressResponse),
          ) as CustomerAddressResponse?;
          if (valueDes == null) continue;
          result.address.replace(valueDes);
          break;
        case r'createdAt':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.createdAt = valueDes;
          break;
        case r'updatedAt':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.updatedAt = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CustomerReadResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CustomerReadResponseBuilder();
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

