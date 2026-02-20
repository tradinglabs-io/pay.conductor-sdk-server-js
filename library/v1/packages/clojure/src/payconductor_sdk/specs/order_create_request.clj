(ns payconductor-sdk.specs.order-create-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.customer-create-request :refer :all]
            [payconductor-sdk.specs.order-fraud-fingerprints :refer :all]
            [payconductor-sdk.specs.order-item-data :refer :all]
            [payconductor-sdk.specs.merchant-input :refer :all]
            [payconductor-sdk.specs.order-payment-request :refer :all]
            [payconductor-sdk.specs.order-create-request-session :refer :all]
            [payconductor-sdk.specs. :refer :all]
            )
  (:import (java.io File)))


(def order-create-request-data
  {
   (ds/req :chargeAmount) float?
   (ds/req :clientIp) string?
   (ds/req :customer) customer-create-request-spec
   (ds/req :discountAmount) float?
   (ds/req :externalId) string?
   (ds/opt :fingerprints) order-fraud-fingerprints-spec
   (ds/opt :items) (s/coll-of order-item-data-spec)
   (ds/opt :merchant) merchant-input-spec
   (ds/req :payment) order-payment-request-spec
   (ds/opt :splitAmountTotal) float?
   (ds/opt :session) order-create-request-session-spec
   (ds/req :shippingFee) float?
   (ds/req :taxFee) float?
   (ds/opt :metadata) any?
   })

(def order-create-request-spec
  (ds/spec
    {:name ::order-create-request
     :spec order-create-request-data}))
