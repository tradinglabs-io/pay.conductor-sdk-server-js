(ns payconductor-sdk.api.order
  (:require [payconductor-sdk.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [payconductor-sdk.specs.pix-type :refer :all]
            [payconductor-sdk.specs.order-bank-slip-info :refer :all]
            [payconductor-sdk.specs.order-create-request :refer :all]
            [payconductor-sdk.specs.order-create-response-order-items-inner :refer :all]
            [payconductor-sdk.specs.customer-address-response :refer :all]
            [payconductor-sdk.specs.card-expiration-data :refer :all]
            [payconductor-sdk.specs.order-credit-card-payment-request :refer :all]
            [payconductor-sdk.specs.address-create-request :refer :all]
            [payconductor-sdk.specs.order-nu-pay-payment-request :refer :all]
            [payconductor-sdk.specs.order-fraud-fingerprints :refer :all]
            [payconductor-sdk.specs.order-bank-slip-payment-request :refer :all]
            [payconductor-sdk.specs.merchant-input :refer :all]
            [payconductor-sdk.specs.withdraw-create-response :refer :all]
            [payconductor-sdk.specs.order-create-request-session :refer :all]
            [payconductor-sdk.specs.order-nu-pay-info :refer :all]
            [payconductor-sdk.specs.withdraw-payout-account-data :refer :all]
            [payconductor-sdk.specs.card-tokenization-create-request :refer :all]
            [payconductor-sdk.specs.order-credit-card-payment-request-card :refer :all]
            [payconductor-sdk.specs.withdraw-create-response-payout-account :refer :all]
            [payconductor-sdk.specs.order-payment-request :refer :all]
            [payconductor-sdk.specs.order-pix-payment-request :refer :all]
            [payconductor-sdk.specs.event :refer :all]
            [payconductor-sdk.specs.customer-list-pagination :refer :all]
            [payconductor-sdk.specs.customer-update-request :refer :all]
            [payconductor-sdk.specs.customer-list-response :refer :all]
            [payconductor-sdk.specs.withdraw-create-request :refer :all]
            [payconductor-sdk.specs.withdraw-create-response-payed-at :refer :all]
            [payconductor-sdk.specs.order-item-data :refer :all]
            [payconductor-sdk.specs.order-pic-pay-info :refer :all]
            [payconductor-sdk.specs.payment-method :refer :all]
            [payconductor-sdk.specs.order-nu-pay-payment-request-nu-pay :refer :all]
            [payconductor-sdk.specs.card-tokenization-create-response :refer :all]
            [payconductor-sdk.specs.customer-create-request :refer :all]
            [payconductor-sdk.specs.order-create-response-session :refer :all]
            [payconductor-sdk.specs.order-confirm-response :refer :all]
            [payconductor-sdk.specs.document-type :refer :all]
            [payconductor-sdk.specs.order-create-response :refer :all]
            [payconductor-sdk.specs.card-tokenization-customer-by-id-data :refer :all]
            [payconductor-sdk.specs.customer-read-response :refer :all]
            [payconductor-sdk.specs.available-payment-methods :refer :all]
            [payconductor-sdk.specs.card-create-request :refer :all]
            [payconductor-sdk.specs.order-pic-pay-payment-request :refer :all]
            [payconductor-sdk.specs.order-credit-card-info :refer :all]
            [payconductor-sdk.specs.order-pix-info :refer :all]
            [payconductor-sdk.specs.order-draft-payment-request :refer :all]
            [payconductor-sdk.specs.order-tokenized-card-data :refer :all]
            [payconductor-sdk.specs.card-tokenization-create-request-customer :refer :all]
            [payconductor-sdk.specs.status :refer :all]
            )
  (:import (java.io File)))


(defn-spec order-confirm-with-http-info any?
  "Confirm Order
  Confirms a Draft order, setting the payment method and processing the charges associated with the order."
  [id string?, order-payment-request order-payment-request]
  (check-required-params id order-payment-request)
  (call-api "/orders/{id}/confirm" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    order-payment-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec order-confirm order-confirm-response-spec
  "Confirm Order
  Confirms a Draft order, setting the payment method and processing the charges associated with the order."
  [id string?, order-payment-request order-payment-request]
  (let [res (:data (order-confirm-with-http-info id order-payment-request))]
    (if (:decode-models *api-context*)
       (st/decode order-confirm-response-spec res st/string-transformer)
       res)))


(defn-spec order-create-with-http-info any?
  "Create Order
  Create a new order for payment using the provided data"
  [order-create-request order-create-request]
  (check-required-params order-create-request)
  (call-api "/orders/" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    order-create-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec order-create order-create-response-spec
  "Create Order
  Create a new order for payment using the provided data"
  [order-create-request order-create-request]
  (let [res (:data (order-create-with-http-info order-create-request))]
    (if (:decode-models *api-context*)
       (st/decode order-create-response-spec res st/string-transformer)
       res)))


(defn-spec order-list-with-http-info any?
  "List Orders
  Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed."
  ([page float?, pageSize float?, ] (order-list-with-http-info page pageSize nil))
  ([page float?, pageSize float?, {:keys [endDate startDate id status]} (s/map-of keyword? any?)]
   (check-required-params page pageSize)
   (call-api "/orders/" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"endDate" endDate "startDate" startDate "page" page "pageSize" pageSize "id" id "status" status }
              :form-params   {}
              :content-types []
              :accepts       []
              :auth-names    ["basicAuth"]})))

(defn-spec order-list any?
  "List Orders
  Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed."
  ([page float?, pageSize float?, ] (order-list page pageSize nil))
  ([page float?, pageSize float?, optional-params any?]
   (let [res (:data (order-list-with-http-info page pageSize optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec order-read-with-http-info any?
  "Get Order By ID
  Retrieve the complete data of an order by our ID"
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

(defn-spec order-read any?
  "Get Order By ID
  Retrieve the complete data of an order by our ID"
  [id string?]
  (let [res (:data (order-read-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec order-refund-with-http-info any?
  "Refund Order
  Initiate a refund for the order specified by ID."
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

(defn-spec order-refund any?
  "Refund Order
  Initiate a refund for the order specified by ID."
  [id string?]
  (let [res (:data (order-refund-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


