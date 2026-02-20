(ns payconductor-sdk.specs.customer-address-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def customer-address-response-data
  {
   (ds/req :id) string?
   (ds/req :street) string?
   (ds/req :number) string?
   (ds/req :neighborhood) string?
   (ds/req :city) string?
   (ds/req :state) string?
   (ds/req :zipCode) string?
   (ds/req :country) string?
   })

(def customer-address-response-spec
  (ds/spec
    {:name ::customer-address-response
     :spec customer-address-response-data}))
