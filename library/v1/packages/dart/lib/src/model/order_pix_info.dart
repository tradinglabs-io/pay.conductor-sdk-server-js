//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_pix_info.g.dart';

/// PIX payment data and QR code information
///
/// Properties:
/// * [copyAndPasteCode] - PIX copy and paste code
/// * [qrCodeUrl] - PIX QR Code image URL
/// * [endToEndId] - PIX E2E ID
@BuiltValue()
abstract class OrderPIXInfo implements Built<OrderPIXInfo, OrderPIXInfoBuilder> {
  /// PIX copy and paste code
  @BuiltValueField(wireName: r'copyAndPasteCode')
  String get copyAndPasteCode;

  /// PIX QR Code image URL
  @BuiltValueField(wireName: r'qrCodeUrl')
  String get qrCodeUrl;

  /// PIX E2E ID
  @BuiltValueField(wireName: r'endToEndId')
  String? get endToEndId;

  OrderPIXInfo._();

  factory OrderPIXInfo([void updates(OrderPIXInfoBuilder b)]) = _$OrderPIXInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderPIXInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderPIXInfo> get serializer => _$OrderPIXInfoSerializer();
}

class _$OrderPIXInfoSerializer implements PrimitiveSerializer<OrderPIXInfo> {
  @override
  final Iterable<Type> types = const [OrderPIXInfo, _$OrderPIXInfo];

  @override
  final String wireName = r'OrderPIXInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderPIXInfo object, {
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
    yield r'endToEndId';
    yield object.endToEndId == null ? null : serializers.serialize(
      object.endToEndId,
      specifiedType: const FullType.nullable(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderPIXInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderPIXInfoBuilder result,
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
        case r'endToEndId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.endToEndId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderPIXInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderPIXInfoBuilder();
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

