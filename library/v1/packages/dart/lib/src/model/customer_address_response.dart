//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'customer_address_response.g.dart';

/// Customer address information
///
/// Properties:
/// * [id] - Unique address identifier
/// * [street] - Street name
/// * [number] - Address number
/// * [neighborhood] - Neighborhood name
/// * [city] - City name
/// * [state] - State code in ISO 3166-2 format
/// * [zipCode] - ZIP code without formatting
/// * [country] - Country code in ISO 3166-1 alpha-2 format
@BuiltValue()
abstract class CustomerAddressResponse implements Built<CustomerAddressResponse, CustomerAddressResponseBuilder> {
  /// Unique address identifier
  @BuiltValueField(wireName: r'id')
  String get id;

  /// Street name
  @BuiltValueField(wireName: r'street')
  String get street;

  /// Address number
  @BuiltValueField(wireName: r'number')
  String get number;

  /// Neighborhood name
  @BuiltValueField(wireName: r'neighborhood')
  String get neighborhood;

  /// City name
  @BuiltValueField(wireName: r'city')
  String get city;

  /// State code in ISO 3166-2 format
  @BuiltValueField(wireName: r'state')
  String get state;

  /// ZIP code without formatting
  @BuiltValueField(wireName: r'zipCode')
  String get zipCode;

  /// Country code in ISO 3166-1 alpha-2 format
  @BuiltValueField(wireName: r'country')
  String get country;

  CustomerAddressResponse._();

  factory CustomerAddressResponse([void updates(CustomerAddressResponseBuilder b)]) = _$CustomerAddressResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CustomerAddressResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CustomerAddressResponse> get serializer => _$CustomerAddressResponseSerializer();
}

class _$CustomerAddressResponseSerializer implements PrimitiveSerializer<CustomerAddressResponse> {
  @override
  final Iterable<Type> types = const [CustomerAddressResponse, _$CustomerAddressResponse];

  @override
  final String wireName = r'CustomerAddressResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CustomerAddressResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'street';
    yield serializers.serialize(
      object.street,
      specifiedType: const FullType(String),
    );
    yield r'number';
    yield serializers.serialize(
      object.number,
      specifiedType: const FullType(String),
    );
    yield r'neighborhood';
    yield serializers.serialize(
      object.neighborhood,
      specifiedType: const FullType(String),
    );
    yield r'city';
    yield serializers.serialize(
      object.city,
      specifiedType: const FullType(String),
    );
    yield r'state';
    yield serializers.serialize(
      object.state,
      specifiedType: const FullType(String),
    );
    yield r'zipCode';
    yield serializers.serialize(
      object.zipCode,
      specifiedType: const FullType(String),
    );
    yield r'country';
    yield serializers.serialize(
      object.country,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CustomerAddressResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CustomerAddressResponseBuilder result,
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
        case r'street':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.street = valueDes;
          break;
        case r'number':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.number = valueDes;
          break;
        case r'neighborhood':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.neighborhood = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'zipCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zipCode = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CustomerAddressResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CustomerAddressResponseBuilder();
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

