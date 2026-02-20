(ns payconductor-sdk.specs.order-nu-pay-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-nu-pay-info-data
  {
   (ds/req :paymentUrl) string?
   })

(def order-nu-pay-info-spec
  (ds/spec
    {:name ::order-nu-pay-info
     :spec order-nu-pay-info-data}))
