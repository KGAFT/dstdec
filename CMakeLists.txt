cmake_minimum_required(VERSION 3.10)

add_compile_options(-Wno-incompatible-pointer-types)

project(dstdec)

file(GLOB_RECURSE SRC_FILES sources/*.c)
file(GLOB_RECURSE DEF_FILES sources/*.h)

add_library(dstdec ${SRC_FILES} ${DEF_FILES})
target_include_directories(dstdec PUBLIC sources/)


file(GLOB_RECURSE TEST_FILES testing/*.*)
add_executable(testing ${TEST_FILES})
target_link_libraries(testing PUBLIC dstdec)
target_include_directories(testing PUBLIC testing/)
