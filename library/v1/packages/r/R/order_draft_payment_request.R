#' Create a new OrderDraftPaymentRequest
#'
#' @description
#' Used to create an order without generating a real payment. Use to create orders that will be paid later
#'
#' @docType class
#' @title OrderDraftPaymentRequest
#' @description OrderDraftPaymentRequest Class
#' @format An \code{R6Class} generator object
#' @field paymentMethod  character
#' @field expirationInSeconds Order expiration time in seconds numeric [optional]
#' @field availablePaymentMethods Available payment methods for this order list(\link{AvailablePaymentMethods}) [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderDraftPaymentRequest <- R6::R6Class(
  "OrderDraftPaymentRequest",
  public = list(
    `paymentMethod` = NULL,
    `expirationInSeconds` = NULL,
    `availablePaymentMethods` = NULL,

    #' @description
    #' Initialize a new OrderDraftPaymentRequest class.
    #'
    #' @param paymentMethod paymentMethod
    #' @param expirationInSeconds Order expiration time in seconds. Default to 3600.
    #' @param availablePaymentMethods Available payment methods for this order
    #' @param ... Other optional arguments.
    initialize = function(`paymentMethod`, `expirationInSeconds` = 3600, `availablePaymentMethods` = NULL, ...) {
      if (!missing(`paymentMethod`)) {
        if (!(is.character(`paymentMethod`) && length(`paymentMethod`) == 1)) {
          stop(paste("Error! Invalid data for `paymentMethod`. Must be a string:", `paymentMethod`))
        }
        self$`paymentMethod` <- `paymentMethod`
      }
      if (!is.null(`expirationInSeconds`)) {
        self$`expirationInSeconds` <- `expirationInSeconds`
      }
      if (!is.null(`availablePaymentMethods`)) {
        stopifnot(is.vector(`availablePaymentMethods`), length(`availablePaymentMethods`) != 0)
        sapply(`availablePaymentMethods`, function(x) stopifnot(R6::is.R6(x)))
        self$`availablePaymentMethods` <- `availablePaymentMethods`
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
    #' @return OrderDraftPaymentRequest as a base R list.
    #' @examples
    #' # convert array of OrderDraftPaymentRequest (x) to a data frame
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
    #' Convert OrderDraftPaymentRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderDraftPaymentRequestObject <- list()
      if (!is.null(self$`paymentMethod`)) {
        OrderDraftPaymentRequestObject[["paymentMethod"]] <-
          self$`paymentMethod`
      }
      if (!is.null(self$`expirationInSeconds`)) {
        OrderDraftPaymentRequestObject[["expirationInSeconds"]] <-
          self$`expirationInSeconds`
      }
      if (!is.null(self$`availablePaymentMethods`)) {
        OrderDraftPaymentRequestObject[["availablePaymentMethods"]] <-
          self$extractSimpleType(self$`availablePaymentMethods`)
      }
      return(OrderDraftPaymentRequestObject)
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
    #' Deserialize JSON string into an instance of OrderDraftPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderDraftPaymentRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`paymentMethod`)) {
        self$`paymentMethod` <- this_object$`paymentMethod`
      }
      if (!is.null(this_object$`expirationInSeconds`)) {
        self$`expirationInSeconds` <- this_object$`expirationInSeconds`
      }
      if (!is.null(this_object$`availablePaymentMethods`)) {
        self$`availablePaymentMethods` <- ApiClient$new()$deserializeObj(this_object$`availablePaymentMethods`, "array[AvailablePaymentMethods]", loadNamespace("payconductor_sdk"))
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderDraftPaymentRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderDraftPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderDraftPaymentRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`paymentMethod` <- this_object$`paymentMethod`
      self$`expirationInSeconds` <- this_object$`expirationInSeconds`
      self$`availablePaymentMethods` <- ApiClient$new()$deserializeObj(this_object$`availablePaymentMethods`, "array[AvailablePaymentMethods]", loadNamespace("payconductor_sdk"))
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderDraftPaymentRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `paymentMethod`
      if (!is.null(input_json$`paymentMethod`)) {
        if (!(is.character(input_json$`paymentMethod`) && length(input_json$`paymentMethod`) == 1)) {
          stop(paste("Error! Invalid data for `paymentMethod`. Must be a string:", input_json$`paymentMethod`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderDraftPaymentRequest: the required field `paymentMethod` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderDraftPaymentRequest
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
# OrderDraftPaymentRequest$unlock()
#
## Below is an example to define the print function
# OrderDraftPaymentRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderDraftPaymentRequest$lock()

