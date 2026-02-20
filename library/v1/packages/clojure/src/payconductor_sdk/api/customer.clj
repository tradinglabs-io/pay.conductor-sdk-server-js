(ns payconductor-sdk.api.customer
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


(defn-spec customer-create-with-http-info any?
  "Create New Customer
  Create a new customer by providing the required data in the request body."
  [customer-create-request customer-create-request]
  (check-required-params customer-create-request)
  (call-api "/customers/" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    customer-create-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec customer-create customer-read-response-spec
  "Create New Customer
  Create a new customer by providing the required data in the request body."
  [customer-create-request customer-create-request]
  (let [res (:data (customer-create-with-http-info customer-create-request))]
    (if (:decode-models *api-context*)
       (st/decode customer-read-response-spec res st/string-transformer)
       res)))


(defn-spec customer-list-custom-with-http-info any?
  "Get All Customers
  Retrieve a list of all customers associated with the organization, with support for filters and pagination."
  ([page float?, pageSize float?, ] (customer-list-custom-with-http-info page pageSize nil))
  ([page float?, pageSize float?, {:keys [email name endDate startDate]} (s/map-of keyword? any?)]
   (check-required-params page pageSize)
   (call-api "/customers/" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"email" email "name" name "page" page "pageSize" pageSize "endDate" endDate "startDate" startDate }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["basicAuth"]})))

(defn-spec customer-list-custom customer-list-response-spec
  "Get All Customers
  Retrieve a list of all customers associated with the organization, with support for filters and pagination."
  ([page float?, pageSize float?, ] (customer-list-custom page pageSize nil))
  ([page float?, pageSize float?, optional-params any?]
   (let [res (:data (customer-list-custom-with-http-info page pageSize optional-params))]
     (if (:decode-models *api-context*)
        (st/decode customer-list-response-spec res st/string-transformer)
        res))))


(defn-spec customer-read-with-http-info any?
  "Get Customer By ID
  Retrieve the complete details of a specific customer using their unique ID."
  [id string?]
  (check-required-params id)
  (call-api "/customers/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec customer-read customer-read-response-spec
  "Get Customer By ID
  Retrieve the complete details of a specific customer using their unique ID."
  [id string?]
  (let [res (:data (customer-read-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode customer-read-response-spec res st/string-transformer)
       res)))


(defn-spec customer-update-with-http-info any?
  "Update Customer Data
  Update the information of an existing customer by providing the new data in the request body."
  [id string?, customer-update-request customer-update-request]
  (check-required-params id customer-update-request)
  (call-api "/customers/{id}" :patch
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    customer-update-request
             :content-types ["application/json"]
             :accepts       ["application/json"]
             :auth-names    ["basicAuth"]}))

(defn-spec customer-update customer-read-response-spec
  "Update Customer Data
  Update the information of an existing customer by providing the new data in the request body."
  [id string?, customer-update-request customer-update-request]
  (let [res (:data (customer-update-with-http-info id customer-update-request))]
    (if (:decode-models *api-context*)
       (st/decode customer-read-response-spec res st/string-transformer)
       res)))


