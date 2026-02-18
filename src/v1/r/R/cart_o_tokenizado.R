#' Create a new CartOTokenizado
#'
#' @description
#' CartOTokenizado Class
#'
#' @docType class
#' @title CartOTokenizado
#' @description CartOTokenizado Class
#' @format An \code{R6Class} generator object
#' @field firstSixCardNumber Primeiros 6 dígitos do cartão de crédito character [optional]
#' @field token Token do cartão de crédito gerado anteriormente character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CartOTokenizado <- R6::R6Class(
  "CartOTokenizado",
  public = list(
    `firstSixCardNumber` = NULL,
    `token` = NULL,

    #' @description
    #' Initialize a new CartOTokenizado class.
    #'
    #' @param token Token do cartão de crédito gerado anteriormente
    #' @param firstSixCardNumber Primeiros 6 dígitos do cartão de crédito
    #' @param ... Other optional arguments.
    initialize = function(`token`, `firstSixCardNumber` = NULL, ...) {
      if (!missing(`token`)) {
        if (!(is.character(`token`) && length(`token`) == 1)) {
          stop(paste("Error! Invalid data for `token`. Must be a string:", `token`))
        }
        self$`token` <- `token`
      }
      if (!is.null(`firstSixCardNumber`)) {
        if (!(is.character(`firstSixCardNumber`) && length(`firstSixCardNumber`) == 1)) {
          stop(paste("Error! Invalid data for `firstSixCardNumber`. Must be a string:", `firstSixCardNumber`))
        }
        self$`firstSixCardNumber` <- `firstSixCardNumber`
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
    #' @return CartOTokenizado as a base R list.
    #' @examples
    #' # convert array of CartOTokenizado (x) to a data frame
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
    #' Convert CartOTokenizado to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CartOTokenizadoObject <- list()
      if (!is.null(self$`firstSixCardNumber`)) {
        CartOTokenizadoObject[["firstSixCardNumber"]] <-
          self$`firstSixCardNumber`
      }
      if (!is.null(self$`token`)) {
        CartOTokenizadoObject[["token"]] <-
          self$`token`
      }
      return(CartOTokenizadoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of CartOTokenizado
    #'
    #' @param input_json the JSON input
    #' @return the instance of CartOTokenizado
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`firstSixCardNumber`)) {
        self$`firstSixCardNumber` <- this_object$`firstSixCardNumber`
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
    #' @return CartOTokenizado in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CartOTokenizado
    #'
    #' @param input_json the JSON input
    #' @return the instance of CartOTokenizado
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`firstSixCardNumber` <- this_object$`firstSixCardNumber`
      self$`token` <- this_object$`token`
      self
    },

    #' @description
    #' Validate JSON input with respect to CartOTokenizado and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `token`
      if (!is.null(input_json$`token`)) {
        if (!(is.character(input_json$`token`) && length(input_json$`token`) == 1)) {
          stop(paste("Error! Invalid data for `token`. Must be a string:", input_json$`token`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CartOTokenizado: the required field `token` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CartOTokenizado
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
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
# CartOTokenizado$unlock()
#
## Below is an example to define the print function
# CartOTokenizado$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CartOTokenizado$lock()

