(ns payconductor-sdk.specs.order-bank-slip-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.payment-method :refer :all]
            )
  (:import (java.io File)))


(def order-bank-slip-payment-request-data
  {
   (ds/req :paymentMethod) payment-method-spec
   (ds/opt :expirationInDays) float?
   })

(def order-bank-slip-payment-request-spec
  (ds/spec
    {:name ::order-bank-slip-payment-request
     :spec order-bank-slip-payment-request-data}))
