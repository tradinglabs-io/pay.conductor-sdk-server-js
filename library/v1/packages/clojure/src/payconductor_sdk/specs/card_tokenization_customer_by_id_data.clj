(ns payconductor-sdk.specs.card-tokenization-customer-by-id-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def card-tokenization-customer-by-id-data-data
  {
   (ds/req :id) string?
   })

(def card-tokenization-customer-by-id-data-spec
  (ds/spec
    {:name ::card-tokenization-customer-by-id-data
     :spec card-tokenization-customer-by-id-data-data}))
