#ifndef withdraw_create_response_TEST
#define withdraw_create_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdraw_create_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdraw_create_response.h"
withdraw_create_response_t* instantiate_withdraw_create_response(int include_optional);

#include "test_withdraw_create_response_payed_at.c"
#include "test_withdraw_create_response_payout_account.c"


withdraw_create_response_t* instantiate_withdraw_create_response(int include_optional) {
  withdraw_create_response_t* withdraw_create_response = NULL;
  if (include_optional) {
    withdraw_create_response = withdraw_create_response_create(
      "0",
      "0",
      "0",
      "0",
      1.337,
      payconductor_api_withdraw_create_response__Generating,
      "0",
      "0",
      null,
       // false, not to have infinite recursion
      instantiate_withdraw_create_response_payout_account(0)
    );
  } else {
    withdraw_create_response = withdraw_create_response_create(
      "0",
      "0",
      "0",
      "0",
      1.337,
      payconductor_api_withdraw_create_response__Generating,
      "0",
      "0",
      null,
      NULL
    );
  }

  return withdraw_create_response;
}


#ifdef withdraw_create_response_MAIN

void test_withdraw_create_response(int include_optional) {
    withdraw_create_response_t* withdraw_create_response_1 = instantiate_withdraw_create_response(include_optional);

	cJSON* jsonwithdraw_create_response_1 = withdraw_create_response_convertToJSON(withdraw_create_response_1);
	printf("withdraw_create_response :\n%s\n", cJSON_Print(jsonwithdraw_create_response_1));
	withdraw_create_response_t* withdraw_create_response_2 = withdraw_create_response_parseFromJSON(jsonwithdraw_create_response_1);
	cJSON* jsonwithdraw_create_response_2 = withdraw_create_response_convertToJSON(withdraw_create_response_2);
	printf("repeating withdraw_create_response:\n%s\n", cJSON_Print(jsonwithdraw_create_response_2));
}

int main() {
  test_withdraw_create_response(1);
  test_withdraw_create_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdraw_create_response_MAIN
#endif // withdraw_create_response_TEST
