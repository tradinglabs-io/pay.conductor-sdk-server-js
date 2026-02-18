(ns payconductor-sdk.specs.endere-o-do-cliente
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def endere-o-do-cliente-data
  {
   (ds/req :city) string?
   (ds/req :country) string?
   (ds/req :neighborhood) string?
   (ds/req :number) string?
   (ds/req :state) string?
   (ds/req :street) string?
   (ds/req :zipCode) string?
   })

(def endere-o-do-cliente-spec
  (ds/spec
    {:name ::endere-o-do-cliente
     :spec endere-o-do-cliente-data}))
