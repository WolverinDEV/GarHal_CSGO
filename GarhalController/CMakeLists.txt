cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)

find_package(DirectX REQUIRED)
find_package(ImGui REQUIRED)

file(GLOB SOURCES "*.cpp" "*.hpp")
add_executable(garhal-controller
    ${SOURCES}
)

target_include_directories(garhal-controller PRIVATE ${DirectX_INCLUDE_DIRS})
target_link_directories(garhal-controller PRIVATE ${DirectX_LIBRARY_PATHS})
target_link_libraries(garhal-controller PRIVATE imgui garhal-common)
