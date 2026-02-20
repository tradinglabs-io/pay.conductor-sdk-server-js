#' Create a new OrderNuPayInfo
#'
#' @description
#' NuPay payment data
#'
#' @docType class
#' @title OrderNuPayInfo
#' @description OrderNuPayInfo Class
#' @format An \code{R6Class} generator object
#' @field paymentUrl NuPay payment URL character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderNuPayInfo <- R6::R6Class(
  "OrderNuPayInfo",
  public = list(
    `paymentUrl` = NULL,

    #' @description
    #' Initialize a new OrderNuPayInfo class.
    #'
    #' @param paymentUrl NuPay payment URL
    #' @param ... Other optional arguments.
    initialize = function(`paymentUrl`, ...) {
      if (!missing(`paymentUrl`)) {
        if (!(is.character(`paymentUrl`) && length(`paymentUrl`) == 1)) {
          stop(paste("Error! Invalid data for `paymentUrl`. Must be a string:", `paymentUrl`))
        }
        self$`paymentUrl` <- `paymentUrl`
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
    #' @return OrderNuPayInfo as a base R list.
    #' @examples
    #' # convert array of OrderNuPayInfo (x) to a data frame
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
    #' Convert OrderNuPayInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderNuPayInfoObject <- list()
      if (!is.null(self$`paymentUrl`)) {
        OrderNuPayInfoObject[["paymentUrl"]] <-
          self$`paymentUrl`
      }
      return(OrderNuPayInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderNuPayInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderNuPayInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`paymentUrl`)) {
        self$`paymentUrl` <- this_object$`paymentUrl`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderNuPayInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderNuPayInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderNuPayInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`paymentUrl` <- this_object$`paymentUrl`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderNuPayInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `paymentUrl`
      if (!is.null(input_json$`paymentUrl`)) {
        if (!(is.character(input_json$`paymentUrl`) && length(input_json$`paymentUrl`) == 1)) {
          stop(paste("Error! Invalid data for `paymentUrl`. Must be a string:", input_json$`paymentUrl`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderNuPayInfo: the required field `paymentUrl` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderNuPayInfo
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `paymentUrl` is null
      if (is.null(self$`paymentUrl`)) {
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
      # check if the required `paymentUrl` is null
      if (is.null(self$`paymentUrl`)) {
        invalid_fields["paymentUrl"] <- "Non-nullable required field `paymentUrl` cannot be null."
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
# OrderNuPayInfo$unlock()
#
## Below is an example to define the print function
# OrderNuPayInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderNuPayInfo$lock()

