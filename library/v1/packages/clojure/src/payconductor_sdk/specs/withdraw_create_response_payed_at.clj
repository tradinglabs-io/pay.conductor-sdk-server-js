(ns payconductor-sdk.specs.withdraw-create-response-payed-at
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def withdraw-create-response-payed-at-data
  {
   })

(def withdraw-create-response-payed-at-spec
  (ds/spec
    {:name ::withdraw-create-response-payed-at
     :spec withdraw-create-response-payed-at-data}))
