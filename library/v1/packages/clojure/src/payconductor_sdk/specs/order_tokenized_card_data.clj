(ns payconductor-sdk.specs.order-tokenized-card-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-tokenized-card-data-data
  {
   (ds/opt :firstSixCardNumber) string?
   (ds/req :token) string?
   })

(def order-tokenized-card-data-spec
  (ds/spec
    {:name ::order-tokenized-card-data
     :spec order-tokenized-card-data-data}))
