(ns payconductor-sdk.api.card-tokenization
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


(defn-spec card-tokenize-with-http-info any?
  "Tokenize Card
  Tokenize credit cards for future charges."
  [card-tokenization-create-request card-tokenization-create-request]
  (check-required-params card-tokenization-create-request)
  (call-api "/card-tokenization/" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    card-tokenization-create-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec card-tokenize card-tokenization-create-response-spec
  "Tokenize Card
  Tokenize credit cards for future charges."
  [card-tokenization-create-request card-tokenization-create-request]
  (let [res (:data (card-tokenize-with-http-info card-tokenization-create-request))]
    (if (:decode-models *api-context*)
       (st/decode card-tokenization-create-response-spec res st/string-transformer)
       res)))


