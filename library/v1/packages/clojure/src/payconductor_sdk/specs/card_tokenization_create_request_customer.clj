(ns payconductor-sdk.specs.card-tokenization-create-request-customer
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.address-create-request :refer :all]
            [payconductor-sdk.specs.document-type :refer :all]
            )
  (:import (java.io File)))


(def card-tokenization-create-request-customer-data
  {
   (ds/opt :address) address-create-request-spec
   (ds/req :documentNumber) string?
   (ds/req :documentType) document-type-spec
   (ds/req :email) string?
   (ds/req :name) string?
   (ds/opt :phoneNumber) string?
   (ds/req :id) string?
   })

(def card-tokenization-create-request-customer-spec
  (ds/spec
    {:name ::card-tokenization-create-request-customer
     :spec card-tokenization-create-request-customer-data}))
