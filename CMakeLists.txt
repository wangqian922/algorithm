cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(test
    VERSION         0.0.1
    DESCRIPTION     "exercise cmake study"
    LANGUAGES       CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

