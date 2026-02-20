import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for WithdrawApi
void main() {
  final instance = Openapi().getWithdrawApi();

  group(WithdrawApi, () {
    // Create Withdrawal
    //
    // Create a new withdrawal or transfer to the provided payment account
    //
    //Future<WithdrawCreateResponse> withdrawCreate(WithdrawCreateRequest withdrawCreateRequest) async
    test('test withdrawCreate', () async {
      // TODO
    });

    // List Withdrawals
    //
    // Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)
    //
    //Future withdrawList(num page, num pageSize, { DateTime endDate, DateTime startDate, String id }) async
    test('test withdrawList', () async {
      // TODO
    });

    // Get Withdrawal By ID
    //
    // Returns the details of a specific withdrawal or transfer using its ID
    //
    //Future withdrawRead(String id) async
    test('test withdrawRead', () async {
      // TODO
    });

  });
}
