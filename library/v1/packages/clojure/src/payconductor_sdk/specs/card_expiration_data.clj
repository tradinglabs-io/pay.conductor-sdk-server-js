(ns payconductor-sdk.specs.card-expiration-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def card-expiration-data-data
  {
   (ds/req :month) float?
   (ds/req :year) float?
   })

(def card-expiration-data-spec
  (ds/spec
    {:name ::card-expiration-data
     :spec card-expiration-data-data}))
