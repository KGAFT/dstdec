cmake_minimum_required(VERSION 3.10)

add_compile_options(-Wno-incompatible-pointer-types)

project(dstdec)

file(GLOB_RECURSE SRC_FILES sources/*.c)
file(GLOB_RECURSE DEF_FILES sources/*.h)

add_library(dstdec ${SRC_FILES} ${DEF_FILES})
target_include_directories(dstdec PUBLIC sources/)


file(GLOB_RECURSE TEST_FILES rust-ffi/*.*)
add_library(dstdec-rust-ffi ${TEST_FILES})
target_link_libraries(dstdec-rust-ffi PUBLIC dstdec)
target_include_directories(dstdec-rust-ffi PUBLIC rust-ffi/)

install(TARGETS dstdec-rust-ffi DESTINATION lib)
