#' Create a new OrderBankSlipPaymentRequest
#'
#' @description
#' OrderBankSlipPaymentRequest Class
#'
#' @docType class
#' @title OrderBankSlipPaymentRequest
#' @description OrderBankSlipPaymentRequest Class
#' @format An \code{R6Class} generator object
#' @field paymentMethod  \link{PaymentMethod}
#' @field expirationInDays Days until bank slip expires numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderBankSlipPaymentRequest <- R6::R6Class(
  "OrderBankSlipPaymentRequest",
  public = list(
    `paymentMethod` = NULL,
    `expirationInDays` = NULL,

    #' @description
    #' Initialize a new OrderBankSlipPaymentRequest class.
    #'
    #' @param paymentMethod paymentMethod
    #' @param expirationInDays Days until bank slip expires. Default to 7.
    #' @param ... Other optional arguments.
    initialize = function(`paymentMethod`, `expirationInDays` = 7, ...) {
      if (!missing(`paymentMethod`)) {
        if (!(`paymentMethod` %in% c())) {
          stop(paste("Error! \"", `paymentMethod`, "\" cannot be assigned to `paymentMethod`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`paymentMethod`))
        self$`paymentMethod` <- `paymentMethod`
      }
      if (!is.null(`expirationInDays`)) {
        self$`expirationInDays` <- `expirationInDays`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return OrderBankSlipPaymentRequest as a base R list.
    #' @examples
    #' # convert array of OrderBankSlipPaymentRequest (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert OrderBankSlipPaymentRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderBankSlipPaymentRequestObject <- list()
      if (!is.null(self$`paymentMethod`)) {
        OrderBankSlipPaymentRequestObject[["paymentMethod"]] <-
          self$extractSimpleType(self$`paymentMethod`)
      }
      if (!is.null(self$`expirationInDays`)) {
        OrderBankSlipPaymentRequestObject[["expirationInDays"]] <-
          self$`expirationInDays`
      }
      return(OrderBankSlipPaymentRequestObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderBankSlipPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderBankSlipPaymentRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`paymentMethod`)) {
        `paymentmethod_object` <- PaymentMethod$new()
        `paymentmethod_object`$fromJSON(jsonlite::toJSON(this_object$`paymentMethod`, auto_unbox = TRUE, digits = NA))
        self$`paymentMethod` <- `paymentmethod_object`
      }
      if (!is.null(this_object$`expirationInDays`)) {
        self$`expirationInDays` <- this_object$`expirationInDays`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderBankSlipPaymentRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderBankSlipPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderBankSlipPaymentRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`paymentMethod` <- PaymentMethod$new()$fromJSON(jsonlite::toJSON(this_object$`paymentMethod`, auto_unbox = TRUE, digits = NA))
      self$`expirationInDays` <- this_object$`expirationInDays`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderBankSlipPaymentRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `paymentMethod`
      if (!is.null(input_json$`paymentMethod`)) {
        stopifnot(R6::is.R6(input_json$`paymentMethod`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderBankSlipPaymentRequest: the required field `paymentMethod` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderBankSlipPaymentRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `paymentMethod` is null
      if (is.null(self$`paymentMethod`)) {
        return(FALSE)
      }

      if (self$`expirationInDays` < 1) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `paymentMethod` is null
      if (is.null(self$`paymentMethod`)) {
        invalid_fields["paymentMethod"] <- "Non-nullable required field `paymentMethod` cannot be null."
      }

      if (self$`expirationInDays` < 1) {
        invalid_fields["expirationInDays"] <- "Invalid value for `expirationInDays`, must be bigger than or equal to 1."
      }

      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# OrderBankSlipPaymentRequest$unlock()
#
## Below is an example to define the print function
# OrderBankSlipPaymentRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderBankSlipPaymentRequest$lock()

