#ifndef cliente_TEST
#define cliente_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cliente_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cliente.h"
cliente_t* instantiate_cliente(int include_optional);

#include "test_endere_o_do_cliente.c"


cliente_t* instantiate_cliente(int include_optional) {
  cliente_t* cliente = NULL;
  if (include_optional) {
    cliente = cliente_create(
       // false, not to have infinite recursion
      instantiate_endere_o_do_cliente(0),
      "a",
      payconductor_api_cliente_DOCUMENTTYPE_Cpf,
      "0",
      "0",
      "a"
    );
  } else {
    cliente = cliente_create(
      NULL,
      "a",
      payconductor_api_cliente_DOCUMENTTYPE_Cpf,
      "0",
      "0",
      "a"
    );
  }

  return cliente;
}


#ifdef cliente_MAIN

void test_cliente(int include_optional) {
    cliente_t* cliente_1 = instantiate_cliente(include_optional);

	cJSON* jsoncliente_1 = cliente_convertToJSON(cliente_1);
	printf("cliente :\n%s\n", cJSON_Print(jsoncliente_1));
	cliente_t* cliente_2 = cliente_parseFromJSON(jsoncliente_1);
	cJSON* jsoncliente_2 = cliente_convertToJSON(cliente_2);
	printf("repeating cliente:\n%s\n", cJSON_Print(jsoncliente_2));
}

int main() {
  test_cliente(1);
  test_cliente(0);

  printf("Hello world \n");
  return 0;
}

#endif // cliente_MAIN
#endif // cliente_TEST
