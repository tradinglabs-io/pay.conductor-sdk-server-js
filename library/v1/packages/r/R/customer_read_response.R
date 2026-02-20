#' Create a new CustomerReadResponse
#'
#' @description
#' Customer response with complete information
#'
#' @docType class
#' @title CustomerReadResponse
#' @description CustomerReadResponse Class
#' @format An \code{R6Class} generator object
#' @field id Unique customer identifier character
#' @field name Customer full name character
#' @field email Customer email character
#' @field documentType  \link{DocumentType}
#' @field documentNumber Customer CPF or CNPJ without formatting character
#' @field phoneNumber Customer phone number in +55 DD 9XXXXXXXX format character
#' @field address  \link{CustomerAddressResponse}
#' @field createdAt Date and time when the customer was created (ISO 8601 format) character
#' @field updatedAt Date and time when the customer was last updated (ISO 8601 format) character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CustomerReadResponse <- R6::R6Class(
  "CustomerReadResponse",
  public = list(
    `id` = NULL,
    `name` = NULL,
    `email` = NULL,
    `documentType` = NULL,
    `documentNumber` = NULL,
    `phoneNumber` = NULL,
    `address` = NULL,
    `createdAt` = NULL,
    `updatedAt` = NULL,

    #' @description
    #' Initialize a new CustomerReadResponse class.
    #'
    #' @param id Unique customer identifier
    #' @param name Customer full name
    #' @param email Customer email
    #' @param documentType documentType
    #' @param documentNumber Customer CPF or CNPJ without formatting
    #' @param phoneNumber Customer phone number in +55 DD 9XXXXXXXX format
    #' @param address address
    #' @param createdAt Date and time when the customer was created (ISO 8601 format)
    #' @param updatedAt Date and time when the customer was last updated (ISO 8601 format)
    #' @param ... Other optional arguments.
    initialize = function(`id`, `name`, `email`, `documentType`, `documentNumber`, `phoneNumber`, `address`, `createdAt`, `updatedAt`, ...) {
      if (!missing(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!missing(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!missing(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
      }
      if (!missing(`documentType`)) {
        if (!(`documentType` %in% c())) {
          stop(paste("Error! \"", `documentType`, "\" cannot be assigned to `documentType`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`documentType`))
        self$`documentType` <- `documentType`
      }
      if (!missing(`documentNumber`)) {
        if (!(is.character(`documentNumber`) && length(`documentNumber`) == 1)) {
          stop(paste("Error! Invalid data for `documentNumber`. Must be a string:", `documentNumber`))
        }
        self$`documentNumber` <- `documentNumber`
      }
      if (!missing(`phoneNumber`)) {
        if (!(is.character(`phoneNumber`) && length(`phoneNumber`) == 1)) {
          stop(paste("Error! Invalid data for `phoneNumber`. Must be a string:", `phoneNumber`))
        }
        self$`phoneNumber` <- `phoneNumber`
      }
      if (!missing(`address`)) {
        stopifnot(R6::is.R6(`address`))
        self$`address` <- `address`
      }
      if (!missing(`createdAt`)) {
        if (!(is.character(`createdAt`) && length(`createdAt`) == 1)) {
          stop(paste("Error! Invalid data for `createdAt`. Must be a string:", `createdAt`))
        }
        self$`createdAt` <- `createdAt`
      }
      if (!missing(`updatedAt`)) {
        if (!(is.character(`updatedAt`) && length(`updatedAt`) == 1)) {
          stop(paste("Error! Invalid data for `updatedAt`. Must be a string:", `updatedAt`))
        }
        self$`updatedAt` <- `updatedAt`
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
    #' @return CustomerReadResponse as a base R list.
    #' @examples
    #' # convert array of CustomerReadResponse (x) to a data frame
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
    #' Convert CustomerReadResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CustomerReadResponseObject <- list()
      if (!is.null(self$`id`)) {
        CustomerReadResponseObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`name`)) {
        CustomerReadResponseObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`email`)) {
        CustomerReadResponseObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`documentType`)) {
        CustomerReadResponseObject[["documentType"]] <-
          self$extractSimpleType(self$`documentType`)
      }
      if (!is.null(self$`documentNumber`)) {
        CustomerReadResponseObject[["documentNumber"]] <-
          self$`documentNumber`
      }
      if (!is.null(self$`phoneNumber`)) {
        CustomerReadResponseObject[["phoneNumber"]] <-
          self$`phoneNumber`
      }
      if (!is.null(self$`address`)) {
        CustomerReadResponseObject[["address"]] <-
          self$extractSimpleType(self$`address`)
      }
      if (!is.null(self$`createdAt`)) {
        CustomerReadResponseObject[["createdAt"]] <-
          self$`createdAt`
      }
      if (!is.null(self$`updatedAt`)) {
        CustomerReadResponseObject[["updatedAt"]] <-
          self$`updatedAt`
      }
      return(CustomerReadResponseObject)
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
    #' Deserialize JSON string into an instance of CustomerReadResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerReadResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`documentType`)) {
        `documenttype_object` <- DocumentType$new()
        `documenttype_object`$fromJSON(jsonlite::toJSON(this_object$`documentType`, auto_unbox = TRUE, digits = NA))
        self$`documentType` <- `documenttype_object`
      }
      if (!is.null(this_object$`documentNumber`)) {
        self$`documentNumber` <- this_object$`documentNumber`
      }
      if (!is.null(this_object$`phoneNumber`)) {
        self$`phoneNumber` <- this_object$`phoneNumber`
      }
      if (!is.null(this_object$`address`)) {
        `address_object` <- CustomerAddressResponse$new()
        `address_object`$fromJSON(jsonlite::toJSON(this_object$`address`, auto_unbox = TRUE, digits = NA))
        self$`address` <- `address_object`
      }
      if (!is.null(this_object$`createdAt`)) {
        self$`createdAt` <- this_object$`createdAt`
      }
      if (!is.null(this_object$`updatedAt`)) {
        self$`updatedAt` <- this_object$`updatedAt`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CustomerReadResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CustomerReadResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CustomerReadResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`name` <- this_object$`name`
      self$`email` <- this_object$`email`
      self$`documentType` <- DocumentType$new()$fromJSON(jsonlite::toJSON(this_object$`documentType`, auto_unbox = TRUE, digits = NA))
      self$`documentNumber` <- this_object$`documentNumber`
      self$`phoneNumber` <- this_object$`phoneNumber`
      self$`address` <- CustomerAddressResponse$new()$fromJSON(jsonlite::toJSON(this_object$`address`, auto_unbox = TRUE, digits = NA))
      self$`createdAt` <- this_object$`createdAt`
      self$`updatedAt` <- this_object$`updatedAt`
      self
    },

    #' @description
    #' Validate JSON input with respect to CustomerReadResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `id`
      if (!is.null(input_json$`id`)) {
        if (!(is.character(input_json$`id`) && length(input_json$`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", input_json$`id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `id` is missing."))
      }
      # check the required field `name`
      if (!is.null(input_json$`name`)) {
        if (!(is.character(input_json$`name`) && length(input_json$`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", input_json$`name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `name` is missing."))
      }
      # check the required field `email`
      if (!is.null(input_json$`email`)) {
        if (!(is.character(input_json$`email`) && length(input_json$`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", input_json$`email`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `email` is missing."))
      }
      # check the required field `documentType`
      if (!is.null(input_json$`documentType`)) {
        stopifnot(R6::is.R6(input_json$`documentType`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `documentType` is missing."))
      }
      # check the required field `documentNumber`
      if (!is.null(input_json$`documentNumber`)) {
        if (!(is.character(input_json$`documentNumber`) && length(input_json$`documentNumber`) == 1)) {
          stop(paste("Error! Invalid data for `documentNumber`. Must be a string:", input_json$`documentNumber`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `documentNumber` is missing."))
      }
      # check the required field `phoneNumber`
      if (!is.null(input_json$`phoneNumber`)) {
        if (!(is.character(input_json$`phoneNumber`) && length(input_json$`phoneNumber`) == 1)) {
          stop(paste("Error! Invalid data for `phoneNumber`. Must be a string:", input_json$`phoneNumber`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `phoneNumber` is missing."))
      }
      # check the required field `address`
      if (!is.null(input_json$`address`)) {
        stopifnot(R6::is.R6(input_json$`address`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `address` is missing."))
      }
      # check the required field `createdAt`
      if (!is.null(input_json$`createdAt`)) {
        if (!(is.character(input_json$`createdAt`) && length(input_json$`createdAt`) == 1)) {
          stop(paste("Error! Invalid data for `createdAt`. Must be a string:", input_json$`createdAt`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `createdAt` is missing."))
      }
      # check the required field `updatedAt`
      if (!is.null(input_json$`updatedAt`)) {
        if (!(is.character(input_json$`updatedAt`) && length(input_json$`updatedAt`) == 1)) {
          stop(paste("Error! Invalid data for `updatedAt`. Must be a string:", input_json$`updatedAt`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CustomerReadResponse: the required field `updatedAt` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CustomerReadResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `id` is null
      if (is.null(self$`id`)) {
        return(FALSE)
      }

      # check if the required `name` is null
      if (is.null(self$`name`)) {
        return(FALSE)
      }

      # check if the required `email` is null
      if (is.null(self$`email`)) {
        return(FALSE)
      }

      # check if the required `documentType` is null
      if (is.null(self$`documentType`)) {
        return(FALSE)
      }

      # check if the required `createdAt` is null
      if (is.null(self$`createdAt`)) {
        return(FALSE)
      }

      # check if the required `updatedAt` is null
      if (is.null(self$`updatedAt`)) {
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
      # check if the required `id` is null
      if (is.null(self$`id`)) {
        invalid_fields["id"] <- "Non-nullable required field `id` cannot be null."
      }

      # check if the required `name` is null
      if (is.null(self$`name`)) {
        invalid_fields["name"] <- "Non-nullable required field `name` cannot be null."
      }

      # check if the required `email` is null
      if (is.null(self$`email`)) {
        invalid_fields["email"] <- "Non-nullable required field `email` cannot be null."
      }

      # check if the required `documentType` is null
      if (is.null(self$`documentType`)) {
        invalid_fields["documentType"] <- "Non-nullable required field `documentType` cannot be null."
      }

      # check if the required `createdAt` is null
      if (is.null(self$`createdAt`)) {
        invalid_fields["createdAt"] <- "Non-nullable required field `createdAt` cannot be null."
      }

      # check if the required `updatedAt` is null
      if (is.null(self$`updatedAt`)) {
        invalid_fields["updatedAt"] <- "Non-nullable required field `updatedAt` cannot be null."
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
# CustomerReadResponse$unlock()
#
## Below is an example to define the print function
# CustomerReadResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CustomerReadResponse$lock()

