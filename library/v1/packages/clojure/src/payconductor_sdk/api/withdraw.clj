(ns payconductor-sdk.api.withdraw
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


(defn-spec withdraw-create-with-http-info any?
  "Create Withdrawal
  Create a new withdrawal or transfer to the provided payment account"
  [withdraw-create-request withdraw-create-request]
  (check-required-params withdraw-create-request)
  (call-api "/withdraws/" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    withdraw-create-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec withdraw-create withdraw-create-response-spec
  "Create Withdrawal
  Create a new withdrawal or transfer to the provided payment account"
  [withdraw-create-request withdraw-create-request]
  (let [res (:data (withdraw-create-with-http-info withdraw-create-request))]
    (if (:decode-models *api-context*)
       (st/decode withdraw-create-response-spec res st/string-transformer)
       res)))


(defn-spec withdraw-list-with-http-info any?
  "List Withdrawals
  Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)"
  ([page float?, pageSize float?, ] (withdraw-list-with-http-info page pageSize nil))
  ([page float?, pageSize float?, {:keys [endDate startDate id]} (s/map-of keyword? any?)]
   (check-required-params page pageSize)
   (call-api "/withdraws/" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"endDate" endDate "startDate" startDate "page" page "pageSize" pageSize "id" id }
              :form-params   {}
              :content-types []
              :accepts       []
              :auth-names    ["basicAuth"]})))

(defn-spec withdraw-list any?
  "List Withdrawals
  Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)"
  ([page float?, pageSize float?, ] (withdraw-list page pageSize nil))
  ([page float?, pageSize float?, optional-params any?]
   (let [res (:data (withdraw-list-with-http-info page pageSize optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec withdraw-read-with-http-info any?
  "Get Withdrawal By ID
  Returns the details of a specific withdrawal or transfer using its ID"
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

(defn-spec withdraw-read any?
  "Get Withdrawal By ID
  Returns the details of a specific withdrawal or transfer using its ID"
  [id string?]
  (let [res (:data (withdraw-read-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


