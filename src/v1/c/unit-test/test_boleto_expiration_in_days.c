#ifndef boleto_expiration_in_days_TEST
#define boleto_expiration_in_days_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define boleto_expiration_in_days_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/boleto_expiration_in_days.h"
boleto_expiration_in_days_t* instantiate_boleto_expiration_in_days(int include_optional);



boleto_expiration_in_days_t* instantiate_boleto_expiration_in_days(int include_optional) {
  boleto_expiration_in_days_t* boleto_expiration_in_days = NULL;
  if (include_optional) {
    boleto_expiration_in_days = boleto_expiration_in_days_create(
    );
  } else {
    boleto_expiration_in_days = boleto_expiration_in_days_create(
    );
  }

  return boleto_expiration_in_days;
}


#ifdef boleto_expiration_in_days_MAIN

void test_boleto_expiration_in_days(int include_optional) {
    boleto_expiration_in_days_t* boleto_expiration_in_days_1 = instantiate_boleto_expiration_in_days(include_optional);

	cJSON* jsonboleto_expiration_in_days_1 = boleto_expiration_in_days_convertToJSON(boleto_expiration_in_days_1);
	printf("boleto_expiration_in_days :\n%s\n", cJSON_Print(jsonboleto_expiration_in_days_1));
	boleto_expiration_in_days_t* boleto_expiration_in_days_2 = boleto_expiration_in_days_parseFromJSON(jsonboleto_expiration_in_days_1);
	cJSON* jsonboleto_expiration_in_days_2 = boleto_expiration_in_days_convertToJSON(boleto_expiration_in_days_2);
	printf("repeating boleto_expiration_in_days:\n%s\n", cJSON_Print(jsonboleto_expiration_in_days_2));
}

int main() {
  test_boleto_expiration_in_days(1);
  test_boleto_expiration_in_days(0);

  printf("Hello world \n");
  return 0;
}

#endif // boleto_expiration_in_days_MAIN
#endif // boleto_expiration_in_days_TEST
