(ns payconductor-sdk.specs.order-create-request-session
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def order-create-request-session-data
  {
   (ds/opt :expiresInMinutes) float?
   (ds/opt :checkoutUrl) string?
   (ds/opt :sessionId) string?
   (ds/opt :externalSessionId) string?
   })

(def order-create-request-session-spec
  (ds/spec
    {:name ::order-create-request-session
     :spec order-create-request-session-data}))
