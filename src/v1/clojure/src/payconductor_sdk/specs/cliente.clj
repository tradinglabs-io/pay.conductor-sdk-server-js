(ns payconductor-sdk.specs.cliente
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.endere-o-do-cliente :refer :all]
            )
  (:import (java.io File)))


(def cliente-data
  {
   (ds/opt :address) endere-o-do-cliente-spec
   (ds/req :documentNumber) string?
   (ds/req :documentType) string?
   (ds/req :email) string?
   (ds/req :name) string?
   (ds/opt :phoneNumber) string?
   })

(def cliente-spec
  (ds/spec
    {:name ::cliente
     :spec cliente-data}))
