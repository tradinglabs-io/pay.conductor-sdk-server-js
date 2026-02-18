(ns payconductor-sdk.api.pedidos
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


(defn-spec get-orders-with-http-info any?
  "Listar pedidos
  Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário."
  ([period string?, page float?, pageSize float?, ] (get-orders-with-http-info period page pageSize nil))
  ([period string?, page float?, pageSize float?, {:keys [endDate startDate id status]} (s/map-of keyword? any?)]
   (check-required-params period page pageSize)
   (call-api "/orders/" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"period" period "endDate" endDate "startDate" startDate "page" page "pageSize" pageSize "id" id "status" status }
              :form-params   {}
              :content-types []
              :accepts       []
              :auth-names    ["basicAuth"]})))

(defn-spec get-orders any?
  "Listar pedidos
  Recupere uma lista de pedidos. Utilize os parâmetros de filtro de data e paginação para refinar os resultados conforme necessário."
  ([period string?, page float?, pageSize float?, ] (get-orders period page pageSize nil))
  ([period string?, page float?, pageSize float?, optional-params any?]
   (let [res (:data (get-orders-with-http-info period page pageSize optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec get-orders-by-id-with-http-info any?
  "Buscar pelo ID
  Localize os dados completos de um pedido buscando pelo nosso id"
  [id string?]
  (check-required-params id)
  (call-api "/orders/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["basicAuth"]}))

(defn-spec get-orders-by-id any?
  "Buscar pelo ID
  Localize os dados completos de um pedido buscando pelo nosso id"
  [id string?]
  (let [res (:data (get-orders-by-id-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-orders-with-http-info any?
  "Criar pedido
  Crie um novo pedido para pagamento utilizando os dados fornecidos"
  [post-orders-request post-orders-request]
  (check-required-params post-orders-request)
  (call-api "/orders/" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    post-orders-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec post-orders post-orders-200-response-spec
  "Criar pedido
  Crie um novo pedido para pagamento utilizando os dados fornecidos"
  [post-orders-request post-orders-request]
  (let [res (:data (post-orders-with-http-info post-orders-request))]
    (if (:decode-models *api-context*)
       (st/decode post-orders-200-response-spec res st/string-transformer)
       res)))


(defn-spec post-orders-by-id-refund-with-http-info any?
  "Reembolsar pedido
  Inicie um reembolso para o pedido especificado pelo ID."
  [id string?]
  (check-required-params id)
  (call-api "/orders/{id}/refund" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["basicAuth"]}))

(defn-spec post-orders-by-id-refund any?
  "Reembolsar pedido
  Inicie um reembolso para o pedido especificado pelo ID."
  [id string?]
  (let [res (:data (post-orders-by-id-refund-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


