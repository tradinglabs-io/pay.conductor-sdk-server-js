(ns payconductor-sdk.specs.order-confirm-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.order-pix-info :refer :all]
            [payconductor-sdk.specs.order-bank-slip-info :refer :all]
            [payconductor-sdk.specs.order-nu-pay-info :refer :all]
            [payconductor-sdk.specs.order-pic-pay-info :refer :all]
            [payconductor-sdk.specs.status :refer :all]
            [payconductor-sdk.specs.payment-method :refer :all]
            )
  (:import (java.io File)))


(def order-confirm-response-data
  {
   (ds/req :id) string?
   (ds/req :externalId) string?
   (ds/req :amount) float?
   (ds/req :costFee) float?
   (ds/opt :pix) order-pix-info-spec
   (ds/opt :bankSlip) order-bank-slip-info-spec
   (ds/opt :nuPay) order-nu-pay-info-spec
   (ds/opt :picPay) order-pic-pay-info-spec
   (ds/req :status) status-spec
   (ds/req :paymentMethod) payment-method-spec
   (ds/req :payedAt) string?
   (ds/req :errorCode) string?
   (ds/req :errorMessage) string?
   })

(def order-confirm-response-spec
  (ds/spec
    {:name ::order-confirm-response
     :spec order-confirm-response-data}))
