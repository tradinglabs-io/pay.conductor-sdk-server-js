(ns payconductor-sdk.specs.order-nu-pay-payment-request-nu-pay
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-nu-pay-payment-request-nu-pay-data
  {
   (ds/req :cancelUrl) string?
   (ds/req :merchantName) string?
   (ds/req :returnUrl) string?
   (ds/opt :storeName) string?
   })

(def order-nu-pay-payment-request-nu-pay-spec
  (ds/spec
    {:name ::order-nu-pay-payment-request-nu-pay
     :spec order-nu-pay-payment-request-nu-pay-data}))
