#' Create a new OrderPIXPaymentRequest
#'
#' @description
#' OrderPIXPaymentRequest Class
#'
#' @docType class
#' @title OrderPIXPaymentRequest
#' @description OrderPIXPaymentRequest Class
#' @format An \code{R6Class} generator object
#' @field paymentMethod  \link{PaymentMethod}
#' @field expirationInSeconds PIX expiration time in seconds numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderPIXPaymentRequest <- R6::R6Class(
  "OrderPIXPaymentRequest",
  public = list(
    `paymentMethod` = NULL,
    `expirationInSeconds` = NULL,

    #' @description
    #' Initialize a new OrderPIXPaymentRequest class.
    #'
    #' @param paymentMethod paymentMethod
    #' @param expirationInSeconds PIX expiration time in seconds. Default to 3600.
    #' @param ... Other optional arguments.
    initialize = function(`paymentMethod`, `expirationInSeconds` = 3600, ...) {
      if (!missing(`paymentMethod`)) {
        if (!(`paymentMethod` %in% c())) {
          stop(paste("Error! \"", `paymentMethod`, "\" cannot be assigned to `paymentMethod`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`paymentMethod`))
        self$`paymentMethod` <- `paymentMethod`
      }
      if (!is.null(`expirationInSeconds`)) {
        self$`expirationInSeconds` <- `expirationInSeconds`
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
    #' @return OrderPIXPaymentRequest as a base R list.
    #' @examples
    #' # convert array of OrderPIXPaymentRequest (x) to a data frame
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
    #' Convert OrderPIXPaymentRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderPIXPaymentRequestObject <- list()
      if (!is.null(self$`paymentMethod`)) {
        OrderPIXPaymentRequestObject[["paymentMethod"]] <-
          self$extractSimpleType(self$`paymentMethod`)
      }
      if (!is.null(self$`expirationInSeconds`)) {
        OrderPIXPaymentRequestObject[["expirationInSeconds"]] <-
          self$`expirationInSeconds`
      }
      return(OrderPIXPaymentRequestObject)
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
    #' Deserialize JSON string into an instance of OrderPIXPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderPIXPaymentRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`paymentMethod`)) {
        `paymentmethod_object` <- PaymentMethod$new()
        `paymentmethod_object`$fromJSON(jsonlite::toJSON(this_object$`paymentMethod`, auto_unbox = TRUE, digits = NA))
        self$`paymentMethod` <- `paymentmethod_object`
      }
      if (!is.null(this_object$`expirationInSeconds`)) {
        self$`expirationInSeconds` <- this_object$`expirationInSeconds`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderPIXPaymentRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPIXPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderPIXPaymentRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`paymentMethod` <- PaymentMethod$new()$fromJSON(jsonlite::toJSON(this_object$`paymentMethod`, auto_unbox = TRUE, digits = NA))
      self$`expirationInSeconds` <- this_object$`expirationInSeconds`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderPIXPaymentRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `paymentMethod`
      if (!is.null(input_json$`paymentMethod`)) {
        stopifnot(R6::is.R6(input_json$`paymentMethod`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderPIXPaymentRequest: the required field `paymentMethod` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderPIXPaymentRequest
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

      if (self$`expirationInSeconds` < 3600) {
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

      if (self$`expirationInSeconds` < 3600) {
        invalid_fields["expirationInSeconds"] <- "Invalid value for `expirationInSeconds`, must be bigger than or equal to 3600."
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
# OrderPIXPaymentRequest$unlock()
#
## Below is an example to define the print function
# OrderPIXPaymentRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderPIXPaymentRequest$lock()

