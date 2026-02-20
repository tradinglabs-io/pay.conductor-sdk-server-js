(ns payconductor-sdk.specs.withdraw-create-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [payconductor-sdk.specs.status :refer :all]
            [payconductor-sdk.specs.withdraw-create-response-payed-at :refer :all]
            [payconductor-sdk.specs.withdraw-create-response-payout-account :refer :all]
            )
  (:import (java.io File)))


(def withdraw-create-response-data
  {
   (ds/req :id) string?
   (ds/req :externalId) string?
   (ds/req :externalIntegrationKey) string?
   (ds/req :externalIntegrationId) string?
   (ds/req :costFee) float?
   (ds/req :status) status-spec
   (ds/req :errorCode) string?
   (ds/req :errorMessage) string?
   (ds/req :payedAt) withdraw-create-response-payed-at-spec
   (ds/req :payoutAccount) withdraw-create-response-payout-account-spec
   })

(def withdraw-create-response-spec
  (ds/spec
    {:name ::withdraw-create-response
     :spec withdraw-create-response-data}))
