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

import 'package:openapi/src/model/address_create_request.dart';
import 'package:openapi/src/model/available_payment_methods.dart';
import 'package:openapi/src/model/card_create_request.dart';
import 'package:openapi/src/model/card_expiration_data.dart';
import 'package:openapi/src/model/card_tokenization_create_request.dart';
import 'package:openapi/src/model/card_tokenization_create_request_customer.dart';
import 'package:openapi/src/model/card_tokenization_create_response.dart';
import 'package:openapi/src/model/card_tokenization_customer_by_id_data.dart';
import 'package:openapi/src/model/customer_address_response.dart';
import 'package:openapi/src/model/customer_create_request.dart';
import 'package:openapi/src/model/customer_list_pagination.dart';
import 'package:openapi/src/model/customer_list_response.dart';
import 'package:openapi/src/model/customer_read_response.dart';
import 'package:openapi/src/model/customer_update_request.dart';
import 'package:openapi/src/model/document_type.dart';
import 'package:openapi/src/model/event.dart';
import 'package:openapi/src/model/merchant_input.dart';
import 'package:openapi/src/model/order_bank_slip_info.dart';
import 'package:openapi/src/model/order_bank_slip_payment_request.dart';
import 'package:openapi/src/model/order_confirm_response.dart';
import 'package:openapi/src/model/order_create_request.dart';
import 'package:openapi/src/model/order_create_request_session.dart';
import 'package:openapi/src/model/order_create_response.dart';
import 'package:openapi/src/model/order_create_response_order_items_inner.dart';
import 'package:openapi/src/model/order_create_response_session.dart';
import 'package:openapi/src/model/order_credit_card_info.dart';
import 'package:openapi/src/model/order_credit_card_payment_request.dart';
import 'package:openapi/src/model/order_credit_card_payment_request_card.dart';
import 'package:openapi/src/model/order_draft_payment_request.dart';
import 'package:openapi/src/model/order_fraud_fingerprints.dart';
import 'package:openapi/src/model/order_item_data.dart';
import 'package:openapi/src/model/order_nu_pay_info.dart';
import 'package:openapi/src/model/order_nu_pay_payment_request.dart';
import 'package:openapi/src/model/order_nu_pay_payment_request_nu_pay.dart';
import 'package:openapi/src/model/order_pix_info.dart';
import 'package:openapi/src/model/order_pix_payment_request.dart';
import 'package:openapi/src/model/order_payment_request.dart';
import 'package:openapi/src/model/order_pic_pay_info.dart';
import 'package:openapi/src/model/order_pic_pay_payment_request.dart';
import 'package:openapi/src/model/order_tokenized_card_data.dart';
import 'package:openapi/src/model/payment_method.dart';
import 'package:openapi/src/model/pix_type.dart';
import 'package:openapi/src/model/status.dart';
import 'package:openapi/src/model/withdraw_create_request.dart';
import 'package:openapi/src/model/withdraw_create_response.dart';
import 'package:openapi/src/model/withdraw_create_response_payed_at.dart';
import 'package:openapi/src/model/withdraw_create_response_payout_account.dart';
import 'package:openapi/src/model/withdraw_payout_account_data.dart';

part 'serializers.g.dart';

@SerializersFor([
  AddressCreateRequest,
  AvailablePaymentMethods,
  CardCreateRequest,
  CardExpirationData,
  CardTokenizationCreateRequest,
  CardTokenizationCreateRequestCustomer,
  CardTokenizationCreateResponse,
  CardTokenizationCustomerByIdData,
  CustomerAddressResponse,
  CustomerCreateRequest,
  CustomerListPagination,
  CustomerListResponse,
  CustomerReadResponse,
  CustomerUpdateRequest,
  DocumentType,
  Event,
  MerchantInput,
  OrderBankSlipInfo,
  OrderBankSlipPaymentRequest,
  OrderConfirmResponse,
  OrderCreateRequest,
  OrderCreateRequestSession,
  OrderCreateResponse,
  OrderCreateResponseOrderItemsInner,
  OrderCreateResponseSession,
  OrderCreditCardInfo,
  OrderCreditCardPaymentRequest,
  OrderCreditCardPaymentRequestCard,
  OrderDraftPaymentRequest,
  OrderFraudFingerprints,
  OrderItemData,
  OrderNuPayInfo,
  OrderNuPayPaymentRequest,
  OrderNuPayPaymentRequestNuPay,
  OrderPIXInfo,
  OrderPIXPaymentRequest,
  OrderPaymentRequest,
  OrderPicPayInfo,
  OrderPicPayPaymentRequest,
  OrderTokenizedCardData,
  PaymentMethod,
  PixType,
  Status,
  WithdrawCreateRequest,
  WithdrawCreateResponse,
  WithdrawCreateResponsePayedAt,
  WithdrawCreateResponsePayoutAccount,
  WithdrawPayoutAccountData,
])
Serializers serializers = (_$serializers.toBuilder()
      ..add(const OneOfSerializer())
      ..add(const AnyOfSerializer())
      ..add(const DateSerializer())
      ..add(Iso8601DateTimeSerializer())
    ).build();

Serializers standardSerializers =
    (serializers.toBuilder()..addPlugin(StandardJsonPlugin())).build();
