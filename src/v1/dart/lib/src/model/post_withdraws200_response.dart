//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/post_withdraws200_response_payout_account.dart';
import 'package:openapi/src/model/post_withdraws200_response_payed_at.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_withdraws200_response.g.dart';

/// PostWithdraws200Response
///
/// Properties:
/// * [id] - Identificador único do saque
/// * [externalId] - ID do saque no sistema no seu sistema
/// * [externalIntegrationKey] - Chave do provedor utilizado para o saque
/// * [externalIntegrationId] - ID do saque no provedor de pagamento
/// * [costFee] - Taxa de custo aplicada ao saque
/// * [status] - Status do saque
/// * [errorCode] - Código do erro, se houver
/// * [errorMessage] - Mensagem descritiva do erro, se houver
/// * [payedAt] 
/// * [payoutAccount] 
@BuiltValue()
abstract class PostWithdraws200Response implements Built<PostWithdraws200Response, PostWithdraws200ResponseBuilder> {
  /// Identificador único do saque
  @BuiltValueField(wireName: r'id')
  String get id;

  /// ID do saque no sistema no seu sistema
  @BuiltValueField(wireName: r'externalId')
  String? get externalId;

  /// Chave do provedor utilizado para o saque
  @BuiltValueField(wireName: r'externalIntegrationKey')
  String get externalIntegrationKey;

  /// ID do saque no provedor de pagamento
  @BuiltValueField(wireName: r'externalIntegrationId')
  String? get externalIntegrationId;

  /// Taxa de custo aplicada ao saque
  @BuiltValueField(wireName: r'costFee')
  num get costFee;

  /// Status do saque
  @BuiltValueField(wireName: r'status')
  PostWithdraws200ResponseStatusEnum get status;
  // enum statusEnum {  Pending,  Transferring,  Completed,  Failed,  };

  /// Código do erro, se houver
  @BuiltValueField(wireName: r'errorCode')
  String? get errorCode;

  /// Mensagem descritiva do erro, se houver
  @BuiltValueField(wireName: r'errorMessage')
  String? get errorMessage;

  @BuiltValueField(wireName: r'payedAt')
  PostWithdraws200ResponsePayedAt? get payedAt;

  @BuiltValueField(wireName: r'payoutAccount')
  PostWithdraws200ResponsePayoutAccount get payoutAccount;

  PostWithdraws200Response._();

  factory PostWithdraws200Response([void updates(PostWithdraws200ResponseBuilder b)]) = _$PostWithdraws200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostWithdraws200ResponseBuilder b) => b
      ..status = PostWithdraws200ResponseStatusEnum.valueOf('Pending');

  @BuiltValueSerializer(custom: true)
  static Serializer<PostWithdraws200Response> get serializer => _$PostWithdraws200ResponseSerializer();
}

class _$PostWithdraws200ResponseSerializer implements PrimitiveSerializer<PostWithdraws200Response> {
  @override
  final Iterable<Type> types = const [PostWithdraws200Response, _$PostWithdraws200Response];

  @override
  final String wireName = r'PostWithdraws200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostWithdraws200Response object, {
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
      specifiedType: const FullType(PostWithdraws200ResponseStatusEnum),
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
      specifiedType: const FullType.nullable(PostWithdraws200ResponsePayedAt),
    );
    yield r'payoutAccount';
    yield serializers.serialize(
      object.payoutAccount,
      specifiedType: const FullType(PostWithdraws200ResponsePayoutAccount),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    PostWithdraws200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostWithdraws200ResponseBuilder result,
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
            specifiedType: const FullType(PostWithdraws200ResponseStatusEnum),
          ) as PostWithdraws200ResponseStatusEnum;
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
            specifiedType: const FullType.nullable(PostWithdraws200ResponsePayedAt),
          ) as PostWithdraws200ResponsePayedAt?;
          if (valueDes == null) continue;
          result.payedAt.replace(valueDes);
          break;
        case r'payoutAccount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PostWithdraws200ResponsePayoutAccount),
          ) as PostWithdraws200ResponsePayoutAccount;
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
  PostWithdraws200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostWithdraws200ResponseBuilder();
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

class PostWithdraws200ResponseStatusEnum extends EnumClass {

  /// Status do saque
  @BuiltValueEnumConst(wireName: r'Pending')
  static const PostWithdraws200ResponseStatusEnum pending = _$postWithdraws200ResponseStatusEnum_pending;
  /// Status do saque
  @BuiltValueEnumConst(wireName: r'Transferring')
  static const PostWithdraws200ResponseStatusEnum transferring = _$postWithdraws200ResponseStatusEnum_transferring;
  /// Status do saque
  @BuiltValueEnumConst(wireName: r'Completed')
  static const PostWithdraws200ResponseStatusEnum completed = _$postWithdraws200ResponseStatusEnum_completed;
  /// Status do saque
  @BuiltValueEnumConst(wireName: r'Failed')
  static const PostWithdraws200ResponseStatusEnum failed = _$postWithdraws200ResponseStatusEnum_failed;

  static Serializer<PostWithdraws200ResponseStatusEnum> get serializer => _$postWithdraws200ResponseStatusEnumSerializer;

  const PostWithdraws200ResponseStatusEnum._(String name): super(name);

  static BuiltSet<PostWithdraws200ResponseStatusEnum> get values => _$postWithdraws200ResponseStatusEnumValues;
  static PostWithdraws200ResponseStatusEnum valueOf(String name) => _$postWithdraws200ResponseStatusEnumValueOf(name);
}

