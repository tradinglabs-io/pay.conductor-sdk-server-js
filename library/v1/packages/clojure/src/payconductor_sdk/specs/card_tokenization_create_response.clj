(ns payconductor-sdk.specs.card-tokenization-create-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def card-tokenization-create-response-data
  {
   (ds/req :customerId) string?
   (ds/req :token) string?
   })

(def card-tokenization-create-response-spec
  (ds/spec
    {:name ::card-tokenization-create-response
     :spec card-tokenization-create-response-data}))
