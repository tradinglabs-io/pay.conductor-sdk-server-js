//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'customer_list_pagination.g.dart';

/// Pagination information for customer list
///
/// Properties:
/// * [currentPage] - Current page number
/// * [pageSize] - Number of items per page
/// * [totalItems] - Total number of customers
/// * [totalPages] - Total number of pages
@BuiltValue()
abstract class CustomerListPagination implements Built<CustomerListPagination, CustomerListPaginationBuilder> {
  /// Current page number
  @BuiltValueField(wireName: r'currentPage')
  num get currentPage;

  /// Number of items per page
  @BuiltValueField(wireName: r'pageSize')
  num get pageSize;

  /// Total number of customers
  @BuiltValueField(wireName: r'totalItems')
  num get totalItems;

  /// Total number of pages
  @BuiltValueField(wireName: r'totalPages')
  num get totalPages;

  CustomerListPagination._();

  factory CustomerListPagination([void updates(CustomerListPaginationBuilder b)]) = _$CustomerListPagination;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CustomerListPaginationBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CustomerListPagination> get serializer => _$CustomerListPaginationSerializer();
}

class _$CustomerListPaginationSerializer implements PrimitiveSerializer<CustomerListPagination> {
  @override
  final Iterable<Type> types = const [CustomerListPagination, _$CustomerListPagination];

  @override
  final String wireName = r'CustomerListPagination';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CustomerListPagination object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'currentPage';
    yield serializers.serialize(
      object.currentPage,
      specifiedType: const FullType(num),
    );
    yield r'pageSize';
    yield serializers.serialize(
      object.pageSize,
      specifiedType: const FullType(num),
    );
    yield r'totalItems';
    yield serializers.serialize(
      object.totalItems,
      specifiedType: const FullType(num),
    );
    yield r'totalPages';
    yield serializers.serialize(
      object.totalPages,
      specifiedType: const FullType(num),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CustomerListPagination object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CustomerListPaginationBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'currentPage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.currentPage = valueDes;
          break;
        case r'pageSize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.pageSize = valueDes;
          break;
        case r'totalItems':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.totalItems = valueDes;
          break;
        case r'totalPages':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.totalPages = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CustomerListPagination deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CustomerListPaginationBuilder();
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

