//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/post_orders_request_fingerprints.dart';
import 'package:openapi/src/model/post_orders_request_payment.dart';
import 'package:openapi/src/model/cliente.dart';
import 'package:openapi/src/model/merchant_input.dart';
import 'package:openapi/src/model/post_orders_request_items_inner.dart';
import 'package:built_value/json_object.dart';
import 'package:openapi/src/model/post_orders_request_session.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_orders_request.g.dart';

/// PostOrdersRequest
///
/// Properties:
/// * [chargeAmount] - Valor total a ser cobrado no pedido em valor flutuante
/// * [clientIp] - Endereço IP do cliente
/// * [customer] 
/// * [discountAmount] - Valor do desconto
/// * [externalId] - ID da ordem no seu sistema
/// * [fingerprints] 
/// * [items] - Lista de produtos ou serviços do pedido
/// * [merchant] 
/// * [payment] 
/// * [splitAmountTotal] - Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real)
/// * [session] 
/// * [shippingFee] - Valor do frete
/// * [taxFee] - Taxas adicionais
/// * [metadata] - Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves
@BuiltValue()
abstract class PostOrdersRequest implements Built<PostOrdersRequest, PostOrdersRequestBuilder> {
  /// Valor total a ser cobrado no pedido em valor flutuante
  @BuiltValueField(wireName: r'chargeAmount')
  num get chargeAmount;

  /// Endereço IP do cliente
  @BuiltValueField(wireName: r'clientIp')
  String get clientIp;

  @BuiltValueField(wireName: r'customer')
  Cliente get customer;

  /// Valor do desconto
  @BuiltValueField(wireName: r'discountAmount')
  num get discountAmount;

  /// ID da ordem no seu sistema
  @BuiltValueField(wireName: r'externalId')
  String get externalId;

  @BuiltValueField(wireName: r'fingerprints')
  PostOrdersRequestFingerprints? get fingerprints;

  /// Lista de produtos ou serviços do pedido
  @BuiltValueField(wireName: r'items')
  BuiltList<PostOrdersRequestItemsInner>? get items;

  @BuiltValueField(wireName: r'merchant')
  MerchantInput? get merchant;

  @BuiltValueField(wireName: r'payment')
  PostOrdersRequestPayment get payment;

  /// Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real)
  @BuiltValueField(wireName: r'splitAmountTotal')
  num? get splitAmountTotal;

  @BuiltValueField(wireName: r'session')
  PostOrdersRequestSession? get session;

  /// Valor do frete
  @BuiltValueField(wireName: r'shippingFee')
  num get shippingFee;

  /// Taxas adicionais
  @BuiltValueField(wireName: r'taxFee')
  num get taxFee;

  /// Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves
  @BuiltValueField(wireName: r'metadata')
  JsonObject? get metadata;

  PostOrdersRequest._();

  factory PostOrdersRequest([void updates(PostOrdersRequestBuilder b)]) = _$PostOrdersRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostOrdersRequestBuilder b) => b
      ..discountAmount = 0
      ..shippingFee = 0
      ..taxFee = 0;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostOrdersRequest> get serializer => _$PostOrdersRequestSerializer();
}

class _$PostOrdersRequestSerializer implements PrimitiveSerializer<PostOrdersRequest> {
  @override
  final Iterable<Type> types = const [PostOrdersRequest, _$PostOrdersRequest];

  @override
  final String wireName = r'PostOrdersRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostOrdersRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'chargeAmount';
    yield serializers.serialize(
      object.chargeAmount,
      specifiedType: const FullType(num),
    );
    yield r'clientIp';
    yield serializers.serialize(
      object.clientIp,
      specifiedType: const FullType(String),
    );
    yield r'customer';
    yield serializers.serialize(
      object.customer,
      specifiedType: const FullType(Cliente),
    );
    yield r'discountAmount';
    yield serializers.serialize(
      object.discountAmount,
      specifiedType: const FullType(num),
    );
    yield r'externalId';
    yield serializers.serialize(
      object.externalId,
      specifiedType: const FullType(String),
    );
    if (object.fingerprints != null) {
      yield r'fingerprints';
      yield serializers.serialize(
        object.fingerprints,
        specifiedType: const FullType(PostOrdersRequestFingerprints),
      );
    }
    if (object.items != null) {
      yield r'items';
      yield serializers.serialize(
        object.items,
        specifiedType: const FullType(BuiltList, [FullType(PostOrdersRequestItemsInner)]),
      );
    }
    if (object.merchant != null) {
      yield r'merchant';
      yield serializers.serialize(
        object.merchant,
        specifiedType: const FullType(MerchantInput),
      );
    }
    yield r'payment';
    yield serializers.serialize(
      object.payment,
      specifiedType: const FullType(PostOrdersRequestPayment),
    );
    if (object.splitAmountTotal != null) {
      yield r'splitAmountTotal';
      yield serializers.serialize(
        object.splitAmountTotal,
        specifiedType: const FullType(num),
      );
    }
    if (object.session != null) {
      yield r'session';
      yield serializers.serialize(
        object.session,
        specifiedType: const FullType(PostOrdersRequestSession),
      );
    }
    yield r'shippingFee';
    yield serializers.serialize(
      object.shippingFee,
      specifiedType: const FullType(num),
    );
    yield r'taxFee';
    yield serializers.serialize(
      object.taxFee,
      specifiedType: const FullType(num),
    );
    if (object.metadata != null) {
      yield r'metadata';
      yield serializers.serialize(
        object.metadata,
        specifiedType: const FullType(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostOrdersRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostOrdersRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'chargeAmount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.chargeAmount = valueDes;
          break;
        case r'clientIp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.clientIp = valueDes;
          break;
        case r'customer':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(Cliente),
          ) as Cliente;
          result.customer.replace(valueDes);
          break;
        case r'discountAmount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.discountAmount = valueDes;
          break;
        case r'externalId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.externalId = valueDes;
          break;
        case r'fingerprints':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PostOrdersRequestFingerprints),
          ) as PostOrdersRequestFingerprints;
          result.fingerprints.replace(valueDes);
          break;
        case r'items':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(PostOrdersRequestItemsInner)]),
          ) as BuiltList<PostOrdersRequestItemsInner>;
          result.items.replace(valueDes);
          break;
        case r'merchant':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MerchantInput),
          ) as MerchantInput;
          result.merchant.replace(valueDes);
          break;
        case r'payment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PostOrdersRequestPayment),
          ) as PostOrdersRequestPayment;
          result.payment.replace(valueDes);
          break;
        case r'splitAmountTotal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.splitAmountTotal = valueDes;
          break;
        case r'session':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PostOrdersRequestSession),
          ) as PostOrdersRequestSession;
          result.session.replace(valueDes);
          break;
        case r'shippingFee':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.shippingFee = valueDes;
          break;
        case r'taxFee':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.taxFee = valueDes;
          break;
        case r'metadata':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.metadata = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostOrdersRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostOrdersRequestBuilder();
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

