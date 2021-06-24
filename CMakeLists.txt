cmake_minimum_required(VERSION 3.10)
project(ClothSim)

set(CLOTH_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(CLOTH_EXTERNAL_INC "${CMAKE_CURRENT_SOURCE_DIR}/external")

file(
    GLOB_RECURSE src
    "${CMAKE_CURRENT_SOURCE_DIR}/src/**.cpp"
    "${CLOTH_INCLUDE_DIR}/**.h"
)

add_executable(test_scene ${src})
target_include_directories(test_scene PUBLIC "${CLOTH_INCLUDE_DIR}")

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory("${CLOTH_EXTERNAL_INC}/glfw")
target_link_libraries(test_scene glfw)