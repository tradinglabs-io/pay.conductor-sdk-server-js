(ns payconductor-sdk.specs.withdraw-create-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.merchant-input :refer :all]
            [payconductor-sdk.specs.withdraw-payout-account-data :refer :all]
            )
  (:import (java.io File)))


(def withdraw-create-request-data
  {
   (ds/req :amount) float?
   (ds/opt :externalId) string?
   (ds/opt :merchant) merchant-input-spec
   (ds/req :payoutAccount) withdraw-payout-account-data-spec
   })

(def withdraw-create-request-spec
  (ds/spec
    {:name ::withdraw-create-request
     :spec withdraw-create-request-data}))
