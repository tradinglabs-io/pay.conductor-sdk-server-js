(ns payconductor-sdk.specs.boleto
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.boleto-expiration-in-days :refer :all]
            )
  (:import (java.io File)))


(def boleto-data
  {
   (ds/req :paymentMethod) string?
   (ds/opt :expirationInDays) boleto-expiration-in-days-spec
   })

(def boleto-spec
  (ds/spec
    {:name ::boleto
     :spec boleto-data}))
