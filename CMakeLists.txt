cmake_minimum_required(VERSION 2.8)
project(naispiti)

include(${CMAKE_CURRENT_SOURCE_DIR}/conan.cmake)

conan_cmake_run(CONANFILE conanfile.txt
                BASIC_SETUP CMAKE_TARGETS
                BUILD missing)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)