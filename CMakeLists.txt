cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(arithmetic
    VERSION 0.1.1
    DESCRIPTION "arithmetic exercise"
    HOMEPAGE_URL "https://github.com/wangqian922/arithmetic"
    LANGUAGES C CXX
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildInfo)

add_subdirectory(src)

add_subdirectory(external)

