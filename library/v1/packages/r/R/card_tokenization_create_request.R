#' Create a new CardTokenizationCreateRequest
#'
#' @description
#' Data for creating a customer card with customer information
#'
#' @docType class
#' @title CardTokenizationCreateRequest
#' @description CardTokenizationCreateRequest Class
#' @format An \code{R6Class} generator object
#' @field card  \link{CardCreateRequest}
#' @field saveCard Indicates if the card should be saved for future use character
#' @field customer  \link{CardTokenizationCreateRequestCustomer}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CardTokenizationCreateRequest <- R6::R6Class(
  "CardTokenizationCreateRequest",
  public = list(
    `card` = NULL,
    `saveCard` = NULL,
    `customer` = NULL,

    #' @description
    #' Initialize a new CardTokenizationCreateRequest class.
    #'
    #' @param card card
    #' @param saveCard Indicates if the card should be saved for future use
    #' @param customer customer
    #' @param ... Other optional arguments.
    initialize = function(`card`, `saveCard`, `customer`, ...) {
      if (!missing(`card`)) {
        stopifnot(R6::is.R6(`card`))
        self$`card` <- `card`
      }
      if (!missing(`saveCard`)) {
        if (!(is.logical(`saveCard`) && length(`saveCard`) == 1)) {
          stop(paste("Error! Invalid data for `saveCard`. Must be a boolean:", `saveCard`))
        }
        self$`saveCard` <- `saveCard`
      }
      if (!missing(`customer`)) {
        stopifnot(R6::is.R6(`customer`))
        self$`customer` <- `customer`
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
    #' @return CardTokenizationCreateRequest as a base R list.
    #' @examples
    #' # convert array of CardTokenizationCreateRequest (x) to a data frame
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
    #' Convert CardTokenizationCreateRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CardTokenizationCreateRequestObject <- list()
      if (!is.null(self$`card`)) {
        CardTokenizationCreateRequestObject[["card"]] <-
          self$extractSimpleType(self$`card`)
      }
      if (!is.null(self$`saveCard`)) {
        CardTokenizationCreateRequestObject[["saveCard"]] <-
          self$`saveCard`
      }
      if (!is.null(self$`customer`)) {
        CardTokenizationCreateRequestObject[["customer"]] <-
          self$extractSimpleType(self$`customer`)
      }
      return(CardTokenizationCreateRequestObject)
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
    #' Deserialize JSON string into an instance of CardTokenizationCreateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CardTokenizationCreateRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`card`)) {
        `card_object` <- CardCreateRequest$new()
        `card_object`$fromJSON(jsonlite::toJSON(this_object$`card`, auto_unbox = TRUE, digits = NA))
        self$`card` <- `card_object`
      }
      if (!is.null(this_object$`saveCard`)) {
        self$`saveCard` <- this_object$`saveCard`
      }
      if (!is.null(this_object$`customer`)) {
        `customer_object` <- CardTokenizationCreateRequestCustomer$new()
        `customer_object`$fromJSON(jsonlite::toJSON(this_object$`customer`, auto_unbox = TRUE, digits = NA))
        self$`customer` <- `customer_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CardTokenizationCreateRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CardTokenizationCreateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of CardTokenizationCreateRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`card` <- CardCreateRequest$new()$fromJSON(jsonlite::toJSON(this_object$`card`, auto_unbox = TRUE, digits = NA))
      self$`saveCard` <- this_object$`saveCard`
      self$`customer` <- CardTokenizationCreateRequestCustomer$new()$fromJSON(jsonlite::toJSON(this_object$`customer`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to CardTokenizationCreateRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `card`
      if (!is.null(input_json$`card`)) {
        stopifnot(R6::is.R6(input_json$`card`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CardTokenizationCreateRequest: the required field `card` is missing."))
      }
      # check the required field `saveCard`
      if (!is.null(input_json$`saveCard`)) {
        if (!(is.logical(input_json$`saveCard`) && length(input_json$`saveCard`) == 1)) {
          stop(paste("Error! Invalid data for `saveCard`. Must be a boolean:", input_json$`saveCard`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CardTokenizationCreateRequest: the required field `saveCard` is missing."))
      }
      # check the required field `customer`
      if (!is.null(input_json$`customer`)) {
        stopifnot(R6::is.R6(input_json$`customer`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CardTokenizationCreateRequest: the required field `customer` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CardTokenizationCreateRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `card` is null
      if (is.null(self$`card`)) {
        return(FALSE)
      }

      # check if the required `saveCard` is null
      if (is.null(self$`saveCard`)) {
        return(FALSE)
      }

      # check if the required `customer` is null
      if (is.null(self$`customer`)) {
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
      # check if the required `card` is null
      if (is.null(self$`card`)) {
        invalid_fields["card"] <- "Non-nullable required field `card` cannot be null."
      }

      # check if the required `saveCard` is null
      if (is.null(self$`saveCard`)) {
        invalid_fields["saveCard"] <- "Non-nullable required field `saveCard` cannot be null."
      }

      # check if the required `customer` is null
      if (is.null(self$`customer`)) {
        invalid_fields["customer"] <- "Non-nullable required field `customer` cannot be null."
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
# CardTokenizationCreateRequest$unlock()
#
## Below is an example to define the print function
# CardTokenizationCreateRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CardTokenizationCreateRequest$lock()

