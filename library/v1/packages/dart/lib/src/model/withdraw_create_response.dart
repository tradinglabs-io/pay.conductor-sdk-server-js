//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/status.dart';
import 'package:openapi/src/model/withdraw_create_response_payed_at.dart';
import 'package:openapi/src/model/withdraw_create_response_payout_account.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'withdraw_create_response.g.dart';

/// Response after creating a withdrawal or transfer
///
/// Properties:
/// * [id] - Unique withdrawal identifier
/// * [externalId] - Withdrawal ID in your system
/// * [externalIntegrationKey] - Provider key used for the withdrawal
/// * [externalIntegrationId] - Withdrawal ID in the payment provider
/// * [costFee] - Cost fee applied to the withdrawal
/// * [status] 
/// * [errorCode] - Error code, if any
/// * [errorMessage] - Descriptive error message, if any
/// * [payedAt] 
/// * [payoutAccount] 
@BuiltValue()
abstract class WithdrawCreateResponse implements Built<WithdrawCreateResponse, WithdrawCreateResponseBuilder> {
  /// Unique withdrawal identifier
  @BuiltValueField(wireName: r'id')
  String get id;

  /// Withdrawal ID in your system
  @BuiltValueField(wireName: r'externalId')
  String? get externalId;

  /// Provider key used for the withdrawal
  @BuiltValueField(wireName: r'externalIntegrationKey')
  String get externalIntegrationKey;

  /// Withdrawal ID in the payment provider
  @BuiltValueField(wireName: r'externalIntegrationId')
  String? get externalIntegrationId;

  /// Cost fee applied to the withdrawal
  @BuiltValueField(wireName: r'costFee')
  num get costFee;

  @BuiltValueField(wireName: r'status')
  Status get status;
  // enum statusEnum {  Generating,  Pending,  Completed,  Failed,  Canceled,  Refunding,  Refunded,  InDispute,  Chargeback,  Transferring,  };

  /// Error code, if any
  @BuiltValueField(wireName: r'errorCode')
  String? get errorCode;

  /// Descriptive error message, if any
  @BuiltValueField(wireName: r'errorMessage')
  String? get errorMessage;

  @BuiltValueField(wireName: r'payedAt')
  WithdrawCreateResponsePayedAt? get payedAt;

  @BuiltValueField(wireName: r'payoutAccount')
  WithdrawCreateResponsePayoutAccount get payoutAccount;

  WithdrawCreateResponse._();

  factory WithdrawCreateResponse([void updates(WithdrawCreateResponseBuilder b)]) = _$WithdrawCreateResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WithdrawCreateResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WithdrawCreateResponse> get serializer => _$WithdrawCreateResponseSerializer();
}

class _$WithdrawCreateResponseSerializer implements PrimitiveSerializer<WithdrawCreateResponse> {
  @override
  final Iterable<Type> types = const [WithdrawCreateResponse, _$WithdrawCreateResponse];

  @override
  final String wireName = r'WithdrawCreateResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WithdrawCreateResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'externalId';
    yield object.externalId == null ? null : serializers.serialize(
      object.externalId,
      specifiedType: const FullType.nullable(String),
    );
    yield r'externalIntegrationKey';
    yield serializers.serialize(
      object.externalIntegrationKey,
      specifiedType: const FullType(String),
    );
    yield r'externalIntegrationId';
    yield object.externalIntegrationId == null ? null : serializers.serialize(
      object.externalIntegrationId,
      specifiedType: const FullType.nullable(String),
    );
    yield r'costFee';
    yield serializers.serialize(
      object.costFee,
      specifiedType: const FullType(num),
    );
    yield r'status';
    yield serializers.serialize(
      object.status,
      specifiedType: const FullType(Status),
    );
    yield r'errorCode';
    yield object.errorCode == null ? null : serializers.serialize(
      object.errorCode,
      specifiedType: const FullType.nullable(String),
    );
    yield r'errorMessage';
    yield object.errorMessage == null ? null : serializers.serialize(
      object.errorMessage,
      specifiedType: const FullType.nullable(String),
    );
    yield r'payedAt';
    yield object.payedAt == null ? null : serializers.serialize(
      object.payedAt,
      specifiedType: const FullType.nullable(WithdrawCreateResponsePayedAt),
    );
    yield r'payoutAccount';
    yield serializers.serialize(
      object.payoutAccount,
      specifiedType: const FullType(WithdrawCreateResponsePayoutAccount),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WithdrawCreateResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WithdrawCreateResponseBuilder result,
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
        case r'externalId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.externalId = valueDes;
          break;
        case r'externalIntegrationKey':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.externalIntegrationKey = valueDes;
          break;
        case r'externalIntegrationId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.externalIntegrationId = valueDes;
          break;
        case r'costFee':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.costFee = valueDes;
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(Status),
          ) as Status;
          result.status = valueDes;
          break;
        case r'errorCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.errorCode = valueDes;
          break;
        case r'errorMessage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.errorMessage = valueDes;
          break;
        case r'payedAt':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(WithdrawCreateResponsePayedAt),
          ) as WithdrawCreateResponsePayedAt?;
          if (valueDes == null) continue;
          result.payedAt.replace(valueDes);
          break;
        case r'payoutAccount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WithdrawCreateResponsePayoutAccount),
          ) as WithdrawCreateResponsePayoutAccount;
          result.payoutAccount.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WithdrawCreateResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WithdrawCreateResponseBuilder();
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

