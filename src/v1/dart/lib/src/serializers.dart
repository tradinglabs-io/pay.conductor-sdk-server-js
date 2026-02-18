//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_import

import 'package:one_of_serializer/any_of_serializer.dart';
import 'package:one_of_serializer/one_of_serializer.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/serializer.dart';
import 'package:built_value/standard_json_plugin.dart';
import 'package:built_value/iso_8601_date_time_serializer.dart';
import 'package:openapi/src/date_serializer.dart';
import 'package:openapi/src/model/date.dart';

import 'package:openapi/src/model/boleto.dart';
import 'package:openapi/src/model/boleto_expiration_in_days.dart';
import 'package:openapi/src/model/cart_ode_cr_dito.dart';
import 'package:openapi/src/model/cart_ode_cr_dito_card.dart';
import 'package:openapi/src/model/cart_ode_cr_dito_installments.dart';
import 'package:openapi/src/model/cart_o_tokenizado.dart';
import 'package:openapi/src/model/cliente.dart';
import 'package:openapi/src/model/dados_completos_do_cart_o.dart';
import 'package:openapi/src/model/dados_completos_do_cart_o_expiration.dart';
import 'package:openapi/src/model/endere_odo_cliente.dart';
import 'package:openapi/src/model/merchant_input.dart';
import 'package:openapi/src/model/nu_pay.dart';
import 'package:openapi/src/model/nu_pay_nu_pay.dart';
import 'package:openapi/src/model/pic_pay.dart';
import 'package:openapi/src/model/pix.dart';
import 'package:openapi/src/model/pix_expiration_in_seconds.dart';
import 'package:openapi/src/model/post_orders200_response.dart';
import 'package:openapi/src/model/post_orders200_response_bank_slip.dart';
import 'package:openapi/src/model/post_orders200_response_credit_card.dart';
import 'package:openapi/src/model/post_orders200_response_nu_pay.dart';
import 'package:openapi/src/model/post_orders200_response_order_items_inner.dart';
import 'package:openapi/src/model/post_orders200_response_pic_pay.dart';
import 'package:openapi/src/model/post_orders200_response_pix.dart';
import 'package:openapi/src/model/post_orders200_response_session.dart';
import 'package:openapi/src/model/post_orders_request.dart';
import 'package:openapi/src/model/post_orders_request_fingerprints.dart';
import 'package:openapi/src/model/post_orders_request_items_inner.dart';
import 'package:openapi/src/model/post_orders_request_payment.dart';
import 'package:openapi/src/model/post_orders_request_session.dart';
import 'package:openapi/src/model/post_withdraws200_response.dart';
import 'package:openapi/src/model/post_withdraws200_response_payed_at.dart';
import 'package:openapi/src/model/post_withdraws200_response_payout_account.dart';
import 'package:openapi/src/model/post_withdraws_request.dart';
import 'package:openapi/src/model/post_withdraws_request_payout_account.dart';

part 'serializers.g.dart';

@SerializersFor([
  Boleto,
  BoletoExpirationInDays,
  CartODeCrDito,
  CartODeCrDitoCard,
  CartODeCrDitoInstallments,
  CartOTokenizado,
  Cliente,
  DadosCompletosDoCartO,
  DadosCompletosDoCartOExpiration,
  EndereODoCliente,
  MerchantInput,
  NuPay,
  NuPayNuPay,
  PicPay,
  Pix,
  PixExpirationInSeconds,
  PostOrders200Response,
  PostOrders200ResponseBankSlip,
  PostOrders200ResponseCreditCard,
  PostOrders200ResponseNuPay,
  PostOrders200ResponseOrderItemsInner,
  PostOrders200ResponsePicPay,
  PostOrders200ResponsePix,
  PostOrders200ResponseSession,
  PostOrdersRequest,
  PostOrdersRequestFingerprints,
  PostOrdersRequestItemsInner,
  PostOrdersRequestPayment,
  PostOrdersRequestSession,
  PostWithdraws200Response,
  PostWithdraws200ResponsePayedAt,
  PostWithdraws200ResponsePayoutAccount,
  PostWithdrawsRequest,
  PostWithdrawsRequestPayoutAccount,
])
Serializers serializers = (_$serializers.toBuilder()
      ..add(const OneOfSerializer())
      ..add(const AnyOfSerializer())
      ..add(const DateSerializer())
      ..add(Iso8601DateTimeSerializer())
    ).build();

Serializers standardSerializers =
    (serializers.toBuilder()..addPlugin(StandardJsonPlugin())).build();
