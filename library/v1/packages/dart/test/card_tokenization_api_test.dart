import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for CardTokenizationApi
void main() {
  final instance = Openapi().getCardTokenizationApi();

  group(CardTokenizationApi, () {
    // Tokenize Card
    //
    // Tokenize credit cards for future charges.
    //
    //Future<CardTokenizationCreateResponse> cardTokenize(CardTokenizationCreateRequest cardTokenizationCreateRequest) async
    test('test cardTokenize', () async {
      // TODO
    });

  });
}
