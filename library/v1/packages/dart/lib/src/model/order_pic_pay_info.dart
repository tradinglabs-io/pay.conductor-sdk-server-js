//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_pic_pay_info.g.dart';

/// PicPay payment data
///
/// Properties:
/// * [copyAndPasteCode] - PicPay copy and paste code
/// * [qrCodeUrl] - PicPay QR Code image URL
@BuiltValue()
abstract class OrderPicPayInfo implements Built<OrderPicPayInfo, OrderPicPayInfoBuilder> {
  /// PicPay copy and paste code
  @BuiltValueField(wireName: r'copyAndPasteCode')
  String get copyAndPasteCode;

  /// PicPay QR Code image URL
  @BuiltValueField(wireName: r'qrCodeUrl')
  String get qrCodeUrl;

  OrderPicPayInfo._();

  factory OrderPicPayInfo([void updates(OrderPicPayInfoBuilder b)]) = _$OrderPicPayInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderPicPayInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderPicPayInfo> get serializer => _$OrderPicPayInfoSerializer();
}

class _$OrderPicPayInfoSerializer implements PrimitiveSerializer<OrderPicPayInfo> {
  @override
  final Iterable<Type> types = const [OrderPicPayInfo, _$OrderPicPayInfo];

  @override
  final String wireName = r'OrderPicPayInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderPicPayInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'copyAndPasteCode';
    yield serializers.serialize(
      object.copyAndPasteCode,
      specifiedType: const FullType(String),
    );
    yield r'qrCodeUrl';
    yield serializers.serialize(
      object.qrCodeUrl,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderPicPayInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderPicPayInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'copyAndPasteCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.copyAndPasteCode = valueDes;
          break;
        case r'qrCodeUrl':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qrCodeUrl = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderPicPayInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderPicPayInfoBuilder();
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

