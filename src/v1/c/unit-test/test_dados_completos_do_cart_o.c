#ifndef dados_completos_do_cart_o_TEST
#define dados_completos_do_cart_o_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dados_completos_do_cart_o_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dados_completos_do_cart_o.h"
dados_completos_do_cart_o_t* instantiate_dados_completos_do_cart_o(int include_optional);

#include "test_dados_completos_do_cart_o_expiration.c"


dados_completos_do_cart_o_t* instantiate_dados_completos_do_cart_o(int include_optional) {
  dados_completos_do_cart_o_t* dados_completos_do_cart_o = NULL;
  if (include_optional) {
    dados_completos_do_cart_o = dados_completos_do_cart_o_create(
      "012",
       // false, not to have infinite recursion
      instantiate_dados_completos_do_cart_o_expiration(0),
      "0",
      "0"
    );
  } else {
    dados_completos_do_cart_o = dados_completos_do_cart_o_create(
      "012",
      NULL,
      "0",
      "0"
    );
  }

  return dados_completos_do_cart_o;
}


#ifdef dados_completos_do_cart_o_MAIN

void test_dados_completos_do_cart_o(int include_optional) {
    dados_completos_do_cart_o_t* dados_completos_do_cart_o_1 = instantiate_dados_completos_do_cart_o(include_optional);

	cJSON* jsondados_completos_do_cart_o_1 = dados_completos_do_cart_o_convertToJSON(dados_completos_do_cart_o_1);
	printf("dados_completos_do_cart_o :\n%s\n", cJSON_Print(jsondados_completos_do_cart_o_1));
	dados_completos_do_cart_o_t* dados_completos_do_cart_o_2 = dados_completos_do_cart_o_parseFromJSON(jsondados_completos_do_cart_o_1);
	cJSON* jsondados_completos_do_cart_o_2 = dados_completos_do_cart_o_convertToJSON(dados_completos_do_cart_o_2);
	printf("repeating dados_completos_do_cart_o:\n%s\n", cJSON_Print(jsondados_completos_do_cart_o_2));
}

int main() {
  test_dados_completos_do_cart_o(1);
  test_dados_completos_do_cart_o(0);

  printf("Hello world \n");
  return 0;
}

#endif // dados_completos_do_cart_o_MAIN
#endif // dados_completos_do_cart_o_TEST
