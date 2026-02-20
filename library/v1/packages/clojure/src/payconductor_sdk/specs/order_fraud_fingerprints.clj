(ns payconductor-sdk.specs.order-fraud-fingerprints
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-fraud-fingerprints-data
  {
   (ds/opt :threatMetrixFingerprintId) string?
   })

(def order-fraud-fingerprints-spec
  (ds/spec
    {:name ::order-fraud-fingerprints
     :spec order-fraud-fingerprints-data}))
