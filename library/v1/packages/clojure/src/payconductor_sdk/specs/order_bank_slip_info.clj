(ns payconductor-sdk.specs.order-bank-slip-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-bank-slip-info-data
  {
   (ds/req :barCode) string?
   (ds/req :digitableLine) string?
   (ds/opt :pdfUrl) string?
   })

(def order-bank-slip-info-spec
  (ds/spec
    {:name ::order-bank-slip-info
     :spec order-bank-slip-info-data}))
