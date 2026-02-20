//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/pix_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'withdraw_payout_account_data.g.dart';

/// Bank account information for withdrawal
///
/// Properties:
/// * [ownerDocument] - Account holder document (CPF or CNPJ)
/// * [ownerName] - Account holder name
/// * [pixKey] - PIX key for withdrawal
/// * [pixType] 
@BuiltValue()
abstract class WithdrawPayoutAccountData implements Built<WithdrawPayoutAccountData, WithdrawPayoutAccountDataBuilder> {
  /// Account holder document (CPF or CNPJ)
  @BuiltValueField(wireName: r'ownerDocument')
  String get ownerDocument;

  /// Account holder name
  @BuiltValueField(wireName: r'ownerName')
  String get ownerName;

  /// PIX key for withdrawal
  @BuiltValueField(wireName: r'pixKey')
  String get pixKey;

  @BuiltValueField(wireName: r'pixType')
  PixType get pixType;
  // enum pixTypeEnum {  Cpf,  Cnpj,  Email,  Phone,  Random,  };

  WithdrawPayoutAccountData._();

  factory WithdrawPayoutAccountData([void updates(WithdrawPayoutAccountDataBuilder b)]) = _$WithdrawPayoutAccountData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WithdrawPayoutAccountDataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WithdrawPayoutAccountData> get serializer => _$WithdrawPayoutAccountDataSerializer();
}

class _$WithdrawPayoutAccountDataSerializer implements PrimitiveSerializer<WithdrawPayoutAccountData> {
  @override
  final Iterable<Type> types = const [WithdrawPayoutAccountData, _$WithdrawPayoutAccountData];

  @override
  final String wireName = r'WithdrawPayoutAccountData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WithdrawPayoutAccountData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'ownerDocument';
    yield serializers.serialize(
      object.ownerDocument,
      specifiedType: const FullType(String),
    );
    yield r'ownerName';
    yield serializers.serialize(
      object.ownerName,
      specifiedType: const FullType(String),
    );
    yield r'pixKey';
    yield serializers.serialize(
      object.pixKey,
      specifiedType: const FullType(String),
    );
    yield r'pixType';
    yield serializers.serialize(
      object.pixType,
      specifiedType: const FullType(PixType),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WithdrawPayoutAccountData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WithdrawPayoutAccountDataBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ownerDocument':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ownerDocument = valueDes;
          break;
        case r'ownerName':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ownerName = valueDes;
          break;
        case r'pixKey':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.pixKey = valueDes;
          break;
        case r'pixType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PixType),
          ) as PixType;
          result.pixType = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WithdrawPayoutAccountData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WithdrawPayoutAccountDataBuilder();
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

