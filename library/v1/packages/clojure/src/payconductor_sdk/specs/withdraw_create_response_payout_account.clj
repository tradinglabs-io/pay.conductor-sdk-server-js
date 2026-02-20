(ns payconductor-sdk.specs.withdraw-create-response-payout-account
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.pix-type :refer :all]
            )
  (:import (java.io File)))


(def withdraw-create-response-payout-account-data
  {
   (ds/req :id) string?
   (ds/req :ownerDocument) string?
   (ds/req :ownerName) string?
   (ds/req :pixKey) string?
   (ds/req :pixType) pix-type-spec
   })

(def withdraw-create-response-payout-account-spec
  (ds/spec
    {:name ::withdraw-create-response-payout-account
     :spec withdraw-create-response-payout-account-data}))
