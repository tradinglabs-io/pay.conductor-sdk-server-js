#ifndef dados_completos_do_cart_o_expiration_TEST
#define dados_completos_do_cart_o_expiration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dados_completos_do_cart_o_expiration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dados_completos_do_cart_o_expiration.h"
dados_completos_do_cart_o_expiration_t* instantiate_dados_completos_do_cart_o_expiration(int include_optional);



dados_completos_do_cart_o_expiration_t* instantiate_dados_completos_do_cart_o_expiration(int include_optional) {
  dados_completos_do_cart_o_expiration_t* dados_completos_do_cart_o_expiration = NULL;
  if (include_optional) {
    dados_completos_do_cart_o_expiration = dados_completos_do_cart_o_expiration_create(
      1,
      2025
    );
  } else {
    dados_completos_do_cart_o_expiration = dados_completos_do_cart_o_expiration_create(
      1,
      2025
    );
  }

  return dados_completos_do_cart_o_expiration;
}


#ifdef dados_completos_do_cart_o_expiration_MAIN

void test_dados_completos_do_cart_o_expiration(int include_optional) {
    dados_completos_do_cart_o_expiration_t* dados_completos_do_cart_o_expiration_1 = instantiate_dados_completos_do_cart_o_expiration(include_optional);

	cJSON* jsondados_completos_do_cart_o_expiration_1 = dados_completos_do_cart_o_expiration_convertToJSON(dados_completos_do_cart_o_expiration_1);
	printf("dados_completos_do_cart_o_expiration :\n%s\n", cJSON_Print(jsondados_completos_do_cart_o_expiration_1));
	dados_completos_do_cart_o_expiration_t* dados_completos_do_cart_o_expiration_2 = dados_completos_do_cart_o_expiration_parseFromJSON(jsondados_completos_do_cart_o_expiration_1);
	cJSON* jsondados_completos_do_cart_o_expiration_2 = dados_completos_do_cart_o_expiration_convertToJSON(dados_completos_do_cart_o_expiration_2);
	printf("repeating dados_completos_do_cart_o_expiration:\n%s\n", cJSON_Print(jsondados_completos_do_cart_o_expiration_2));
}

int main() {
  test_dados_completos_do_cart_o_expiration(1);
  test_dados_completos_do_cart_o_expiration(0);

  printf("Hello world \n");
  return 0;
}

#endif // dados_completos_do_cart_o_expiration_MAIN
#endif // dados_completos_do_cart_o_expiration_TEST
