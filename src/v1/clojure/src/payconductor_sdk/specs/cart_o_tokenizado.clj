(ns payconductor-sdk.specs.cart-o-tokenizado
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def cart-o-tokenizado-data
  {
   (ds/opt :firstSixCardNumber) string?
   (ds/req :token) string?
   })

(def cart-o-tokenizado-spec
  (ds/spec
    {:name ::cart-o-tokenizado
     :spec cart-o-tokenizado-data}))
