add_library(complex_ops SHARED complex_ops.cpp complex_ops.hpp)

target_include_directories(complex_ops INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
  