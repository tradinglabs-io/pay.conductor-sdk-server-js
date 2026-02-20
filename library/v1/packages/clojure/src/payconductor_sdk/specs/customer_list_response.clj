(ns payconductor-sdk.specs.customer-list-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.customer-read-response :refer :all]
            [payconductor-sdk.specs.customer-list-pagination :refer :all]
            )
  (:import (java.io File)))


(def customer-list-response-data
  {
   (ds/req :data) (s/coll-of customer-read-response-spec)
   (ds/req :pagination) customer-list-pagination-spec
   })

(def customer-list-response-spec
  (ds/spec
    {:name ::customer-list-response
     :spec customer-list-response-data}))
