(ns payconductor-sdk.specs.customer-create-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.address-create-request :refer :all]
            [payconductor-sdk.specs.document-type :refer :all]
            )
  (:import (java.io File)))


(def customer-create-request-data
  {
   (ds/opt :address) address-create-request-spec
   (ds/req :documentNumber) string?
   (ds/req :documentType) document-type-spec
   (ds/req :email) string?
   (ds/req :name) string?
   (ds/opt :phoneNumber) string?
   })

(def customer-create-request-spec
  (ds/spec
    {:name ::customer-create-request
     :spec customer-create-request-data}))
