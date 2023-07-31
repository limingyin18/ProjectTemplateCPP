project(Computer CXX)

add_library(Computer Computer.cpp)
target_include_directories(Computer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
