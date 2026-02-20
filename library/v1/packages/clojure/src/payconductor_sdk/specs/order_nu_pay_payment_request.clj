(ns payconductor-sdk.specs.order-nu-pay-payment-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.payment-method :refer :all]
            [payconductor-sdk.specs.order-nu-pay-payment-request-nu-pay :refer :all]
            )
  (:import (java.io File)))


(def order-nu-pay-payment-request-data
  {
   (ds/req :paymentMethod) payment-method-spec
   (ds/req :nuPay) order-nu-pay-payment-request-nu-pay-spec
   })

(def order-nu-pay-payment-request-spec
  (ds/spec
    {:name ::order-nu-pay-payment-request
     :spec order-nu-pay-payment-request-data}))
