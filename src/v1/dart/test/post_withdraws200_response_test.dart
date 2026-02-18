import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PostWithdraws200Response
void main() {
  final instance = PostWithdraws200ResponseBuilder();
  // TODO add properties to the builder and call build()

  group(PostWithdraws200Response, () {
    // Identificador único do saque
    // String id
    test('to test the property `id`', () async {
      // TODO
    });

    // ID do saque no sistema no seu sistema
    // String externalId
    test('to test the property `externalId`', () async {
      // TODO
    });

    // Chave do provedor utilizado para o saque
    // String externalIntegrationKey
    test('to test the property `externalIntegrationKey`', () async {
      // TODO
    });

    // ID do saque no provedor de pagamento
    // String externalIntegrationId
    test('to test the property `externalIntegrationId`', () async {
      // TODO
    });

    // Taxa de custo aplicada ao saque
    // num costFee
    test('to test the property `costFee`', () async {
      // TODO
    });

    // Status do saque
    // String status (default value: 'Pending')
    test('to test the property `status`', () async {
      // TODO
    });

    // Código do erro, se houver
    // String errorCode
    test('to test the property `errorCode`', () async {
      // TODO
    });

    // Mensagem descritiva do erro, se houver
    // String errorMessage
    test('to test the property `errorMessage`', () async {
      // TODO
    });

    // PostWithdraws200ResponsePayedAt payedAt
    test('to test the property `payedAt`', () async {
      // TODO
    });

    // PostWithdraws200ResponsePayoutAccount payoutAccount
    test('to test the property `payoutAccount`', () async {
      // TODO
    });

  });
}
