#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/post_withdraws_200_response.h"
#include "../model/post_withdraws_request.h"

// Enum PERIOD for SaquesETransfernciasAPI_getWithdraws
typedef enum  { payconductor_api_getWithdraws_PERIOD_NULL = 0, payconductor_api_getWithdraws_PERIOD_Today, payconductor_api_getWithdraws_PERIOD_Yesterday, payconductor_api_getWithdraws_PERIOD_Last7Days, payconductor_api_getWithdraws_PERIOD_Last30Days, payconductor_api_getWithdraws_PERIOD_ThisMonth, payconductor_api_getWithdraws_PERIOD_LastMonth, payconductor_api_getWithdraws_PERIOD_ThisYear, payconductor_api_getWithdraws_PERIOD_Custom } payconductor_api_getWithdraws_period_e;


// Lista os saques
//
// Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)
//
void
SaquesETransfernciasAPI_getWithdraws(apiClient_t *apiClient, payconductor_api_getWithdraws_period_e period, double page, double pageSize, char endDate, char startDate, char *id);


// Buscar pelo ID
//
// Retorna os detalhes de um saque ou transferência específico usando seu ID
//
void
SaquesETransfernciasAPI_getWithdrawsById(apiClient_t *apiClient, char *id);


// Cria saque
//
// Realiza um novo saque ou transferência para a conta de pagamento informada
//
post_withdraws_200_response_t*
SaquesETransfernciasAPI_postWithdraws(apiClient_t *apiClient, post_withdraws_request_t *post_withdraws_request);


