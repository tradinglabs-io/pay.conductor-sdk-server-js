import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PostWithdrawsRequestPayoutAccount
void main() {
  final instance = PostWithdrawsRequestPayoutAccountBuilder();
  // TODO add properties to the builder and call build()

  group(PostWithdrawsRequestPayoutAccount, () {
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

    // PIX key for withdrawal
    // String pixKey
    test('to test the property `pixKey`', () async {
      // TODO
    });

    // PIX key type
    // String pixType (default value: 'Cnpj')
    test('to test the property `pixType`', () async {
      // TODO
    });

  });
}
