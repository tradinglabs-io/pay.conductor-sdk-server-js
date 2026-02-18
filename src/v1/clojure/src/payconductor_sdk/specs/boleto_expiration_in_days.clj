(ns payconductor-sdk.specs.boleto-expiration-in-days
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def boleto-expiration-in-days-data
  {
   })

(def boleto-expiration-in-days-spec
  (ds/spec
    {:name ::boleto-expiration-in-days
     :spec boleto-expiration-in-days-data}))
