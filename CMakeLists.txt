cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

# Set CMAKE_BUILD_TYPE to Release by default.
# Must be done before calling project()
if(CMAKE_BUILD_TYPE MATCHES "^CMAKE_BUILD_TYPE$")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: None(CMAKE_CXX_FLAGS or CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "" Release Debug RelWithDebInfo MinSizeRel)
endif()

project(Vulkanizer)

set(INSTALL_CMAKE_DIR lib${LIB_SUFFIX}/cmake/vulzr CACHE PATH "Installation directory for cmake config files")

install(DIRECTORY vulzr DESTINATION include FILES_MATCHING PATTERN "*.hpp")
install(DIRECTORY vulzr DESTINATION include FILES_MATCHING PATTERN "*.inl")

configure_file(cmake/vulzrConfig.cmake.in ${PROJECT_BINARY_DIR}/vulzrConfig.cmake @ONLY)
install(FILES ${PROJECT_BINARY_DIR}/vulzrConfig.cmake DESTINATION ${INSTALL_CMAKE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
