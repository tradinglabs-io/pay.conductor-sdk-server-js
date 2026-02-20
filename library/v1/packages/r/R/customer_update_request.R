#' Create a new CustomerUpdateRequest
#'
#' @description
#' Schema for updating customer information
#'
#' @docType class
#' @title CustomerUpdateRequest
#' @description CustomerUpdateRequest Class
#' @format An \code{R6Class} generator object
#' @field address  \link{AddressCreateRequest} [optional]
#' @field documentNumber Customer CPF or CNPJ without formatting character [optional]
#' @field documentType  \link{DocumentType} [optional]
#' @field email Customer email character [optional]
#' @field name Customer full name character [optional]
#' @field phoneNumber Customer phone number in +55 DD 9XXXXXXXX format character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CustomerUpdateRequest <- R6::R6Class(
  "CustomerUpdateRequest",
  public = list(
    `address` = NULL,
    `documentNumber` = NULL,
    `documentType` = NULL,
    `email` = NULL,
    `name` = NULL,
    `phoneNumber` = NULL,

    #' @description
    #' Initialize a new CustomerUpdateRequest class.
    #'
    #' @param address address
    #' @param documentNumber Customer CPF or CNPJ without formatting
    #' @param documentType documentType
    #' @param email Customer email
    #' @param name Customer full name
    #' @param phoneNumber Customer phone number in +55 DD 9XXXXXXXX format
    #' @param ... Other optional arguments.
    initialize = function(`address` = NULL, `documentNumber` = NULL, `documentType` = NULL, `email` = NULL, `name` = NULL, `phoneNumber` = NULL, ...) {
      if (!is.null(`address`)) {
        stopifnot(R6::is.R6(`address`))
        self$`address` <- `address`
      }
      if (!is.null(`documentNumber`)) {
        if (!(is.character(`documentNumber`) && length(`documentNumber`) == 1)) {
          stop(paste("Error! Invalid data for `documentNumber`. Must be a string:", `documentNumber`))
        }
        self$`documentNumber` <- `documentNumber`
      }
      if (!is.null(`documentType`)) {
        if (!(`documentType` %in% c())) {
          stop(paste("Error! \"", `documentType`, "\" cannot be assigned to `documentType`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`documentType`))
        self$`documentType` <- `documentType`
      }
      if (!is.null(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`phoneNumber`)) {
        if (!(is.character(`phoneNumber`) && length(`phoneNumber`) == 1)) {
          stop(paste("Error! Invalid data for `phoneNumber`. Must be a string:", `phoneNumber`))
        }
        self$`phoneNumber` <- `phoneNumber`
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
    #' @return CustomerUpdateRequest as a base R list.
    #' @examples
    #' # convert array of CustomerUpdateRequest (x) to a data frame
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
    #' Convert CustomerUpdateRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CustomerUpdateRequestObject <- list()
      if (!is.null(self$`address`)) {
        CustomerUpdateRequestObject[["address"]] <-
          self$extractSimpleType(self$`address`)
      }
      if (!is.null(self$`documentNumber`)) {
        CustomerUpdateRequestObject[["documentNumber"]] <-
          self$`documentNumber`
      }
      if (!is.null(self$`documentType`)) {
        CustomerUpdateRequestObject[["documentType"]] <-
          self$extractSimpleType(self$`documentType`)
      }
      if (!is.null(self$`email`)) {
        CustomerUpdateRequestObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`name`)) {
        CustomerUpdateRequestObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`phoneNumber`)) {
        CustomerUpdateRequestObject[["phoneNumber"]] <-
          self$`phoneNumber`
      }
      return(CustomerUpdateRequestObject)
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
    #' Deserialize JSON string into an instance of CustomerUpdateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerUpdateRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`address`)) {
        `address_object` <- AddressCreateRequest$new()
        `address_object`$fromJSON(jsonlite::toJSON(this_object$`address`, auto_unbox = TRUE, digits = NA))
        self$`address` <- `address_object`
      }
      if (!is.null(this_object$`documentNumber`)) {
        self$`documentNumber` <- this_object$`documentNumber`
      }
      if (!is.null(this_object$`documentType`)) {
        `documenttype_object` <- DocumentType$new()
        `documenttype_object`$fromJSON(jsonlite::toJSON(this_object$`documentType`, auto_unbox = TRUE, digits = NA))
        self$`documentType` <- `documenttype_object`
      }
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`phoneNumber`)) {
        self$`phoneNumber` <- this_object$`phoneNumber`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CustomerUpdateRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CustomerUpdateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerUpdateRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`address` <- AddressCreateRequest$new()$fromJSON(jsonlite::toJSON(this_object$`address`, auto_unbox = TRUE, digits = NA))
      self$`documentNumber` <- this_object$`documentNumber`
      self$`documentType` <- DocumentType$new()$fromJSON(jsonlite::toJSON(this_object$`documentType`, auto_unbox = TRUE, digits = NA))
      self$`email` <- this_object$`email`
      self$`name` <- this_object$`name`
      self$`phoneNumber` <- this_object$`phoneNumber`
      self
    },

    #' @description
    #' Validate JSON input with respect to CustomerUpdateRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CustomerUpdateRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      if (!str_detect(self$`documentNumber`, "^\\d{11}$|^\\d{14}$")) {
        return(FALSE)
      }

      if (!str_detect(self$`phoneNumber`, "^\\+(\\d{1,2}) (\\d{2}) (\\d{8,9})$")) {
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
      if (!str_detect(self$`documentNumber`, "^\\d{11}$|^\\d{14}$")) {
        invalid_fields["documentNumber"] <- "Invalid value for `documentNumber`, must conform to the pattern ^\\d{11}$|^\\d{14}$."
      }

      if (!str_detect(self$`phoneNumber`, "^\\+(\\d{1,2}) (\\d{2}) (\\d{8,9})$")) {
        invalid_fields["phoneNumber"] <- "Invalid value for `phoneNumber`, must conform to the pattern ^\\+(\\d{1,2}) (\\d{2}) (\\d{8,9})$."
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
# CustomerUpdateRequest$unlock()
#
## Below is an example to define the print function
# CustomerUpdateRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CustomerUpdateRequest$lock()

