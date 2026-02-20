#ifndef withdraw_create_response_payout_account_TEST
#define withdraw_create_response_payout_account_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdraw_create_response_payout_account_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdraw_create_response_payout_account.h"
withdraw_create_response_payout_account_t* instantiate_withdraw_create_response_payout_account(int include_optional);



withdraw_create_response_payout_account_t* instantiate_withdraw_create_response_payout_account(int include_optional) {
  withdraw_create_response_payout_account_t* withdraw_create_response_payout_account = NULL;
  if (include_optional) {
    withdraw_create_response_payout_account = withdraw_create_response_payout_account_create(
      "0",
      "a",
      "0",
      "0",
      payconductor_api_withdraw_create_response_payout_account__Cpf
    );
  } else {
    withdraw_create_response_payout_account = withdraw_create_response_payout_account_create(
      "0",
      "a",
      "0",
      "0",
      payconductor_api_withdraw_create_response_payout_account__Cpf
    );
  }

  return withdraw_create_response_payout_account;
}


#ifdef withdraw_create_response_payout_account_MAIN

void test_withdraw_create_response_payout_account(int include_optional) {
    withdraw_create_response_payout_account_t* withdraw_create_response_payout_account_1 = instantiate_withdraw_create_response_payout_account(include_optional);

	cJSON* jsonwithdraw_create_response_payout_account_1 = withdraw_create_response_payout_account_convertToJSON(withdraw_create_response_payout_account_1);
	printf("withdraw_create_response_payout_account :\n%s\n", cJSON_Print(jsonwithdraw_create_response_payout_account_1));
	withdraw_create_response_payout_account_t* withdraw_create_response_payout_account_2 = withdraw_create_response_payout_account_parseFromJSON(jsonwithdraw_create_response_payout_account_1);
	cJSON* jsonwithdraw_create_response_payout_account_2 = withdraw_create_response_payout_account_convertToJSON(withdraw_create_response_payout_account_2);
	printf("repeating withdraw_create_response_payout_account:\n%s\n", cJSON_Print(jsonwithdraw_create_response_payout_account_2));
}

int main() {
  test_withdraw_create_response_payout_account(1);
  test_withdraw_create_response_payout_account(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdraw_create_response_payout_account_MAIN
#endif // withdraw_create_response_payout_account_TEST
