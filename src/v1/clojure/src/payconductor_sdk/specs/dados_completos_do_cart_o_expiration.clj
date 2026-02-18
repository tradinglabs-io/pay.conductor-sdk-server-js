(ns payconductor-sdk.specs.dados-completos-do-cart-o-expiration
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def dados-completos-do-cart-o-expiration-data
  {
   (ds/req :month) float?
   (ds/req :year) float?
   })

(def dados-completos-do-cart-o-expiration-spec
  (ds/spec
    {:name ::dados-completos-do-cart-o-expiration
     :spec dados-completos-do-cart-o-expiration-data}))
