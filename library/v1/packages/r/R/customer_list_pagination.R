#' Create a new CustomerListPagination
#'
#' @description
#' Pagination information for customer list
#'
#' @docType class
#' @title CustomerListPagination
#' @description CustomerListPagination Class
#' @format An \code{R6Class} generator object
#' @field currentPage Current page number numeric
#' @field pageSize Number of items per page numeric
#' @field totalItems Total number of customers numeric
#' @field totalPages Total number of pages numeric
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CustomerListPagination <- R6::R6Class(
  "CustomerListPagination",
  public = list(
    `currentPage` = NULL,
    `pageSize` = NULL,
    `totalItems` = NULL,
    `totalPages` = NULL,

    #' @description
    #' Initialize a new CustomerListPagination class.
    #'
    #' @param currentPage Current page number
    #' @param pageSize Number of items per page
    #' @param totalItems Total number of customers
    #' @param totalPages Total number of pages
    #' @param ... Other optional arguments.
    initialize = function(`currentPage`, `pageSize`, `totalItems`, `totalPages`, ...) {
      if (!missing(`currentPage`)) {
        self$`currentPage` <- `currentPage`
      }
      if (!missing(`pageSize`)) {
        self$`pageSize` <- `pageSize`
      }
      if (!missing(`totalItems`)) {
        self$`totalItems` <- `totalItems`
      }
      if (!missing(`totalPages`)) {
        self$`totalPages` <- `totalPages`
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
    #' @return CustomerListPagination as a base R list.
    #' @examples
    #' # convert array of CustomerListPagination (x) to a data frame
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
    #' Convert CustomerListPagination to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CustomerListPaginationObject <- list()
      if (!is.null(self$`currentPage`)) {
        CustomerListPaginationObject[["currentPage"]] <-
          self$`currentPage`
      }
      if (!is.null(self$`pageSize`)) {
        CustomerListPaginationObject[["pageSize"]] <-
          self$`pageSize`
      }
      if (!is.null(self$`totalItems`)) {
        CustomerListPaginationObject[["totalItems"]] <-
          self$`totalItems`
      }
      if (!is.null(self$`totalPages`)) {
        CustomerListPaginationObject[["totalPages"]] <-
          self$`totalPages`
      }
      return(CustomerListPaginationObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of CustomerListPagination
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerListPagination
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`currentPage`)) {
        self$`currentPage` <- this_object$`currentPage`
      }
      if (!is.null(this_object$`pageSize`)) {
        self$`pageSize` <- this_object$`pageSize`
      }
      if (!is.null(this_object$`totalItems`)) {
        self$`totalItems` <- this_object$`totalItems`
      }
      if (!is.null(this_object$`totalPages`)) {
        self$`totalPages` <- this_object$`totalPages`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CustomerListPagination in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CustomerListPagination
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerListPagination
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`currentPage` <- this_object$`currentPage`
      self$`pageSize` <- this_object$`pageSize`
      self$`totalItems` <- this_object$`totalItems`
      self$`totalPages` <- this_object$`totalPages`
      self
    },

    #' @description
    #' Validate JSON input with respect to CustomerListPagination and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `currentPage`
      if (!is.null(input_json$`currentPage`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerListPagination: the required field `currentPage` is missing."))
      }
      # check the required field `pageSize`
      if (!is.null(input_json$`pageSize`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerListPagination: the required field `pageSize` is missing."))
      }
      # check the required field `totalItems`
      if (!is.null(input_json$`totalItems`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerListPagination: the required field `totalItems` is missing."))
      }
      # check the required field `totalPages`
      if (!is.null(input_json$`totalPages`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerListPagination: the required field `totalPages` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CustomerListPagination
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `currentPage` is null
      if (is.null(self$`currentPage`)) {
        return(FALSE)
      }

      # check if the required `pageSize` is null
      if (is.null(self$`pageSize`)) {
        return(FALSE)
      }

      # check if the required `totalItems` is null
      if (is.null(self$`totalItems`)) {
        return(FALSE)
      }

      # check if the required `totalPages` is null
      if (is.null(self$`totalPages`)) {
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
      # check if the required `currentPage` is null
      if (is.null(self$`currentPage`)) {
        invalid_fields["currentPage"] <- "Non-nullable required field `currentPage` cannot be null."
      }

      # check if the required `pageSize` is null
      if (is.null(self$`pageSize`)) {
        invalid_fields["pageSize"] <- "Non-nullable required field `pageSize` cannot be null."
      }

      # check if the required `totalItems` is null
      if (is.null(self$`totalItems`)) {
        invalid_fields["totalItems"] <- "Non-nullable required field `totalItems` cannot be null."
      }

      # check if the required `totalPages` is null
      if (is.null(self$`totalPages`)) {
        invalid_fields["totalPages"] <- "Non-nullable required field `totalPages` cannot be null."
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
# CustomerListPagination$unlock()
#
## Below is an example to define the print function
# CustomerListPagination$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CustomerListPagination$lock()

