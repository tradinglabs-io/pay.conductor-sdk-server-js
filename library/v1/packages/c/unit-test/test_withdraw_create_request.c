#ifndef withdraw_create_request_TEST
#define withdraw_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdraw_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdraw_create_request.h"
withdraw_create_request_t* instantiate_withdraw_create_request(int include_optional);

#include "test_merchant_input.c"
#include "test_withdraw_payout_account_data.c"


withdraw_create_request_t* instantiate_withdraw_create_request(int include_optional) {
  withdraw_create_request_t* withdraw_create_request = NULL;
  if (include_optional) {
    withdraw_create_request = withdraw_create_request_create(
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_merchant_input(0),
       // false, not to have infinite recursion
      instantiate_withdraw_payout_account_data(0)
    );
  } else {
    withdraw_create_request = withdraw_create_request_create(
      1,
      "0",
      NULL,
      NULL
    );
  }

  return withdraw_create_request;
}


#ifdef withdraw_create_request_MAIN

void test_withdraw_create_request(int include_optional) {
    withdraw_create_request_t* withdraw_create_request_1 = instantiate_withdraw_create_request(include_optional);

	cJSON* jsonwithdraw_create_request_1 = withdraw_create_request_convertToJSON(withdraw_create_request_1);
	printf("withdraw_create_request :\n%s\n", cJSON_Print(jsonwithdraw_create_request_1));
	withdraw_create_request_t* withdraw_create_request_2 = withdraw_create_request_parseFromJSON(jsonwithdraw_create_request_1);
	cJSON* jsonwithdraw_create_request_2 = withdraw_create_request_convertToJSON(withdraw_create_request_2);
	printf("repeating withdraw_create_request:\n%s\n", cJSON_Print(jsonwithdraw_create_request_2));
}

int main() {
  test_withdraw_create_request(1);
  test_withdraw_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdraw_create_request_MAIN
#endif // withdraw_create_request_TEST
