cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)


file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")
add_library(garhal-common
    ${SOURCES}
)
target_include_directories(garhal-common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})