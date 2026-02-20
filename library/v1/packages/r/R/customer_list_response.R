#' Create a new CustomerListResponse
#'
#' @description
#' Paginated list of customers
#'
#' @docType class
#' @title CustomerListResponse
#' @description CustomerListResponse Class
#' @format An \code{R6Class} generator object
#' @field data List of customers list(\link{CustomerReadResponse})
#' @field pagination  \link{CustomerListPagination}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CustomerListResponse <- R6::R6Class(
  "CustomerListResponse",
  public = list(
    `data` = NULL,
    `pagination` = NULL,

    #' @description
    #' Initialize a new CustomerListResponse class.
    #'
    #' @param data List of customers
    #' @param pagination pagination
    #' @param ... Other optional arguments.
    initialize = function(`data`, `pagination`, ...) {
      if (!missing(`data`)) {
        stopifnot(is.vector(`data`), length(`data`) != 0)
        sapply(`data`, function(x) stopifnot(R6::is.R6(x)))
        self$`data` <- `data`
      }
      if (!missing(`pagination`)) {
        stopifnot(R6::is.R6(`pagination`))
        self$`pagination` <- `pagination`
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
    #' @return CustomerListResponse as a base R list.
    #' @examples
    #' # convert array of CustomerListResponse (x) to a data frame
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
    #' Convert CustomerListResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CustomerListResponseObject <- list()
      if (!is.null(self$`data`)) {
        CustomerListResponseObject[["data"]] <-
          self$extractSimpleType(self$`data`)
      }
      if (!is.null(self$`pagination`)) {
        CustomerListResponseObject[["pagination"]] <-
          self$extractSimpleType(self$`pagination`)
      }
      return(CustomerListResponseObject)
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
    #' Deserialize JSON string into an instance of CustomerListResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerListResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`data`)) {
        self$`data` <- ApiClient$new()$deserializeObj(this_object$`data`, "array[CustomerReadResponse]", loadNamespace("payconductor_sdk"))
      }
      if (!is.null(this_object$`pagination`)) {
        `pagination_object` <- CustomerListPagination$new()
        `pagination_object`$fromJSON(jsonlite::toJSON(this_object$`pagination`, auto_unbox = TRUE, digits = NA))
        self$`pagination` <- `pagination_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CustomerListResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CustomerListResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerListResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`data` <- ApiClient$new()$deserializeObj(this_object$`data`, "array[CustomerReadResponse]", loadNamespace("payconductor_sdk"))
      self$`pagination` <- CustomerListPagination$new()$fromJSON(jsonlite::toJSON(this_object$`pagination`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to CustomerListResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `data`
      if (!is.null(input_json$`data`)) {
        stopifnot(is.vector(input_json$`data`), length(input_json$`data`) != 0)
        tmp <- sapply(input_json$`data`, function(x) stopifnot(R6::is.R6(x)))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerListResponse: the required field `data` is missing."))
      }
      # check the required field `pagination`
      if (!is.null(input_json$`pagination`)) {
        stopifnot(R6::is.R6(input_json$`pagination`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerListResponse: the required field `pagination` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CustomerListResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `data` is null
      if (is.null(self$`data`)) {
        return(FALSE)
      }

      # check if the required `pagination` is null
      if (is.null(self$`pagination`)) {
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
      # check if the required `data` is null
      if (is.null(self$`data`)) {
        invalid_fields["data"] <- "Non-nullable required field `data` cannot be null."
      }

      # check if the required `pagination` is null
      if (is.null(self$`pagination`)) {
        invalid_fields["pagination"] <- "Non-nullable required field `pagination` cannot be null."
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
# CustomerListResponse$unlock()
#
## Below is an example to define the print function
# CustomerListResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CustomerListResponse$lock()

