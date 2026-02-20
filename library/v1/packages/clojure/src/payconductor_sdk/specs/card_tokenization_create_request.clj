(ns payconductor-sdk.specs.card-tokenization-create-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.card-create-request :refer :all]
            [payconductor-sdk.specs.card-tokenization-create-request-customer :refer :all]
            )
  (:import (java.io File)))


(def card-tokenization-create-request-data
  {
   (ds/req :card) card-create-request-spec
   (ds/req :saveCard) boolean?
   (ds/req :customer) card-tokenization-create-request-customer-spec
   })

(def card-tokenization-create-request-spec
  (ds/spec
    {:name ::card-tokenization-create-request
     :spec card-tokenization-create-request-data}))
