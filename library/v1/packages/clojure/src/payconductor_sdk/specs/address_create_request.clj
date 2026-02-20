(ns payconductor-sdk.specs.address-create-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def address-create-request-data
  {
   (ds/req :city) string?
   (ds/req :country) string?
   (ds/req :neighborhood) string?
   (ds/req :number) string?
   (ds/req :state) string?
   (ds/req :street) string?
   (ds/req :zipCode) string?
   })

(def address-create-request-spec
  (ds/spec
    {:name ::address-create-request
     :spec address-create-request-data}))
