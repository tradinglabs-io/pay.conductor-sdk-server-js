(ns payconductor-sdk.specs.order-create-response-session
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-create-response-session-data
  {
   (ds/req :sessionId) string?
   })

(def order-create-response-session-spec
  (ds/spec
    {:name ::order-create-response-session
     :spec order-create-response-session-data}))
