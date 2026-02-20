//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'order_fraud_fingerprints.g.dart';

/// Fraud analysis fingerprint data
///
/// Properties:
/// * [threatMetrixFingerprintId] - ThreatMetrix fingerprint ID for fraud analysis
@BuiltValue()
abstract class OrderFraudFingerprints implements Built<OrderFraudFingerprints, OrderFraudFingerprintsBuilder> {
  /// ThreatMetrix fingerprint ID for fraud analysis
  @BuiltValueField(wireName: r'threatMetrixFingerprintId')
  String? get threatMetrixFingerprintId;

  OrderFraudFingerprints._();

  factory OrderFraudFingerprints([void updates(OrderFraudFingerprintsBuilder b)]) = _$OrderFraudFingerprints;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OrderFraudFingerprintsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OrderFraudFingerprints> get serializer => _$OrderFraudFingerprintsSerializer();
}

class _$OrderFraudFingerprintsSerializer implements PrimitiveSerializer<OrderFraudFingerprints> {
  @override
  final Iterable<Type> types = const [OrderFraudFingerprints, _$OrderFraudFingerprints];

  @override
  final String wireName = r'OrderFraudFingerprints';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OrderFraudFingerprints object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.threatMetrixFingerprintId != null) {
      yield r'threatMetrixFingerprintId';
      yield serializers.serialize(
        object.threatMetrixFingerprintId,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OrderFraudFingerprints object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OrderFraudFingerprintsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'threatMetrixFingerprintId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.threatMetrixFingerprintId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OrderFraudFingerprints deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OrderFraudFingerprintsBuilder();
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

