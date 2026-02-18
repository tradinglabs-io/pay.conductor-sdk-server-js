//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_orders_request_items_inner.g.dart';

/// PostOrdersRequestItemsInner
///
/// Properties:
/// * [id] - ID do produto ou serviço no seu sistema
/// * [isPhysical] - Define se o item é um produto físico ou um serviço
/// * [name] - Nome do produto ou serviço
/// * [qty] - Quantidade do produto ou serviço
/// * [unitPrice] - Preço unitário
@BuiltValue()
abstract class PostOrdersRequestItemsInner implements Built<PostOrdersRequestItemsInner, PostOrdersRequestItemsInnerBuilder> {
  /// ID do produto ou serviço no seu sistema
  @BuiltValueField(wireName: r'id')
  String get id;

  /// Define se o item é um produto físico ou um serviço
  @BuiltValueField(wireName: r'isPhysical')
  bool get isPhysical;

  /// Nome do produto ou serviço
  @BuiltValueField(wireName: r'name')
  String get name;

  /// Quantidade do produto ou serviço
  @BuiltValueField(wireName: r'qty')
  num get qty;

  /// Preço unitário
  @BuiltValueField(wireName: r'unitPrice')
  num get unitPrice;

  PostOrdersRequestItemsInner._();

  factory PostOrdersRequestItemsInner([void updates(PostOrdersRequestItemsInnerBuilder b)]) = _$PostOrdersRequestItemsInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostOrdersRequestItemsInnerBuilder b) => b
      ..isPhysical = false;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostOrdersRequestItemsInner> get serializer => _$PostOrdersRequestItemsInnerSerializer();
}

class _$PostOrdersRequestItemsInnerSerializer implements PrimitiveSerializer<PostOrdersRequestItemsInner> {
  @override
  final Iterable<Type> types = const [PostOrdersRequestItemsInner, _$PostOrdersRequestItemsInner];

  @override
  final String wireName = r'PostOrdersRequestItemsInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostOrdersRequestItemsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'isPhysical';
    yield serializers.serialize(
      object.isPhysical,
      specifiedType: const FullType(bool),
    );
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'qty';
    yield serializers.serialize(
      object.qty,
      specifiedType: const FullType(num),
    );
    yield r'unitPrice';
    yield serializers.serialize(
      object.unitPrice,
      specifiedType: const FullType(num),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    PostOrdersRequestItemsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostOrdersRequestItemsInnerBuilder result,
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
        case r'isPhysical':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.isPhysical = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'qty':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.qty = valueDes;
          break;
        case r'unitPrice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.unitPrice = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostOrdersRequestItemsInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostOrdersRequestItemsInnerBuilder();
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

