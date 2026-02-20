(ns payconductor-sdk.specs.order-create-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.order-pix-info :refer :all]
            [payconductor-sdk.specs.order-bank-slip-info :refer :all]
            [payconductor-sdk.specs.order-nu-pay-info :refer :all]
            [payconductor-sdk.specs.order-pic-pay-info :refer :all]
            [payconductor-sdk.specs.order-credit-card-info :refer :all]
            [payconductor-sdk.specs.status :refer :all]
            [payconductor-sdk.specs.payment-method :refer :all]
            [payconductor-sdk.specs.order-create-response-order-items-inner :refer :all]
            [payconductor-sdk.specs.order-create-response-session :refer :all]
            )
  (:import (java.io File)))


(def order-create-response-data
  {
   (ds/req :id) string?
   (ds/req :externalId) string?
   (ds/req :externalIntegrationKey) string?
   (ds/req :externalIntegrationId) string?
   (ds/req :amount) float?
   (ds/req :costFee) float?
   (ds/opt :pix) order-pix-info-spec
   (ds/opt :bankSlip) order-bank-slip-info-spec
   (ds/opt :nuPay) order-nu-pay-info-spec
   (ds/opt :picPay) order-pic-pay-info-spec
   (ds/opt :creditCard) order-credit-card-info-spec
   (ds/req :status) status-spec
   (ds/req :paymentMethod) payment-method-spec
   (ds/req :payedAt) string?
   (ds/req :errorCode) string?
   (ds/req :errorMessage) string?
   (ds/req :orderItems) (s/coll-of order-create-response-order-items-inner-spec)
   (ds/opt :session) order-create-response-session-spec
   })

(def order-create-response-spec
  (ds/spec
    {:name ::order-create-response
     :spec order-create-response-data}))
