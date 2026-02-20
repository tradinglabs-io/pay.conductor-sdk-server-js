#' Create a new OrderCreditCardPaymentRequest
#'
#' @description
#' OrderCreditCardPaymentRequest Class
#'
#' @docType class
#' @title OrderCreditCardPaymentRequest
#' @description OrderCreditCardPaymentRequest Class
#' @format An \code{R6Class} generator object
#' @field paymentMethod  character
#' @field card  \link{OrderCreditCardPaymentRequestCard}
#' @field installments Number of installments numeric
#' @field softDescriptor Text that will appear on the card statement (soft descriptor) character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderCreditCardPaymentRequest <- R6::R6Class(
  "OrderCreditCardPaymentRequest",
  public = list(
    `paymentMethod` = NULL,
    `card` = NULL,
    `installments` = NULL,
    `softDescriptor` = NULL,

    #' @description
    #' Initialize a new OrderCreditCardPaymentRequest class.
    #'
    #' @param paymentMethod paymentMethod
    #' @param card card
    #' @param installments Number of installments
    #' @param softDescriptor Text that will appear on the card statement (soft descriptor)
    #' @param ... Other optional arguments.
    initialize = function(`paymentMethod`, `card`, `installments`, `softDescriptor` = NULL, ...) {
      if (!missing(`paymentMethod`)) {
        if (!(is.character(`paymentMethod`) && length(`paymentMethod`) == 1)) {
          stop(paste("Error! Invalid data for `paymentMethod`. Must be a string:", `paymentMethod`))
        }
        self$`paymentMethod` <- `paymentMethod`
      }
      if (!missing(`card`)) {
        stopifnot(R6::is.R6(`card`))
        self$`card` <- `card`
      }
      if (!missing(`installments`)) {
        self$`installments` <- `installments`
      }
      if (!is.null(`softDescriptor`)) {
        if (!(is.character(`softDescriptor`) && length(`softDescriptor`) == 1)) {
          stop(paste("Error! Invalid data for `softDescriptor`. Must be a string:", `softDescriptor`))
        }
        self$`softDescriptor` <- `softDescriptor`
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
    #' @return OrderCreditCardPaymentRequest as a base R list.
    #' @examples
    #' # convert array of OrderCreditCardPaymentRequest (x) to a data frame
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
    #' Convert OrderCreditCardPaymentRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderCreditCardPaymentRequestObject <- list()
      if (!is.null(self$`paymentMethod`)) {
        OrderCreditCardPaymentRequestObject[["paymentMethod"]] <-
          self$`paymentMethod`
      }
      if (!is.null(self$`card`)) {
        OrderCreditCardPaymentRequestObject[["card"]] <-
          self$extractSimpleType(self$`card`)
      }
      if (!is.null(self$`installments`)) {
        OrderCreditCardPaymentRequestObject[["installments"]] <-
          self$`installments`
      }
      if (!is.null(self$`softDescriptor`)) {
        OrderCreditCardPaymentRequestObject[["softDescriptor"]] <-
          self$`softDescriptor`
      }
      return(OrderCreditCardPaymentRequestObject)
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
    #' Deserialize JSON string into an instance of OrderCreditCardPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderCreditCardPaymentRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`paymentMethod`)) {
        self$`paymentMethod` <- this_object$`paymentMethod`
      }
      if (!is.null(this_object$`card`)) {
        `card_object` <- OrderCreditCardPaymentRequestCard$new()
        `card_object`$fromJSON(jsonlite::toJSON(this_object$`card`, auto_unbox = TRUE, digits = NA))
        self$`card` <- `card_object`
      }
      if (!is.null(this_object$`installments`)) {
        self$`installments` <- this_object$`installments`
      }
      if (!is.null(this_object$`softDescriptor`)) {
        self$`softDescriptor` <- this_object$`softDescriptor`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderCreditCardPaymentRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderCreditCardPaymentRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderCreditCardPaymentRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`paymentMethod` <- this_object$`paymentMethod`
      self$`card` <- OrderCreditCardPaymentRequestCard$new()$fromJSON(jsonlite::toJSON(this_object$`card`, auto_unbox = TRUE, digits = NA))
      self$`installments` <- this_object$`installments`
      self$`softDescriptor` <- this_object$`softDescriptor`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderCreditCardPaymentRequest and throw an exception if invalid
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
        stop(paste("The JSON input `", input, "` is invalid for OrderCreditCardPaymentRequest: the required field `paymentMethod` is missing."))
      }
      # check the required field `card`
      if (!is.null(input_json$`card`)) {
        stopifnot(R6::is.R6(input_json$`card`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderCreditCardPaymentRequest: the required field `card` is missing."))
      }
      # check the required field `installments`
      if (!is.null(input_json$`installments`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderCreditCardPaymentRequest: the required field `installments` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderCreditCardPaymentRequest
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

      # check if the required `card` is null
      if (is.null(self$`card`)) {
        return(FALSE)
      }

      # check if the required `installments` is null
      if (is.null(self$`installments`)) {
        return(FALSE)
      }

      if (self$`installments` > 12) {
        return(FALSE)
      }
      if (self$`installments` < 1) {
        return(FALSE)
      }

      if (nchar(self$`softDescriptor`) > 22) {
        return(FALSE)
      }
      if (nchar(self$`softDescriptor`) < 1) {
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

      # check if the required `card` is null
      if (is.null(self$`card`)) {
        invalid_fields["card"] <- "Non-nullable required field `card` cannot be null."
      }

      # check if the required `installments` is null
      if (is.null(self$`installments`)) {
        invalid_fields["installments"] <- "Non-nullable required field `installments` cannot be null."
      }

      if (self$`installments` > 12) {
        invalid_fields["installments"] <- "Invalid value for `installments`, must be smaller than or equal to 12."
      }
      if (self$`installments` < 1) {
        invalid_fields["installments"] <- "Invalid value for `installments`, must be bigger than or equal to 1."
      }

      if (nchar(self$`softDescriptor`) > 22) {
        invalid_fields["softDescriptor"] <- "Invalid length for `softDescriptor`, must be smaller than or equal to 22."
      }
      if (nchar(self$`softDescriptor`) < 1) {
        invalid_fields["softDescriptor"] <- "Invalid length for `softDescriptor`, must be bigger than or equal to 1."
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
# OrderCreditCardPaymentRequest$unlock()
#
## Below is an example to define the print function
# OrderCreditCardPaymentRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderCreditCardPaymentRequest$lock()

