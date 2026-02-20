#' Create a new CardTokenizationCreateResponse
#'
#' @description
#' Response containing customer ID and card token
#'
#' @docType class
#' @title CardTokenizationCreateResponse
#' @description CardTokenizationCreateResponse Class
#' @format An \code{R6Class} generator object
#' @field customerId ID of the customer associated with the created card character
#' @field token Token of the created card for future transactions character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CardTokenizationCreateResponse <- R6::R6Class(
  "CardTokenizationCreateResponse",
  public = list(
    `customerId` = NULL,
    `token` = NULL,

    #' @description
    #' Initialize a new CardTokenizationCreateResponse class.
    #'
    #' @param customerId ID of the customer associated with the created card
    #' @param token Token of the created card for future transactions
    #' @param ... Other optional arguments.
    initialize = function(`customerId`, `token`, ...) {
      if (!missing(`customerId`)) {
        if (!(is.character(`customerId`) && length(`customerId`) == 1)) {
          stop(paste("Error! Invalid data for `customerId`. Must be a string:", `customerId`))
        }
        self$`customerId` <- `customerId`
      }
      if (!missing(`token`)) {
        if (!(is.character(`token`) && length(`token`) == 1)) {
          stop(paste("Error! Invalid data for `token`. Must be a string:", `token`))
        }
        self$`token` <- `token`
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
    #' @return CardTokenizationCreateResponse as a base R list.
    #' @examples
    #' # convert array of CardTokenizationCreateResponse (x) to a data frame
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
    #' Convert CardTokenizationCreateResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CardTokenizationCreateResponseObject <- list()
      if (!is.null(self$`customerId`)) {
        CardTokenizationCreateResponseObject[["customerId"]] <-
          self$`customerId`
      }
      if (!is.null(self$`token`)) {
        CardTokenizationCreateResponseObject[["token"]] <-
          self$`token`
      }
      return(CardTokenizationCreateResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of CardTokenizationCreateResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CardTokenizationCreateResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`customerId`)) {
        self$`customerId` <- this_object$`customerId`
      }
      if (!is.null(this_object$`token`)) {
        self$`token` <- this_object$`token`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CardTokenizationCreateResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CardTokenizationCreateResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CardTokenizationCreateResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`customerId` <- this_object$`customerId`
      self$`token` <- this_object$`token`
      self
    },

    #' @description
    #' Validate JSON input with respect to CardTokenizationCreateResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `customerId`
      if (!is.null(input_json$`customerId`)) {
        if (!(is.character(input_json$`customerId`) && length(input_json$`customerId`) == 1)) {
          stop(paste("Error! Invalid data for `customerId`. Must be a string:", input_json$`customerId`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CardTokenizationCreateResponse: the required field `customerId` is missing."))
      }
      # check the required field `token`
      if (!is.null(input_json$`token`)) {
        if (!(is.character(input_json$`token`) && length(input_json$`token`) == 1)) {
          stop(paste("Error! Invalid data for `token`. Must be a string:", input_json$`token`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CardTokenizationCreateResponse: the required field `token` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CardTokenizationCreateResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `customerId` is null
      if (is.null(self$`customerId`)) {
        return(FALSE)
      }

      # check if the required `token` is null
      if (is.null(self$`token`)) {
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
      # check if the required `customerId` is null
      if (is.null(self$`customerId`)) {
        invalid_fields["customerId"] <- "Non-nullable required field `customerId` cannot be null."
      }

      # check if the required `token` is null
      if (is.null(self$`token`)) {
        invalid_fields["token"] <- "Non-nullable required field `token` cannot be null."
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
# CardTokenizationCreateResponse$unlock()
#
## Below is an example to define the print function
# CardTokenizationCreateResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CardTokenizationCreateResponse$lock()

