cmake_minimum_required(VERSION 3.5)

project(cmake_test)

############################################################
# Create a library
############################################################

#Generate the static library from the library sources

add_library(algo_library STATIC 
    src/algo/sort.cpp
)

target_include_directories(algo_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_library(data_structure_library STATIC 
    src/dataStructure/sqStack.cpp
)

target_include_directories(data_structure_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_library(Common_Utils_library STATIC 
    src/CommonUtils/util.cpp
)

target_include_directories(Common_Utils_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)


############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(main 
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( main
    PRIVATE 
        algo_library
        data_structure_library
)
