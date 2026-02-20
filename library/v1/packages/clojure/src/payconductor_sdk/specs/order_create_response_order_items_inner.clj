(ns payconductor-sdk.specs.order-create-response-order-items-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-create-response-order-items-inner-data
  {
   (ds/req :externalId) string?
   (ds/req :id) string?
   (ds/req :name) string?
   (ds/req :qty) float?
   (ds/req :totalAmount) float?
   (ds/req :totalNetAmount) float?
   (ds/req :unityPrice) float?
   })

(def order-create-response-order-items-inner-spec
  (ds/spec
    {:name ::order-create-response-order-items-inner
     :spec order-create-response-order-items-inner-data}))
