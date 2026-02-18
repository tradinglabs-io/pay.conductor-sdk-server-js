(ns payconductor-sdk.specs.cart-o-de-cr-dito-card
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.dados-completos-do-cart-o-expiration :refer :all]
            )
  (:import (java.io File)))


(def cart-o-de-cr-dito-card-data
  {
   (ds/opt :firstSixCardNumber) string?
   (ds/req :token) string?
   (ds/req :cvv) string?
   (ds/req :expiration) dados-completos-do-cart-o-expiration-spec
   (ds/req :holderName) string?
   (ds/req :number) string?
   })

(def cart-o-de-cr-dito-card-spec
  (ds/spec
    {:name ::cart-o-de-cr-dito-card
     :spec cart-o-de-cr-dito-card-data}))
