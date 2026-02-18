import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PostOrdersRequest
void main() {
  final instance = PostOrdersRequestBuilder();
  // TODO add properties to the builder and call build()

  group(PostOrdersRequest, () {
    // Valor total a ser cobrado no pedido em valor flutuante
    // num chargeAmount
    test('to test the property `chargeAmount`', () async {
      // TODO
    });

    // Endereço IP do cliente
    // String clientIp
    test('to test the property `clientIp`', () async {
      // TODO
    });

    // Cliente customer
    test('to test the property `customer`', () async {
      // TODO
    });

    // Valor do desconto
    // num discountAmount (default value: 0)
    test('to test the property `discountAmount`', () async {
      // TODO
    });

    // ID da ordem no seu sistema
    // String externalId
    test('to test the property `externalId`', () async {
      // TODO
    });

    // PostOrdersRequestFingerprints fingerprints
    test('to test the property `fingerprints`', () async {
      // TODO
    });

    // Lista de produtos ou serviços do pedido
    // BuiltList<PostOrdersRequestItemsInner> items
    test('to test the property `items`', () async {
      // TODO
    });

    // MerchantInput merchant
    test('to test the property `merchant`', () async {
      // TODO
    });

    // PostOrdersRequestPayment payment
    test('to test the property `payment`', () async {
      // TODO
    });

    // Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real)
    // num splitAmountTotal
    test('to test the property `splitAmountTotal`', () async {
      // TODO
    });

    // PostOrdersRequestSession session
    test('to test the property `session`', () async {
      // TODO
    });

    // Valor do frete
    // num shippingFee (default value: 0)
    test('to test the property `shippingFee`', () async {
      // TODO
    });

    // Taxas adicionais
    // num taxFee (default value: 0)
    test('to test the property `taxFee`', () async {
      // TODO
    });

    // Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves
    // JsonObject metadata
    test('to test the property `metadata`', () async {
      // TODO
    });

  });
}
