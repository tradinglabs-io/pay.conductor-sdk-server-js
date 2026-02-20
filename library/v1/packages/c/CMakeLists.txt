cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator C)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=implicit-function-declaration")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=missing-declarations")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=int-conversion")

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()
endif()

set(pkgName "payconductor_api")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/address_create_request.c
    model/available_payment_methods.c
    model/card_create_request.c
    model/card_expiration_data.c
    model/card_tokenization_create_request.c
    model/card_tokenization_create_request_customer.c
    model/card_tokenization_create_response.c
    model/card_tokenization_customer_by_id_data.c
    model/customer_address_response.c
    model/customer_create_request.c
    model/customer_list_pagination.c
    model/customer_list_response.c
    model/customer_read_response.c
    model/customer_update_request.c
    model/document_type.c
    model/event.c
    model/merchant_input.c
    model/order_bank_slip_info.c
    model/order_bank_slip_payment_request.c
    model/order_confirm_response.c
    model/order_create_request.c
    model/order_create_request_session.c
    model/order_create_response.c
    model/order_create_response_order_items_inner.c
    model/order_create_response_session.c
    model/order_credit_card_info.c
    model/order_credit_card_payment_request.c
    model/order_credit_card_payment_request_card.c
    model/order_draft_payment_request.c
    model/order_fraud_fingerprints.c
    model/order_item_data.c
    model/order_nu_pay_info.c
    model/order_nu_pay_payment_request.c
    model/order_nu_pay_payment_request_nu_pay.c
    model/order_payment_request.c
    model/order_pic_pay_info.c
    model/order_pic_pay_payment_request.c
    model/order_pix_info.c
    model/order_pix_payment_request.c
    model/order_tokenized_card_data.c
    model/payment_method.c
    model/pix_type.c
    model/status.c
    model/withdraw_create_request.c
    model/withdraw_create_response.c
    model/withdraw_create_response_payed_at.c
    model/withdraw_create_response_payout_account.c
    model/withdraw_payout_account_data.c
    api/CardTokenizationAPI.c
    api/CustomerAPI.c
    api/OrderAPI.c
    api/WithdrawAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/any_type.h
    model/address_create_request.h
    model/available_payment_methods.h
    model/card_create_request.h
    model/card_expiration_data.h
    model/card_tokenization_create_request.h
    model/card_tokenization_create_request_customer.h
    model/card_tokenization_create_response.h
    model/card_tokenization_customer_by_id_data.h
    model/customer_address_response.h
    model/customer_create_request.h
    model/customer_list_pagination.h
    model/customer_list_response.h
    model/customer_read_response.h
    model/customer_update_request.h
    model/document_type.h
    model/event.h
    model/merchant_input.h
    model/order_bank_slip_info.h
    model/order_bank_slip_payment_request.h
    model/order_confirm_response.h
    model/order_create_request.h
    model/order_create_request_session.h
    model/order_create_response.h
    model/order_create_response_order_items_inner.h
    model/order_create_response_session.h
    model/order_credit_card_info.h
    model/order_credit_card_payment_request.h
    model/order_credit_card_payment_request_card.h
    model/order_draft_payment_request.h
    model/order_fraud_fingerprints.h
    model/order_item_data.h
    model/order_nu_pay_info.h
    model/order_nu_pay_payment_request.h
    model/order_nu_pay_payment_request_nu_pay.h
    model/order_payment_request.h
    model/order_pic_pay_info.h
    model/order_pic_pay_payment_request.h
    model/order_pix_info.h
    model/order_pix_payment_request.h
    model/order_tokenized_card_data.h
    model/payment_method.h
    model/pix_type.h
    model/status.h
    model/withdraw_create_request.h
    model/withdraw_create_response.h
    model/withdraw_create_response_payed_at.h
    model/withdraw_create_response_payout_account.h
    model/withdraw_payout_account_data.h
    api/CardTokenizationAPI.h
    api/CustomerAPI.h
    api/OrderAPI.h
    api/WithdrawAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
if(NOT BUILD_STATIC_LIBS)
  add_library(${pkgName} ${SRCS} ${HDRS})
else()
  add_library(${pkgName} STATIC ${SRCS} ${HDRS})
endif()
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-CardTokenizationAPI.c
#    unit-tests/manual-CustomerAPI.c
#    unit-tests/manual-OrderAPI.c
#    unit-tests/manual-WithdrawAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
