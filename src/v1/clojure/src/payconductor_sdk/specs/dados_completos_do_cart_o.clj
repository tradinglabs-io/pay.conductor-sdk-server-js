(ns payconductor-sdk.specs.dados-completos-do-cart-o
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.dados-completos-do-cart-o-expiration :refer :all]
            )
  (:import (java.io File)))


(def dados-completos-do-cart-o-data
  {
   (ds/req :cvv) string?
   (ds/req :expiration) dados-completos-do-cart-o-expiration-spec
   (ds/req :holderName) string?
   (ds/req :number) string?
   })

(def dados-completos-do-cart-o-spec
  (ds/spec
    {:name ::dados-completos-do-cart-o
     :spec dados-completos-do-cart-o-data}))
