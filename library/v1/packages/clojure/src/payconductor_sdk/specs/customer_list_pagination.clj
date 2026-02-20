(ns payconductor-sdk.specs.customer-list-pagination
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def customer-list-pagination-data
  {
   (ds/req :currentPage) float?
   (ds/req :pageSize) float?
   (ds/req :totalItems) float?
   (ds/req :totalPages) float?
   })

(def customer-list-pagination-spec
  (ds/spec
    {:name ::customer-list-pagination
     :spec customer-list-pagination-data}))
