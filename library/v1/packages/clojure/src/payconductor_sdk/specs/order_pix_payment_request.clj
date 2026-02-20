(ns payconductor-sdk.specs.order-pix-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-pix-payment-request-data
  {
   (ds/req :paymentMethod) string?
   (ds/opt :expirationInSeconds) float?
   })

(def order-pix-payment-request-spec
  (ds/spec
    {:name ::order-pix-payment-request
     :spec order-pix-payment-request-data}))
