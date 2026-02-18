#ifndef endere_o_do_cliente_TEST
#define endere_o_do_cliente_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define endere_o_do_cliente_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/endere_o_do_cliente.h"
endere_o_do_cliente_t* instantiate_endere_o_do_cliente(int include_optional);



endere_o_do_cliente_t* instantiate_endere_o_do_cliente(int include_optional) {
  endere_o_do_cliente_t* endere_o_do_cliente = NULL;
  if (include_optional) {
    endere_o_do_cliente = endere_o_do_cliente_create(
      "0",
      "BR",
      "0",
      "0",
      "01",
      "0",
      "0"
    );
  } else {
    endere_o_do_cliente = endere_o_do_cliente_create(
      "0",
      "BR",
      "0",
      "0",
      "01",
      "0",
      "0"
    );
  }

  return endere_o_do_cliente;
}


#ifdef endere_o_do_cliente_MAIN

void test_endere_o_do_cliente(int include_optional) {
    endere_o_do_cliente_t* endere_o_do_cliente_1 = instantiate_endere_o_do_cliente(include_optional);

	cJSON* jsonendere_o_do_cliente_1 = endere_o_do_cliente_convertToJSON(endere_o_do_cliente_1);
	printf("endere_o_do_cliente :\n%s\n", cJSON_Print(jsonendere_o_do_cliente_1));
	endere_o_do_cliente_t* endere_o_do_cliente_2 = endere_o_do_cliente_parseFromJSON(jsonendere_o_do_cliente_1);
	cJSON* jsonendere_o_do_cliente_2 = endere_o_do_cliente_convertToJSON(endere_o_do_cliente_2);
	printf("repeating endere_o_do_cliente:\n%s\n", cJSON_Print(jsonendere_o_do_cliente_2));
}

int main() {
  test_endere_o_do_cliente(1);
  test_endere_o_do_cliente(0);

  printf("Hello world \n");
  return 0;
}

#endif // endere_o_do_cliente_MAIN
#endif // endere_o_do_cliente_TEST
