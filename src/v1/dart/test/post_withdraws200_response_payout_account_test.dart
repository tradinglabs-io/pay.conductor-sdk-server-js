import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PostWithdraws200ResponsePayoutAccount
void main() {
  final instance = PostWithdraws200ResponsePayoutAccountBuilder();
  // TODO add properties to the builder and call build()

  group(PostWithdraws200ResponsePayoutAccount, () {
    // Identificador único da conta de pagamento
    // String id
    test('to test the property `id`', () async {
      // TODO
    });

    // Documento do titular da conta (CPF ou CNPJ)
    // String ownerDocument
    test('to test the property `ownerDocument`', () async {
      // TODO
    });

    // Nome do titular da conta
    // String ownerName
    test('to test the property `ownerName`', () async {
      // TODO
    });

    // Chave PIX utilizada para o saque
    // String pixKey
    test('to test the property `pixKey`', () async {
      // TODO
    });

    // Tipo da chave PIX
    // String pixType (default value: 'Cpf')
    test('to test the property `pixType`', () async {
      // TODO
    });

  });
}
