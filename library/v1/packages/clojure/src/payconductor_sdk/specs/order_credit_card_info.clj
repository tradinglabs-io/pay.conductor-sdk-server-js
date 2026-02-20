(ns payconductor-sdk.specs.order-credit-card-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-credit-card-info-data
  {
   (ds/opt :authorizationCode) string?
   })

(def order-credit-card-info-spec
  (ds/spec
    {:name ::order-credit-card-info
     :spec order-credit-card-info-data}))
