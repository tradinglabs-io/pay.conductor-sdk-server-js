#ifndef boleto_TEST
#define boleto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define boleto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/boleto.h"
boleto_t* instantiate_boleto(int include_optional);

#include "test_boleto_expiration_in_days.c"


boleto_t* instantiate_boleto(int include_optional) {
  boleto_t* boleto = NULL;
  if (include_optional) {
    boleto = boleto_create(
      "0",
      null
    );
  } else {
    boleto = boleto_create(
      "0",
      null
    );
  }

  return boleto;
}


#ifdef boleto_MAIN

void test_boleto(int include_optional) {
    boleto_t* boleto_1 = instantiate_boleto(include_optional);

	cJSON* jsonboleto_1 = boleto_convertToJSON(boleto_1);
	printf("boleto :\n%s\n", cJSON_Print(jsonboleto_1));
	boleto_t* boleto_2 = boleto_parseFromJSON(jsonboleto_1);
	cJSON* jsonboleto_2 = boleto_convertToJSON(boleto_2);
	printf("repeating boleto:\n%s\n", cJSON_Print(jsonboleto_2));
}

int main() {
  test_boleto(1);
  test_boleto(0);

  printf("Hello world \n");
  return 0;
}

#endif // boleto_MAIN
#endif // boleto_TEST
