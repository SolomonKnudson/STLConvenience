cmake_minimum_required(VERSION 3.28)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(STLConvenience LANGUAGES CXX)

add_library(STLConvenience INTERFACE)

target_include_directories(STLConvenience INTERFACE 
  "${CMAKE_CURRENT_LIST_DIR}/include/"
)

target_compile_features(STLConvenience INTERFACE
  cxx_std_17
)
