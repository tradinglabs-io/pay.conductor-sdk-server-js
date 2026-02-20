(ns payconductor-sdk.specs.order-credit-card-payment-request-card
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.card-expiration-data :refer :all]
            )
  (:import (java.io File)))


(def order-credit-card-payment-request-card-data
  {
   (ds/opt :firstSixCardNumber) string?
   (ds/req :token) string?
   (ds/req :cvv) string?
   (ds/req :expiration) card-expiration-data-spec
   (ds/req :holderName) string?
   (ds/req :number) string?
   })

(def order-credit-card-payment-request-card-spec
  (ds/spec
    {:name ::order-credit-card-payment-request-card
     :spec order-credit-card-payment-request-card-data}))
