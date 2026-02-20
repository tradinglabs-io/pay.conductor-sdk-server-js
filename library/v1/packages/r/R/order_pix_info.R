#' Create a new OrderPIXInfo
#'
#' @description
#' PIX payment data and QR code information
#'
#' @docType class
#' @title OrderPIXInfo
#' @description OrderPIXInfo Class
#' @format An \code{R6Class} generator object
#' @field copyAndPasteCode PIX copy and paste code character
#' @field qrCodeUrl PIX QR Code image URL character
#' @field endToEndId PIX E2E ID character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderPIXInfo <- R6::R6Class(
  "OrderPIXInfo",
  public = list(
    `copyAndPasteCode` = NULL,
    `qrCodeUrl` = NULL,
    `endToEndId` = NULL,

    #' @description
    #' Initialize a new OrderPIXInfo class.
    #'
    #' @param copyAndPasteCode PIX copy and paste code
    #' @param qrCodeUrl PIX QR Code image URL
    #' @param endToEndId PIX E2E ID
    #' @param ... Other optional arguments.
    initialize = function(`copyAndPasteCode`, `qrCodeUrl`, `endToEndId`, ...) {
      if (!missing(`copyAndPasteCode`)) {
        if (!(is.character(`copyAndPasteCode`) && length(`copyAndPasteCode`) == 1)) {
          stop(paste("Error! Invalid data for `copyAndPasteCode`. Must be a string:", `copyAndPasteCode`))
        }
        self$`copyAndPasteCode` <- `copyAndPasteCode`
      }
      if (!missing(`qrCodeUrl`)) {
        if (!(is.character(`qrCodeUrl`) && length(`qrCodeUrl`) == 1)) {
          stop(paste("Error! Invalid data for `qrCodeUrl`. Must be a string:", `qrCodeUrl`))
        }
        self$`qrCodeUrl` <- `qrCodeUrl`
      }
      if (!missing(`endToEndId`)) {
        if (!(is.character(`endToEndId`) && length(`endToEndId`) == 1)) {
          stop(paste("Error! Invalid data for `endToEndId`. Must be a string:", `endToEndId`))
        }
        self$`endToEndId` <- `endToEndId`
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
    #' @return OrderPIXInfo as a base R list.
    #' @examples
    #' # convert array of OrderPIXInfo (x) to a data frame
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
    #' Convert OrderPIXInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      OrderPIXInfoObject <- list()
      if (!is.null(self$`copyAndPasteCode`)) {
        OrderPIXInfoObject[["copyAndPasteCode"]] <-
          self$`copyAndPasteCode`
      }
      if (!is.null(self$`qrCodeUrl`)) {
        OrderPIXInfoObject[["qrCodeUrl"]] <-
          self$`qrCodeUrl`
      }
      if (!is.null(self$`endToEndId`)) {
        OrderPIXInfoObject[["endToEndId"]] <-
          self$`endToEndId`
      }
      return(OrderPIXInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPIXInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderPIXInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`copyAndPasteCode`)) {
        self$`copyAndPasteCode` <- this_object$`copyAndPasteCode`
      }
      if (!is.null(this_object$`qrCodeUrl`)) {
        self$`qrCodeUrl` <- this_object$`qrCodeUrl`
      }
      if (!is.null(this_object$`endToEndId`)) {
        self$`endToEndId` <- this_object$`endToEndId`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return OrderPIXInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of OrderPIXInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderPIXInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`copyAndPasteCode` <- this_object$`copyAndPasteCode`
      self$`qrCodeUrl` <- this_object$`qrCodeUrl`
      self$`endToEndId` <- this_object$`endToEndId`
      self
    },

    #' @description
    #' Validate JSON input with respect to OrderPIXInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `copyAndPasteCode`
      if (!is.null(input_json$`copyAndPasteCode`)) {
        if (!(is.character(input_json$`copyAndPasteCode`) && length(input_json$`copyAndPasteCode`) == 1)) {
          stop(paste("Error! Invalid data for `copyAndPasteCode`. Must be a string:", input_json$`copyAndPasteCode`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderPIXInfo: the required field `copyAndPasteCode` is missing."))
      }
      # check the required field `qrCodeUrl`
      if (!is.null(input_json$`qrCodeUrl`)) {
        if (!(is.character(input_json$`qrCodeUrl`) && length(input_json$`qrCodeUrl`) == 1)) {
          stop(paste("Error! Invalid data for `qrCodeUrl`. Must be a string:", input_json$`qrCodeUrl`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderPIXInfo: the required field `qrCodeUrl` is missing."))
      }
      # check the required field `endToEndId`
      if (!is.null(input_json$`endToEndId`)) {
        if (!(is.character(input_json$`endToEndId`) && length(input_json$`endToEndId`) == 1)) {
          stop(paste("Error! Invalid data for `endToEndId`. Must be a string:", input_json$`endToEndId`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderPIXInfo: the required field `endToEndId` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderPIXInfo
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `copyAndPasteCode` is null
      if (is.null(self$`copyAndPasteCode`)) {
        return(FALSE)
      }

      # check if the required `qrCodeUrl` is null
      if (is.null(self$`qrCodeUrl`)) {
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
      # check if the required `copyAndPasteCode` is null
      if (is.null(self$`copyAndPasteCode`)) {
        invalid_fields["copyAndPasteCode"] <- "Non-nullable required field `copyAndPasteCode` cannot be null."
      }

      # check if the required `qrCodeUrl` is null
      if (is.null(self$`qrCodeUrl`)) {
        invalid_fields["qrCodeUrl"] <- "Non-nullable required field `qrCodeUrl` cannot be null."
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
# OrderPIXInfo$unlock()
#
## Below is an example to define the print function
# OrderPIXInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderPIXInfo$lock()

