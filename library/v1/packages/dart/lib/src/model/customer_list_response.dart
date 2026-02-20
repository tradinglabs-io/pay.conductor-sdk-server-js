//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/customer_read_response.dart';
import 'package:openapi/src/model/customer_list_pagination.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'customer_list_response.g.dart';

/// Paginated list of customers
///
/// Properties:
/// * [data] - List of customers
/// * [pagination] 
@BuiltValue()
abstract class CustomerListResponse implements Built<CustomerListResponse, CustomerListResponseBuilder> {
  /// List of customers
  @BuiltValueField(wireName: r'data')
  BuiltList<CustomerReadResponse> get data;

  @BuiltValueField(wireName: r'pagination')
  CustomerListPagination get pagination;

  CustomerListResponse._();

  factory CustomerListResponse([void updates(CustomerListResponseBuilder b)]) = _$CustomerListResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CustomerListResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CustomerListResponse> get serializer => _$CustomerListResponseSerializer();
}

class _$CustomerListResponseSerializer implements PrimitiveSerializer<CustomerListResponse> {
  @override
  final Iterable<Type> types = const [CustomerListResponse, _$CustomerListResponse];

  @override
  final String wireName = r'CustomerListResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CustomerListResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'data';
    yield serializers.serialize(
      object.data,
      specifiedType: const FullType(BuiltList, [FullType(CustomerReadResponse)]),
    );
    yield r'pagination';
    yield serializers.serialize(
      object.pagination,
      specifiedType: const FullType(CustomerListPagination),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CustomerListResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CustomerListResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(CustomerReadResponse)]),
          ) as BuiltList<CustomerReadResponse>;
          result.data.replace(valueDes);
          break;
        case r'pagination':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CustomerListPagination),
          ) as CustomerListPagination;
          result.pagination.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CustomerListResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CustomerListResponseBuilder();
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

