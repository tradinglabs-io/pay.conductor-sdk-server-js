(ns payconductor-sdk.specs.order-pic-pay-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.payment-method :refer :all]
            )
  (:import (java.io File)))


(def order-pic-pay-payment-request-data
  {
   (ds/req :paymentMethod) payment-method-spec
   })

(def order-pic-pay-payment-request-spec
  (ds/spec
    {:name ::order-pic-pay-payment-request
     :spec order-pic-pay-payment-request-data}))
