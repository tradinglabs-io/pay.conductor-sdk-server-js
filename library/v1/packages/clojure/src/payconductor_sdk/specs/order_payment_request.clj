(ns payconductor-sdk.specs.order-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.order-credit-card-payment-request-card :refer :all]
            [payconductor-sdk.specs.order-nu-pay-payment-request-nu-pay :refer :all]
            [payconductor-sdk.specs.available-payment-methods :refer :all]
            )
  (:import (java.io File)))


(def order-payment-request-data
  {
   (ds/req :paymentMethod) string?
   (ds/opt :expirationInSeconds) float?
   (ds/req :card) order-credit-card-payment-request-card-spec
   (ds/req :installments) float?
   (ds/opt :softDescriptor) string?
   (ds/opt :expirationInDays) float?
   (ds/req :nuPay) order-nu-pay-payment-request-nu-pay-spec
   (ds/opt :availablePaymentMethods) (s/coll-of available-payment-methods-spec)
   })

(def order-payment-request-spec
  (ds/spec
    {:name ::order-payment-request
     :spec order-payment-request-data}))
