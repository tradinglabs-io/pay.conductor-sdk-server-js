//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_item_data.g.dart';

/// Product or service item in the order
///
/// Properties:
/// * [id] - Product or service ID in your system
/// * [isPhysical] - Defines if the item is a physical product or a service
/// * [name] - Product or service name
/// * [qty] - Quantity of the product or service
/// * [unitPrice] - Unit price
@BuiltValue()
abstract class OrderItemData implements Built<OrderItemData, OrderItemDataBuilder> {
  /// Product or service ID in your system
  @BuiltValueField(wireName: r'id')
  String get id;

  /// Defines if the item is a physical product or a service
  @BuiltValueField(wireName: r'isPhysical')
  bool get isPhysical;

  /// Product or service name
  @BuiltValueField(wireName: r'name')
  String get name;

  /// Quantity of the product or service
  @BuiltValueField(wireName: r'qty')
  num get qty;

  /// Unit price
  @BuiltValueField(wireName: r'unitPrice')
  num get unitPrice;

  OrderItemData._();

  factory OrderItemData([void updates(OrderItemDataBuilder b)]) = _$OrderItemData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderItemDataBuilder b) => b
      ..isPhysical = false;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderItemData> get serializer => _$OrderItemDataSerializer();
}

class _$OrderItemDataSerializer implements PrimitiveSerializer<OrderItemData> {
  @override
  final Iterable<Type> types = const [OrderItemData, _$OrderItemData];

  @override
  final String wireName = r'OrderItemData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderItemData object, {
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
    OrderItemData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderItemDataBuilder result,
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
  OrderItemData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderItemDataBuilder();
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

