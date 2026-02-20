//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_nu_pay_info.g.dart';

/// NuPay payment data
///
/// Properties:
/// * [paymentUrl] - NuPay payment URL
@BuiltValue()
abstract class OrderNuPayInfo implements Built<OrderNuPayInfo, OrderNuPayInfoBuilder> {
  /// NuPay payment URL
  @BuiltValueField(wireName: r'paymentUrl')
  String get paymentUrl;

  OrderNuPayInfo._();

  factory OrderNuPayInfo([void updates(OrderNuPayInfoBuilder b)]) = _$OrderNuPayInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderNuPayInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderNuPayInfo> get serializer => _$OrderNuPayInfoSerializer();
}

class _$OrderNuPayInfoSerializer implements PrimitiveSerializer<OrderNuPayInfo> {
  @override
  final Iterable<Type> types = const [OrderNuPayInfo, _$OrderNuPayInfo];

  @override
  final String wireName = r'OrderNuPayInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderNuPayInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'paymentUrl';
    yield serializers.serialize(
      object.paymentUrl,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderNuPayInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderNuPayInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'paymentUrl':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.paymentUrl = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderNuPayInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderNuPayInfoBuilder();
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

