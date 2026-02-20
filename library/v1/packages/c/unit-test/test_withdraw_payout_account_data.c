#ifndef withdraw_payout_account_data_TEST
#define withdraw_payout_account_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdraw_payout_account_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdraw_payout_account_data.h"
withdraw_payout_account_data_t* instantiate_withdraw_payout_account_data(int include_optional);



withdraw_payout_account_data_t* instantiate_withdraw_payout_account_data(int include_optional) {
  withdraw_payout_account_data_t* withdraw_payout_account_data = NULL;
  if (include_optional) {
    withdraw_payout_account_data = withdraw_payout_account_data_create(
      "0",
      "0",
      "0",
      payconductor_api_withdraw_payout_account_data__Cpf
    );
  } else {
    withdraw_payout_account_data = withdraw_payout_account_data_create(
      "0",
      "0",
      "0",
      payconductor_api_withdraw_payout_account_data__Cpf
    );
  }

  return withdraw_payout_account_data;
}


#ifdef withdraw_payout_account_data_MAIN

void test_withdraw_payout_account_data(int include_optional) {
    withdraw_payout_account_data_t* withdraw_payout_account_data_1 = instantiate_withdraw_payout_account_data(include_optional);

	cJSON* jsonwithdraw_payout_account_data_1 = withdraw_payout_account_data_convertToJSON(withdraw_payout_account_data_1);
	printf("withdraw_payout_account_data :\n%s\n", cJSON_Print(jsonwithdraw_payout_account_data_1));
	withdraw_payout_account_data_t* withdraw_payout_account_data_2 = withdraw_payout_account_data_parseFromJSON(jsonwithdraw_payout_account_data_1);
	cJSON* jsonwithdraw_payout_account_data_2 = withdraw_payout_account_data_convertToJSON(withdraw_payout_account_data_2);
	printf("repeating withdraw_payout_account_data:\n%s\n", cJSON_Print(jsonwithdraw_payout_account_data_2));
}

int main() {
  test_withdraw_payout_account_data(1);
  test_withdraw_payout_account_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdraw_payout_account_data_MAIN
#endif // withdraw_payout_account_data_TEST
