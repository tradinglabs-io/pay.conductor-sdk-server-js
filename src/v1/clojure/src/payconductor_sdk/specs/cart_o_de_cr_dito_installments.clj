(ns payconductor-sdk.specs.cart-o-de-cr-dito-installments
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def cart-o-de-cr-dito-installments-data
  {
   })

(def cart-o-de-cr-dito-installments-spec
  (ds/spec
    {:name ::cart-o-de-cr-dito-installments
     :spec cart-o-de-cr-dito-installments-data}))
