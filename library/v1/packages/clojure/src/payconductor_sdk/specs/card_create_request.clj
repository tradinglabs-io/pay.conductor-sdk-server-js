(ns payconductor-sdk.specs.card-create-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.card-expiration-data :refer :all]
            )
  (:import (java.io File)))


(def card-create-request-data
  {
   (ds/req :cvv) string?
   (ds/req :expiration) card-expiration-data-spec
   (ds/req :holderName) string?
   (ds/req :number) string?
   })

(def card-create-request-spec
  (ds/spec
    {:name ::card-create-request
     :spec card-create-request-data}))
