cmake_minimum_required(VERSION 3.15)

project(GerHal C CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/Libraries/FindWDK/cmake")
find_package(WDK REQUIRED)

add_subdirectory(Common)
add_subdirectory(Garhal)
add_subdirectory(GarhalController)