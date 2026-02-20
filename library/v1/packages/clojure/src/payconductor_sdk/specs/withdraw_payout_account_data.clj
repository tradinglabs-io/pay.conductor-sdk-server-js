(ns payconductor-sdk.specs.withdraw-payout-account-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.pix-type :refer :all]
            )
  (:import (java.io File)))


(def withdraw-payout-account-data-data
  {
   (ds/req :ownerDocument) string?
   (ds/req :ownerName) string?
   (ds/req :pixKey) string?
   (ds/req :pixType) pix-type-spec
   })

(def withdraw-payout-account-data-spec
  (ds/spec
    {:name ::withdraw-payout-account-data
     :spec withdraw-payout-account-data-data}))
