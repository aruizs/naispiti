add_subdirectory(complex_ops)

add_executable(main main.cpp)
target_link_libraries(main  PRIVATE ${CONAN_LIBS} complex_ops)