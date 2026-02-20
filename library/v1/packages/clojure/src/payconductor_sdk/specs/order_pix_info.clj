(ns payconductor-sdk.specs.order-pix-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-pix-info-data
  {
   (ds/req :copyAndPasteCode) string?
   (ds/req :qrCodeUrl) string?
   (ds/req :endToEndId) string?
   })

(def order-pix-info-spec
  (ds/spec
    {:name ::order-pix-info
     :spec order-pix-info-data}))
