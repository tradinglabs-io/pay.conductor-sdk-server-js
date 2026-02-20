//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_bank_slip_info.g.dart';

/// Bank slip payment data
///
/// Properties:
/// * [barCode] - Bank slip bar code
/// * [digitableLine] - Bank slip digitable line
/// * [pdfUrl] - Bank slip PDF URL
@BuiltValue()
abstract class OrderBankSlipInfo implements Built<OrderBankSlipInfo, OrderBankSlipInfoBuilder> {
  /// Bank slip bar code
  @BuiltValueField(wireName: r'barCode')
  String get barCode;

  /// Bank slip digitable line
  @BuiltValueField(wireName: r'digitableLine')
  String get digitableLine;

  /// Bank slip PDF URL
  @BuiltValueField(wireName: r'pdfUrl')
  String? get pdfUrl;

  OrderBankSlipInfo._();

  factory OrderBankSlipInfo([void updates(OrderBankSlipInfoBuilder b)]) = _$OrderBankSlipInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderBankSlipInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderBankSlipInfo> get serializer => _$OrderBankSlipInfoSerializer();
}

class _$OrderBankSlipInfoSerializer implements PrimitiveSerializer<OrderBankSlipInfo> {
  @override
  final Iterable<Type> types = const [OrderBankSlipInfo, _$OrderBankSlipInfo];

  @override
  final String wireName = r'OrderBankSlipInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderBankSlipInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'barCode';
    yield serializers.serialize(
      object.barCode,
      specifiedType: const FullType(String),
    );
    yield r'digitableLine';
    yield serializers.serialize(
      object.digitableLine,
      specifiedType: const FullType(String),
    );
    if (object.pdfUrl != null) {
      yield r'pdfUrl';
      yield serializers.serialize(
        object.pdfUrl,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderBankSlipInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderBankSlipInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'barCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.barCode = valueDes;
          break;
        case r'digitableLine':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.digitableLine = valueDes;
          break;
        case r'pdfUrl':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.pdfUrl = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderBankSlipInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderBankSlipInfoBuilder();
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

