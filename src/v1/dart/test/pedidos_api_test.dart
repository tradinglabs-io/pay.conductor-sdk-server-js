import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for PedidosApi
void main() {
  final instance = Openapi().getPedidosApi();

  group(PedidosApi, () {
    // Listar pedidos
    //
    // Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário.
    //
    //Future getOrders(String period, num page, num pageSize, { DateTime endDate, DateTime startDate, String id, String status }) async
    test('test getOrders', () async {
      // TODO
    });

    // Buscar pelo ID
    //
    // Localize os dados completos de um pedido buscando pelo nosso id
    //
    //Future getOrdersById(String id) async
    test('test getOrdersById', () async {
      // TODO
    });

    // Criar pedido
    //
    // Crie um novo pedido para pagamento utilizando os dados fornecidos
    //
    //Future<PostOrders200Response> postOrders(PostOrdersRequest postOrdersRequest) async
    test('test postOrders', () async {
      // TODO
    });

    // Reembolsar pedido
    //
    // Inicie um reembolso para o pedido especificado pelo ID.
    //
    //Future postOrdersByIdRefund(String id) async
    test('test postOrdersByIdRefund', () async {
      // TODO
    });

  });
}
