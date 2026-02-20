#ifndef withdraw_create_response_payed_at_TEST
#define withdraw_create_response_payed_at_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdraw_create_response_payed_at_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdraw_create_response_payed_at.h"
withdraw_create_response_payed_at_t* instantiate_withdraw_create_response_payed_at(int include_optional);



withdraw_create_response_payed_at_t* instantiate_withdraw_create_response_payed_at(int include_optional) {
  withdraw_create_response_payed_at_t* withdraw_create_response_payed_at = NULL;
  if (include_optional) {
    withdraw_create_response_payed_at = withdraw_create_response_payed_at_create(
    );
  } else {
    withdraw_create_response_payed_at = withdraw_create_response_payed_at_create(
    );
  }

  return withdraw_create_response_payed_at;
}


#ifdef withdraw_create_response_payed_at_MAIN

void test_withdraw_create_response_payed_at(int include_optional) {
    withdraw_create_response_payed_at_t* withdraw_create_response_payed_at_1 = instantiate_withdraw_create_response_payed_at(include_optional);

	cJSON* jsonwithdraw_create_response_payed_at_1 = withdraw_create_response_payed_at_convertToJSON(withdraw_create_response_payed_at_1);
	printf("withdraw_create_response_payed_at :\n%s\n", cJSON_Print(jsonwithdraw_create_response_payed_at_1));
	withdraw_create_response_payed_at_t* withdraw_create_response_payed_at_2 = withdraw_create_response_payed_at_parseFromJSON(jsonwithdraw_create_response_payed_at_1);
	cJSON* jsonwithdraw_create_response_payed_at_2 = withdraw_create_response_payed_at_convertToJSON(withdraw_create_response_payed_at_2);
	printf("repeating withdraw_create_response_payed_at:\n%s\n", cJSON_Print(jsonwithdraw_create_response_payed_at_2));
}

int main() {
  test_withdraw_create_response_payed_at(1);
  test_withdraw_create_response_payed_at(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdraw_create_response_payed_at_MAIN
#endif // withdraw_create_response_payed_at_TEST
