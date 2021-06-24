cmake_minimum_required(VERSION 3.10)
project(ClothSim)

set(CLOTH_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

file(
    GLOB_RECURSE src
    "${CMAKE_CURRENT_SOURCE_DIR}/src/**.cpp"
    "${CLOTH_INCLUDE_DIR}/**.h"
)

add_executable(test_scene ${src})
target_include_directories(test_scene PUBLIC "${CLOTH_INCLUDE_DIR}")