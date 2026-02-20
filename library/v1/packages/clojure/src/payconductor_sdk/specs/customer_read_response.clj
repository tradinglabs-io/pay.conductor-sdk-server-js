(ns payconductor-sdk.specs.customer-read-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.document-type :refer :all]
            [payconductor-sdk.specs.customer-address-response :refer :all]
            )
  (:import (java.io File)))


(def customer-read-response-data
  {
   (ds/req :id) string?
   (ds/req :name) string?
   (ds/req :email) string?
   (ds/req :documentType) document-type-spec
   (ds/req :documentNumber) string?
   (ds/req :phoneNumber) string?
   (ds/req :address) customer-address-response-spec
   (ds/req :createdAt) string?
   (ds/req :updatedAt) string?
   })

(def customer-read-response-spec
  (ds/spec
    {:name ::customer-read-response
     :spec customer-read-response-data}))
