#' Create a new OrderBankSlipInfo
#'
#' @description
#' Bank slip payment data
#'
#' @docType class
#' @title OrderBankSlipInfo
#' @description OrderBankSlipInfo Class
#' @format An \code{R6Class} generator object
#' @field barCode Bank slip bar code character
#' @field digitableLine Bank slip digitable line character
#' @field pdfUrl Bank slip PDF URL character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderBankSlipInfo <- R6::R6Class(
  "OrderBankSlipInfo",
  public = list(
    `barCode` = NULL,
    `digitableLine` = NULL,
    `pdfUrl` = NULL,

    #' @description
    #' Initialize a new OrderBankSlipInfo class.
    #'
    #' @param barCode Bank slip bar code
    #' @param digitableLine Bank slip digitable line
    #' @param pdfUrl Bank slip PDF URL
    #' @param ... Other optional arguments.
    initialize = function(`barCode`, `digitableLine`, `pdfUrl` = NULL, ...) {
      if (!missing(`barCode`)) {
        if (!(is.character(`barCode`) && length(`barCode`) == 1)) {
          stop(paste("Error! Invalid data for `barCode`. Must be a string:", `barCode`))
        }
        self$`barCode` <- `barCode`
      }
      if (!missing(`digitableLine`)) {
        if (!(is.character(`digitableLine`) && length(`digitableLine`) == 1)) {
          stop(paste("Error! Invalid data for `digitableLine`. Must be a string:", `digitableLine`))
        }
        self$`digitableLine` <- `digitableLine`
      }
      if (!is.null(`pdfUrl`)) {
        if (!(is.character(`pdfUrl`) && length(`pdfUrl`) == 1)) {
          stop(paste("Error! Invalid data for `pdfUrl`. Must be a string:", `pdfUrl`))
        }
        self$`pdfUrl` <- `pdfUrl`
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
    #' @return OrderBankSlipInfo as a base R list.
    #' @examples
    #' # convert array of OrderBankSlipInfo (x) to a data frame
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
    #' Convert OrderBankSlipInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderBankSlipInfoObject <- list()
      if (!is.null(self$`barCode`)) {
        OrderBankSlipInfoObject[["barCode"]] <-
          self$`barCode`
      }
      if (!is.null(self$`digitableLine`)) {
        OrderBankSlipInfoObject[["digitableLine"]] <-
          self$`digitableLine`
      }
      if (!is.null(self$`pdfUrl`)) {
        OrderBankSlipInfoObject[["pdfUrl"]] <-
          self$`pdfUrl`
      }
      return(OrderBankSlipInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderBankSlipInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderBankSlipInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`barCode`)) {
        self$`barCode` <- this_object$`barCode`
      }
      if (!is.null(this_object$`digitableLine`)) {
        self$`digitableLine` <- this_object$`digitableLine`
      }
      if (!is.null(this_object$`pdfUrl`)) {
        self$`pdfUrl` <- this_object$`pdfUrl`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderBankSlipInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderBankSlipInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderBankSlipInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`barCode` <- this_object$`barCode`
      self$`digitableLine` <- this_object$`digitableLine`
      self$`pdfUrl` <- this_object$`pdfUrl`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderBankSlipInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `barCode`
      if (!is.null(input_json$`barCode`)) {
        if (!(is.character(input_json$`barCode`) && length(input_json$`barCode`) == 1)) {
          stop(paste("Error! Invalid data for `barCode`. Must be a string:", input_json$`barCode`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderBankSlipInfo: the required field `barCode` is missing."))
      }
      # check the required field `digitableLine`
      if (!is.null(input_json$`digitableLine`)) {
        if (!(is.character(input_json$`digitableLine`) && length(input_json$`digitableLine`) == 1)) {
          stop(paste("Error! Invalid data for `digitableLine`. Must be a string:", input_json$`digitableLine`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderBankSlipInfo: the required field `digitableLine` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderBankSlipInfo
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `barCode` is null
      if (is.null(self$`barCode`)) {
        return(FALSE)
      }

      # check if the required `digitableLine` is null
      if (is.null(self$`digitableLine`)) {
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
      # check if the required `barCode` is null
      if (is.null(self$`barCode`)) {
        invalid_fields["barCode"] <- "Non-nullable required field `barCode` cannot be null."
      }

      # check if the required `digitableLine` is null
      if (is.null(self$`digitableLine`)) {
        invalid_fields["digitableLine"] <- "Non-nullable required field `digitableLine` cannot be null."
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
# OrderBankSlipInfo$unlock()
#
## Below is an example to define the print function
# OrderBankSlipInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderBankSlipInfo$lock()

