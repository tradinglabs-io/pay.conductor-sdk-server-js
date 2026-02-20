#' @docType class
#' @title OrderPaymentRequest
#'
#' @description OrderPaymentRequest Class
#'
#' @format An \code{R6Class} generator object
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderPaymentRequest <- R6::R6Class(
  "OrderPaymentRequest",
  public = list(
    #' @field actual_instance the object stored in this instance.
    actual_instance = NULL,
    #' @field actual_type the type of the object stored in this instance.
    actual_type = NULL,
    #' @field one_of  a list of types defined in the oneOf schema.
    one_of = list("OrderBankSlipPaymentRequest", "OrderCreditCardPaymentRequest", "OrderDraftPaymentRequest", "OrderNuPayPaymentRequest", "OrderPIXPaymentRequest", "OrderPicPayPaymentRequest"),

    #' @description
    #' Initialize a new OrderPaymentRequest.
    #'
    #' @param instance an instance of the object defined in the oneOf schemas: "OrderBankSlipPaymentRequest", "OrderCreditCardPaymentRequest", "OrderDraftPaymentRequest", "OrderNuPayPaymentRequest", "OrderPIXPaymentRequest", "OrderPicPayPaymentRequest"
    initialize = function(instance = NULL) {
      if (is.null(instance)) {
        # do nothing
      } else if (get(class(instance)[[1]], pos = -1)$classname ==  "OrderBankSlipPaymentRequest") {
        self$actual_instance <- instance
        self$actual_type <- "OrderBankSlipPaymentRequest"
      } else if (get(class(instance)[[1]], pos = -1)$classname ==  "OrderCreditCardPaymentRequest") {
        self$actual_instance <- instance
        self$actual_type <- "OrderCreditCardPaymentRequest"
      } else if (get(class(instance)[[1]], pos = -1)$classname ==  "OrderDraftPaymentRequest") {
        self$actual_instance <- instance
        self$actual_type <- "OrderDraftPaymentRequest"
      } else if (get(class(instance)[[1]], pos = -1)$classname ==  "OrderNuPayPaymentRequest") {
        self$actual_instance <- instance
        self$actual_type <- "OrderNuPayPaymentRequest"
      } else if (get(class(instance)[[1]], pos = -1)$classname ==  "OrderPIXPaymentRequest") {
        self$actual_instance <- instance
        self$actual_type <- "OrderPIXPaymentRequest"
      } else if (get(class(instance)[[1]], pos = -1)$classname ==  "OrderPicPayPaymentRequest") {
        self$actual_instance <- instance
        self$actual_type <- "OrderPicPayPaymentRequest"
      } else {
        stop(paste("Failed to initialize OrderPaymentRequest with oneOf schemas OrderBankSlipPaymentRequest, OrderCreditCardPaymentRequest, OrderDraftPaymentRequest, OrderNuPayPaymentRequest, OrderPIXPaymentRequest, OrderPicPayPaymentRequest. Provided class name: ",
                   get(class(instance)[[1]], pos = -1)$classname))
      }
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPaymentRequest.
    #' An alias to the method `fromJSON` .
    #'
    #' @param input The input JSON.
    #'
    #' @return An instance of OrderPaymentRequest.
    fromJSONString = function(input) {
      self$fromJSON(input)
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPaymentRequest.
    #'
    #' @param input The input JSON.
    #'
    #' @return An instance of OrderPaymentRequest.
    fromJSON = function(input) {
      matched <- 0 # match counter
      matched_schemas <- list() #names of matched schemas
      error_messages <- list()
      instance <- NULL

      `OrderPIXPaymentRequest_result` <- tryCatch({
          `OrderPIXPaymentRequest`$public_methods$validateJSON(input)
          `OrderPIXPaymentRequest_instance` <- `OrderPIXPaymentRequest`$new()
          instance <- `OrderPIXPaymentRequest_instance`$fromJSON(input)
          instance_type <- "OrderPIXPaymentRequest"
          matched_schemas <- append(matched_schemas, "OrderPIXPaymentRequest")
          matched <- matched + 1
        },
        error = function(err) err
      )

      if (!is.null(`OrderPIXPaymentRequest_result`["error"])) {
        error_messages <- append(error_messages, `OrderPIXPaymentRequest_result`["message"])
      }

      `OrderCreditCardPaymentRequest_result` <- tryCatch({
          `OrderCreditCardPaymentRequest`$public_methods$validateJSON(input)
          `OrderCreditCardPaymentRequest_instance` <- `OrderCreditCardPaymentRequest`$new()
          instance <- `OrderCreditCardPaymentRequest_instance`$fromJSON(input)
          instance_type <- "OrderCreditCardPaymentRequest"
          matched_schemas <- append(matched_schemas, "OrderCreditCardPaymentRequest")
          matched <- matched + 1
        },
        error = function(err) err
      )

      if (!is.null(`OrderCreditCardPaymentRequest_result`["error"])) {
        error_messages <- append(error_messages, `OrderCreditCardPaymentRequest_result`["message"])
      }

      `OrderBankSlipPaymentRequest_result` <- tryCatch({
          `OrderBankSlipPaymentRequest`$public_methods$validateJSON(input)
          `OrderBankSlipPaymentRequest_instance` <- `OrderBankSlipPaymentRequest`$new()
          instance <- `OrderBankSlipPaymentRequest_instance`$fromJSON(input)
          instance_type <- "OrderBankSlipPaymentRequest"
          matched_schemas <- append(matched_schemas, "OrderBankSlipPaymentRequest")
          matched <- matched + 1
        },
        error = function(err) err
      )

      if (!is.null(`OrderBankSlipPaymentRequest_result`["error"])) {
        error_messages <- append(error_messages, `OrderBankSlipPaymentRequest_result`["message"])
      }

      `OrderNuPayPaymentRequest_result` <- tryCatch({
          `OrderNuPayPaymentRequest`$public_methods$validateJSON(input)
          `OrderNuPayPaymentRequest_instance` <- `OrderNuPayPaymentRequest`$new()
          instance <- `OrderNuPayPaymentRequest_instance`$fromJSON(input)
          instance_type <- "OrderNuPayPaymentRequest"
          matched_schemas <- append(matched_schemas, "OrderNuPayPaymentRequest")
          matched <- matched + 1
        },
        error = function(err) err
      )

      if (!is.null(`OrderNuPayPaymentRequest_result`["error"])) {
        error_messages <- append(error_messages, `OrderNuPayPaymentRequest_result`["message"])
      }

      `OrderPicPayPaymentRequest_result` <- tryCatch({
          `OrderPicPayPaymentRequest`$public_methods$validateJSON(input)
          `OrderPicPayPaymentRequest_instance` <- `OrderPicPayPaymentRequest`$new()
          instance <- `OrderPicPayPaymentRequest_instance`$fromJSON(input)
          instance_type <- "OrderPicPayPaymentRequest"
          matched_schemas <- append(matched_schemas, "OrderPicPayPaymentRequest")
          matched <- matched + 1
        },
        error = function(err) err
      )

      if (!is.null(`OrderPicPayPaymentRequest_result`["error"])) {
        error_messages <- append(error_messages, `OrderPicPayPaymentRequest_result`["message"])
      }

      `OrderDraftPaymentRequest_result` <- tryCatch({
          `OrderDraftPaymentRequest`$public_methods$validateJSON(input)
          `OrderDraftPaymentRequest_instance` <- `OrderDraftPaymentRequest`$new()
          instance <- `OrderDraftPaymentRequest_instance`$fromJSON(input)
          instance_type <- "OrderDraftPaymentRequest"
          matched_schemas <- append(matched_schemas, "OrderDraftPaymentRequest")
          matched <- matched + 1
        },
        error = function(err) err
      )

      if (!is.null(`OrderDraftPaymentRequest_result`["error"])) {
        error_messages <- append(error_messages, `OrderDraftPaymentRequest_result`["message"])
      }

      if (matched == 1) {
        # successfully match exactly 1 schema specified in oneOf
        self$actual_instance <- instance
        self$actual_type <- instance_type
      } else if (matched > 1) {
        # more than 1 match
        stop(paste("Multiple matches found when deserializing the input into OrderPaymentRequest with oneOf schemas OrderBankSlipPaymentRequest, OrderCreditCardPaymentRequest, OrderDraftPaymentRequest, OrderNuPayPaymentRequest, OrderPIXPaymentRequest, OrderPicPayPaymentRequest. Matched schemas: ",
                   paste(matched_schemas, collapse = ", ")))
      } else {
        # no match
        stop(paste("No match found when deserializing the input into OrderPaymentRequest with oneOf schemas OrderBankSlipPaymentRequest, OrderCreditCardPaymentRequest, OrderDraftPaymentRequest, OrderNuPayPaymentRequest, OrderPIXPaymentRequest, OrderPicPayPaymentRequest. Details: >>",
                   paste(error_messages, collapse = " >> ")))
      }

      self
    },

    #' @description
    #' Serialize OrderPaymentRequest to JSON string.
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return JSON string representation of the OrderPaymentRequest.
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      if (!is.null(self$actual_instance)) {
        json <- jsonlite::toJSON(simple, auto_unbox = TRUE, ...)
        return(as.character(jsonlite::minify(json)))
      } else {
        return(NULL)
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert OrderPaymentRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      if (!is.null(self$actual_instance)) {
        return(self$actual_instance$toSimpleType())
      } else {
        return(NULL)
      }
    },

    #' @description
    #' Validate the input JSON with respect to OrderPaymentRequest and
    #' throw exception if invalid.
    #'
    #' @param input The input JSON.
    validateJSON = function(input) {
      # backup current values
      actual_instance_bak <- self$actual_instance
      actual_type_bak <- self$actual_type

      # if it's not valid, an error will be thrown
      self$fromJSON(input)

      # no error thrown, restore old values
      self$actual_instance <- actual_instance_bak
      self$actual_type <- actual_type_bak
    },

    #' @description
    #' Returns the string representation of the instance.
    #'
    #' @return The string representation of the instance.
    toString = function() {
      jsoncontent <- c(
        sprintf('"actual_instance": %s', if (is.null(self$actual_instance)) NULL else self$actual_instance$toJSONString()),
        sprintf('"actual_type": "%s"', self$actual_type),
        sprintf('"one_of": "%s"', paste(unlist(self$one_of), collapse = ", "))
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      as.character(jsonlite::prettify(paste("{", jsoncontent, "}", sep = "")))
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
#OrderPaymentRequest$unlock()
#
## Below is an example to define the print function
#OrderPaymentRequest$set("public", "print", function(...) {
#  print(jsonlite::prettify(self$toJSONString()))
#  invisible(self)
#})
## Uncomment below to lock the class to prevent modifications to the method or field
#OrderPaymentRequest$lock()

