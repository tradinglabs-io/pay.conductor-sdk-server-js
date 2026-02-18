import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for SaquesETransfernciasApi
void main() {
  final instance = Openapi().getSaquesETransfernciasApi();

  group(SaquesETransfernciasApi, () {
    // Lista os saques
    //
    // Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)
    //
    //Future getWithdraws(String period, num page, num pageSize, { DateTime endDate, DateTime startDate, String id }) async
    test('test getWithdraws', () async {
      // TODO
    });

    // Buscar pelo ID
    //
    // Retorna os detalhes de um saque ou transferência específico usando seu ID
    //
    //Future getWithdrawsById(String id) async
    test('test getWithdrawsById', () async {
      // TODO
    });

    // Cria saque
    //
    // Realiza um novo saque ou transferência para a conta de pagamento informada
    //
    //Future<PostWithdraws200Response> postWithdraws(PostWithdrawsRequest postWithdrawsRequest) async
    test('test postWithdraws', () async {
      // TODO
    });

  });
}
