(ns payconductor-sdk.specs.order-draft-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.payment-method :refer :all]
            [payconductor-sdk.specs.available-payment-methods :refer :all]
            )
  (:import (java.io File)))


(def order-draft-payment-request-data
  {
   (ds/req :paymentMethod) payment-method-spec
   (ds/opt :expirationInSeconds) float?
   (ds/opt :availablePaymentMethods) (s/coll-of available-payment-methods-spec)
   })

(def order-draft-payment-request-spec
  (ds/spec
    {:name ::order-draft-payment-request
     :spec order-draft-payment-request-data}))
