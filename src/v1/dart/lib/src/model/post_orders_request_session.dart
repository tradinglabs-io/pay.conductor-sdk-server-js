//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_orders_request_session.g.dart';

/// Caso o externalSessionId ou sessionId sejam fornecidos e houver uma sessão existente, ela será atualizada com os novos dados. Caso contrário, uma nova sessão será criada.
///
/// Properties:
/// * [expiresInMinutes] - Tempo em minutos para expiração da sessão do checkout
/// * [checkoutUrl] - URL do checkout para que possamos redirecionar
/// * [sessionId] - Id gerado pelo nosso serviço para identificar a sessão de checkout
/// * [externalSessionId] - Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho
@BuiltValue()
abstract class PostOrdersRequestSession implements Built<PostOrdersRequestSession, PostOrdersRequestSessionBuilder> {
  /// Tempo em minutos para expiração da sessão do checkout
  @BuiltValueField(wireName: r'expiresInMinutes')
  num? get expiresInMinutes;

  /// URL do checkout para que possamos redirecionar
  @BuiltValueField(wireName: r'checkoutUrl')
  String? get checkoutUrl;

  /// Id gerado pelo nosso serviço para identificar a sessão de checkout
  @BuiltValueField(wireName: r'sessionId')
  String? get sessionId;

  /// Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho
  @BuiltValueField(wireName: r'externalSessionId')
  String? get externalSessionId;

  PostOrdersRequestSession._();

  factory PostOrdersRequestSession([void updates(PostOrdersRequestSessionBuilder b)]) = _$PostOrdersRequestSession;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostOrdersRequestSessionBuilder b) => b
      ..expiresInMinutes = 30;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostOrdersRequestSession> get serializer => _$PostOrdersRequestSessionSerializer();
}

class _$PostOrdersRequestSessionSerializer implements PrimitiveSerializer<PostOrdersRequestSession> {
  @override
  final Iterable<Type> types = const [PostOrdersRequestSession, _$PostOrdersRequestSession];

  @override
  final String wireName = r'PostOrdersRequestSession';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostOrdersRequestSession object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.expiresInMinutes != null) {
      yield r'expiresInMinutes';
      yield serializers.serialize(
        object.expiresInMinutes,
        specifiedType: const FullType(num),
      );
    }
    if (object.checkoutUrl != null) {
      yield r'checkoutUrl';
      yield serializers.serialize(
        object.checkoutUrl,
        specifiedType: const FullType(String),
      );
    }
    if (object.sessionId != null) {
      yield r'sessionId';
      yield serializers.serialize(
        object.sessionId,
        specifiedType: const FullType(String),
      );
    }
    if (object.externalSessionId != null) {
      yield r'externalSessionId';
      yield serializers.serialize(
        object.externalSessionId,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostOrdersRequestSession object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostOrdersRequestSessionBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'expiresInMinutes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.expiresInMinutes = valueDes;
          break;
        case r'checkoutUrl':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.checkoutUrl = valueDes;
          break;
        case r'sessionId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sessionId = valueDes;
          break;
        case r'externalSessionId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.externalSessionId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostOrdersRequestSession deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostOrdersRequestSessionBuilder();
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

