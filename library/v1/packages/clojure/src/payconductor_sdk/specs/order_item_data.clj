(ns payconductor-sdk.specs.order-item-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-item-data-data
  {
   (ds/req :id) string?
   (ds/req :isPhysical) boolean?
   (ds/req :name) string?
   (ds/req :qty) float?
   (ds/req :unitPrice) float?
   })

(def order-item-data-spec
  (ds/spec
    {:name ::order-item-data
     :spec order-item-data-data}))
