//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/customer_create_request.dart';
import 'package:openapi/src/model/address_create_request.dart';
import 'package:openapi/src/model/card_tokenization_customer_by_id_data.dart';
import 'package:openapi/src/model/document_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'card_tokenization_create_request_customer.g.dart';

/// CardTokenizationCreateRequestCustomer
///
/// Properties:
/// * [address] 
/// * [documentNumber] - Customer CPF or CNPJ without formatting
/// * [documentType] 
/// * [email] - Customer email
/// * [name] - Customer full name
/// * [phoneNumber] - Customer phone number in +55 DD 9XXXXXXXX format
/// * [id] - ID of an existing customer
@BuiltValue()
abstract class CardTokenizationCreateRequestCustomer implements Built<CardTokenizationCreateRequestCustomer, CardTokenizationCreateRequestCustomerBuilder> {
  /// One Of [CardTokenizationCustomerByIdData], [CustomerCreateRequest]
  OneOf get oneOf;

  CardTokenizationCreateRequestCustomer._();

  factory CardTokenizationCreateRequestCustomer([void updates(CardTokenizationCreateRequestCustomerBuilder b)]) = _$CardTokenizationCreateRequestCustomer;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CardTokenizationCreateRequestCustomerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CardTokenizationCreateRequestCustomer> get serializer => _$CardTokenizationCreateRequestCustomerSerializer();
}

class _$CardTokenizationCreateRequestCustomerSerializer implements PrimitiveSerializer<CardTokenizationCreateRequestCustomer> {
  @override
  final Iterable<Type> types = const [CardTokenizationCreateRequestCustomer, _$CardTokenizationCreateRequestCustomer];

  @override
  final String wireName = r'CardTokenizationCreateRequestCustomer';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CardTokenizationCreateRequestCustomer object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    CardTokenizationCreateRequestCustomer object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  CardTokenizationCreateRequestCustomer deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CardTokenizationCreateRequestCustomerBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(CustomerCreateRequest), FullType(CardTokenizationCustomerByIdData), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

