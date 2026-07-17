cmake_minimum_required(VERSION 3.21)

project(aonyx VERSION 0.1.1 LANGUAGES CXX)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

option(
    AONYX_BUILD_EXAMPLES
    "Build the example executable"
    ${PROJECT_IS_TOP_LEVEL}
)
option(
    AONYX_INSTALL
    "Generate install and package-config rules"
    ${PROJECT_IS_TOP_LEVEL}
)

set(CMAKE_DEBUG_POSTFIX d)

find_package(Boost CONFIG REQUIRED COMPONENTS system url)
find_package(OpenSSL REQUIRED)
find_package(nlohmann_json REQUIRED)

add_library(
    aonyx
    src/css/property_list/property_list.cpp
    src/css/rule/rule.cpp
    src/css/stylesheet/stylesheet.cpp
    src/dom/html_node/html_node.cpp
    src/dom/html_tag/html_tag.cpp
    src/http/server/helper/convert.cpp
    src/http/server/router/router.cpp
    src/http/server/serve_static/serve_static.cpp
    src/http/client/client/client.cpp
    src/http/server/server/server.cpp
    src/http/server/server/server_impl.cpp
    src/http/server/session/session.cpp
)

target_include_directories(
    aonyx
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(
    aonyx
    PUBLIC nlohmann_json::nlohmann_json
    PRIVATE Boost::system Boost::url OpenSSL::SSL OpenSSL::Crypto
)

target_compile_features(aonyx PUBLIC cxx_std_23)

add_library(aonyx::aonyx ALIAS aonyx)

if(AONYX_BUILD_EXAMPLES)
    add_executable(example examples/main.cpp)

    target_link_libraries(example PRIVATE aonyx::aonyx)
endif()

if(AONYX_INSTALL)
    configure_package_config_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/cmake/aonyx-config.cmake.in
        ${CMAKE_CURRENT_BINARY_DIR}/aonyx-config.cmake
        INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/aonyx
    )

    write_basic_package_version_file(
        ${CMAKE_CURRENT_BINARY_DIR}/aonyx-config-version.cmake
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY SameMajorVersion
    )

    install(
        FILES
        ${CMAKE_CURRENT_BINARY_DIR}/aonyx-config.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/aonyx-config-version.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/aonyx
    )

    install(
        TARGETS aonyx
        EXPORT aonyx-export
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )

    install(
        EXPORT aonyx-export
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/aonyx
        NAMESPACE aonyx::
        FILE aonyx-targets.cmake
    )

    install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
endif()
