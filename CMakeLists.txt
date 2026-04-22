cmake_minimum_required(VERSION 3.10)

add_compile_options(-Wno-incompatible-pointer-types)

project(libdstdec)

file(GLOB_RECURSE SRC_FILES sources/*.c)
file(GLOB_RECURSE DEF_FILES sources/*.h)

add_library(libdstdec ${SRC_FILES} ${DEF_FILES})
target_include_directories(libdstdec PUBLIC src/)
