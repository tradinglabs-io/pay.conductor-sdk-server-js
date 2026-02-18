(ns payconductor-sdk.api.saques-e-transfer-ncias
  (:require [payconductor-sdk.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [payconductor-sdk.specs.post-orders-200-response-pic-pay :refer :all]
            [payconductor-sdk.specs.post-orders-request-payment :refer :all]
            [payconductor-sdk.specs.endere-o-do-cliente :refer :all]
            [payconductor-sdk.specs.post-orders-request-items-inner :refer :all]
            [payconductor-sdk.specs.post-orders-200-response-credit-card :refer :all]
            [payconductor-sdk.specs.post-withdraws-200-response :refer :all]
            [payconductor-sdk.specs.boleto :refer :all]
            [payconductor-sdk.specs.post-orders-request :refer :all]
            [payconductor-sdk.specs.pix-expiration-in-seconds :refer :all]
            [payconductor-sdk.specs.post-orders-200-response-pix :refer :all]
            [payconductor-sdk.specs.post-orders-200-response :refer :all]
            [payconductor-sdk.specs.merchant-input :refer :all]
            [payconductor-sdk.specs.nu-pay-nu-pay :refer :all]
            [payconductor-sdk.specs.post-orders-request-fingerprints :refer :all]
            [payconductor-sdk.specs.cart-o-de-cr-dito :refer :all]
            [payconductor-sdk.specs.pic-pay :refer :all]
            [payconductor-sdk.specs.dados-completos-do-cart-o :refer :all]
            [payconductor-sdk.specs.nu-pay :refer :all]
            [payconductor-sdk.specs.post-withdraws-request :refer :all]
            [payconductor-sdk.specs.post-withdraws-200-response-payed-at :refer :all]
            [payconductor-sdk.specs.post-orders-request-session :refer :all]
            [payconductor-sdk.specs.pix :refer :all]
            [payconductor-sdk.specs.post-orders-200-response-bank-slip :refer :all]
            [payconductor-sdk.specs.post-orders-200-response-nu-pay :refer :all]
            [payconductor-sdk.specs.cart-o-tokenizado :refer :all]
            [payconductor-sdk.specs.post-withdraws-request-payout-account :refer :all]
            [payconductor-sdk.specs.post-orders-200-response-order-items-inner :refer :all]
            [payconductor-sdk.specs.cart-o-de-cr-dito-installments :refer :all]
            [payconductor-sdk.specs.cart-o-de-cr-dito-card :refer :all]
            [payconductor-sdk.specs.post-orders-200-response-session :refer :all]
            [payconductor-sdk.specs.cliente :refer :all]
            [payconductor-sdk.specs.boleto-expiration-in-days :refer :all]
            [payconductor-sdk.specs.post-withdraws-200-response-payout-account :refer :all]
            [payconductor-sdk.specs.dados-completos-do-cart-o-expiration :refer :all]
            )
  (:import (java.io File)))


(defn-spec get-withdraws-with-http-info any?
  "Lista os saques
  Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)"
  ([period string?, page float?, pageSize float?, ] (get-withdraws-with-http-info period page pageSize nil))
  ([period string?, page float?, pageSize float?, {:keys [endDate startDate id]} (s/map-of keyword? any?)]
   (check-required-params period page pageSize)
   (call-api "/withdraws/" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"period" period "endDate" endDate "startDate" startDate "page" page "pageSize" pageSize "id" id }
              :form-params   {}
              :content-types []
              :accepts       []
              :auth-names    ["basicAuth"]})))

(defn-spec get-withdraws any?
  "Lista os saques
  Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)"
  ([period string?, page float?, pageSize float?, ] (get-withdraws period page pageSize nil))
  ([period string?, page float?, pageSize float?, optional-params any?]
   (let [res (:data (get-withdraws-with-http-info period page pageSize optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec get-withdraws-by-id-with-http-info any?
  "Buscar pelo ID
  Retorna os detalhes de um saque ou transferência específico usando seu ID"
  [id string?]
  (check-required-params id)
  (call-api "/withdraws/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["basicAuth"]}))

(defn-spec get-withdraws-by-id any?
  "Buscar pelo ID
  Retorna os detalhes de um saque ou transferência específico usando seu ID"
  [id string?]
  (let [res (:data (get-withdraws-by-id-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-withdraws-with-http-info any?
  "Cria saque
  Realiza um novo saque ou transferência para a conta de pagamento informada"
  [post-withdraws-request post-withdraws-request]
  (check-required-params post-withdraws-request)
  (call-api "/withdraws/" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    post-withdraws-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec post-withdraws post-withdraws-200-response-spec
  "Cria saque
  Realiza um novo saque ou transferência para a conta de pagamento informada"
  [post-withdraws-request post-withdraws-request]
  (let [res (:data (post-withdraws-with-http-info post-withdraws-request))]
    (if (:decode-models *api-context*)
       (st/decode post-withdraws-200-response-spec res st/string-transformer)
       res)))


