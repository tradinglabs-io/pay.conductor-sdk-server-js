(ns payconductor-sdk.specs.cart-o-de-cr-dito
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.cart-o-de-cr-dito-card :refer :all]
            [payconductor-sdk.specs.cart-o-de-cr-dito-installments :refer :all]
            )
  (:import (java.io File)))


(def cart-o-de-cr-dito-data
  {
   (ds/req :paymentMethod) string?
   (ds/req :card) cart-o-de-cr-dito-card-spec
   (ds/req :installments) cart-o-de-cr-dito-installments-spec
   (ds/opt :softDescriptor) string?
   })

(def cart-o-de-cr-dito-spec
  (ds/spec
    {:name ::cart-o-de-cr-dito
     :spec cart-o-de-cr-dito-data}))
