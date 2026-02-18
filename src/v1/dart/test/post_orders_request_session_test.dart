import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for PostOrdersRequestSession
void main() {
  final instance = PostOrdersRequestSessionBuilder();
  // TODO add properties to the builder and call build()

  group(PostOrdersRequestSession, () {
    // Tempo em minutos para expiração da sessão do checkout
    // num expiresInMinutes (default value: 30)
    test('to test the property `expiresInMinutes`', () async {
      // TODO
    });

    // URL do checkout para que possamos redirecionar
    // String checkoutUrl
    test('to test the property `checkoutUrl`', () async {
      // TODO
    });

    // Id gerado pelo nosso serviço para identificar a sessão de checkout
    // String sessionId
    test('to test the property `sessionId`', () async {
      // TODO
    });

    // Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho
    // String externalSessionId
    test('to test the property `externalSessionId`', () async {
      // TODO
    });

  });
}
