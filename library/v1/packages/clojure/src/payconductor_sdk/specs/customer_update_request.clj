(ns payconductor-sdk.specs.customer-update-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.address-create-request :refer :all]
            [payconductor-sdk.specs.document-type :refer :all]
            )
  (:import (java.io File)))


(def customer-update-request-data
  {
   (ds/opt :address) address-create-request-spec
   (ds/opt :documentNumber) string?
   (ds/opt :documentType) document-type-spec
   (ds/opt :email) string?
   (ds/opt :name) string?
   (ds/opt :phoneNumber) string?
   })

(def customer-update-request-spec
  (ds/spec
    {:name ::customer-update-request
     :spec customer-update-request-data}))
