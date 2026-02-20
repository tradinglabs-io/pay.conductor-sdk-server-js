//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/address_create_request.dart';
import 'package:openapi/src/model/document_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'customer_update_request.g.dart';

/// Schema for updating customer information
///
/// Properties:
/// * [address] 
/// * [documentNumber] - Customer CPF or CNPJ without formatting
/// * [documentType] 
/// * [email] - Customer email
/// * [name] - Customer full name
/// * [phoneNumber] - Customer phone number in +55 DD 9XXXXXXXX format
@BuiltValue()
abstract class CustomerUpdateRequest implements Built<CustomerUpdateRequest, CustomerUpdateRequestBuilder> {
  @BuiltValueField(wireName: r'address')
  AddressCreateRequest? get address;

  /// Customer CPF or CNPJ without formatting
  @BuiltValueField(wireName: r'documentNumber')
  String? get documentNumber;

  @BuiltValueField(wireName: r'documentType')
  DocumentType? get documentType;
  // enum documentTypeEnum {  Cpf,  Cnpj,  };

  /// Customer email
  @BuiltValueField(wireName: r'email')
  String? get email;

  /// Customer full name
  @BuiltValueField(wireName: r'name')
  String? get name;

  /// Customer phone number in +55 DD 9XXXXXXXX format
  @BuiltValueField(wireName: r'phoneNumber')
  String? get phoneNumber;

  CustomerUpdateRequest._();

  factory CustomerUpdateRequest([void updates(CustomerUpdateRequestBuilder b)]) = _$CustomerUpdateRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CustomerUpdateRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CustomerUpdateRequest> get serializer => _$CustomerUpdateRequestSerializer();
}

class _$CustomerUpdateRequestSerializer implements PrimitiveSerializer<CustomerUpdateRequest> {
  @override
  final Iterable<Type> types = const [CustomerUpdateRequest, _$CustomerUpdateRequest];

  @override
  final String wireName = r'CustomerUpdateRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CustomerUpdateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.address != null) {
      yield r'address';
      yield serializers.serialize(
        object.address,
        specifiedType: const FullType(AddressCreateRequest),
      );
    }
    if (object.documentNumber != null) {
      yield r'documentNumber';
      yield serializers.serialize(
        object.documentNumber,
        specifiedType: const FullType(String),
      );
    }
    if (object.documentType != null) {
      yield r'documentType';
      yield serializers.serialize(
        object.documentType,
        specifiedType: const FullType(DocumentType),
      );
    }
    if (object.email != null) {
      yield r'email';
      yield serializers.serialize(
        object.email,
        specifiedType: const FullType(String),
      );
    }
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
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
    CustomerUpdateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CustomerUpdateRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AddressCreateRequest),
          ) as AddressCreateRequest;
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
            specifiedType: const FullType(DocumentType),
          ) as DocumentType;
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
  CustomerUpdateRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CustomerUpdateRequestBuilder();
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

