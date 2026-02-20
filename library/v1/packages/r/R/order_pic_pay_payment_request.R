#' Create a new OrderPicPayPaymentRequest
#'
#' @description
#' OrderPicPayPaymentRequest Class
#'
#' @docType class
#' @title OrderPicPayPaymentRequest
#' @description OrderPicPayPaymentRequest Class
#' @format An \code{R6Class} generator object
#' @field paymentMethod  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderPicPayPaymentRequest <- R6::R6Class(
  "OrderPicPayPaymentRequest",
  public = list(
    `paymentMethod` = NULL,

    #' @description
    #' Initialize a new OrderPicPayPaymentRequest class.
    #'
    #' @param paymentMethod paymentMethod
    #' @param ... Other optional arguments.
    initialize = function(`paymentMethod`, ...) {
      if (!missing(`paymentMethod`)) {
        if (!(is.character(`paymentMethod`) && length(`paymentMethod`) == 1)) {
          stop(paste("Error! Invalid data for `paymentMethod`. Must be a string:", `paymentMethod`))
        }
        self$`paymentMethod` <- `paymentMethod`
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
    #' @return OrderPicPayPaymentRequest as a base R list.
    #' @examples
    #' # convert array of OrderPicPayPaymentRequest (x) to a data frame
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
    #' Convert OrderPicPayPaymentRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderPicPayPaymentRequestObject <- list()
      if (!is.null(self$`paymentMethod`)) {
        OrderPicPayPaymentRequestObject[["paymentMethod"]] <-
          self$`paymentMethod`
      }
      return(OrderPicPayPaymentRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPicPayPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderPicPayPaymentRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`paymentMethod`)) {
        self$`paymentMethod` <- this_object$`paymentMethod`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderPicPayPaymentRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPicPayPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderPicPayPaymentRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`paymentMethod` <- this_object$`paymentMethod`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderPicPayPaymentRequest and throw an exception if invalid
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
        stop(paste("The JSON input `", input, "` is invalid for OrderPicPayPaymentRequest: the required field `paymentMethod` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderPicPayPaymentRequest
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
# OrderPicPayPaymentRequest$unlock()
#
## Below is an example to define the print function
# OrderPicPayPaymentRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderPicPayPaymentRequest$lock()

