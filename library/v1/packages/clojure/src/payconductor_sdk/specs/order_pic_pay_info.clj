(ns payconductor-sdk.specs.order-pic-pay-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-pic-pay-info-data
  {
   (ds/req :copyAndPasteCode) string?
   (ds/req :qrCodeUrl) string?
   })

(def order-pic-pay-info-spec
  (ds/spec
    {:name ::order-pic-pay-info
     :spec order-pic-pay-info-data}))
