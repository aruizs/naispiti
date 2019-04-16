add_executable(test_test main.cpp complex_ops.cpp)
target_link_libraries(test_test CONAN_PKG::Catch2 complex_ops)

add_test(NAME test_test
         COMMAND test_test -r junit)