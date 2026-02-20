(ns payconductor-sdk.specs.order-credit-card-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.order-credit-card-payment-request-card :refer :all]
            )
  (:import (java.io File)))


(def order-credit-card-payment-request-data
  {
   (ds/req :paymentMethod) string?
   (ds/req :card) order-credit-card-payment-request-card-spec
   (ds/req :installments) float?
   (ds/opt :softDescriptor) string?
   })

(def order-credit-card-payment-request-spec
  (ds/spec
    {:name ::order-credit-card-payment-request
     :spec order-credit-card-payment-request-data}))
