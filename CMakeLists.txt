cmake_minimum_required(VERSION 3.28)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(TypeTraitsWrapper LANGUAGES CXX)

add_library(TypeTraitsWrapper INTERFACE)

target_include_directories(TypeTraitsWrapper INTERFACE 
  ${CMAKE_CURRENT_LIST_DIR}/include/
)

target_compile_features(TypeTraitsWrapper INTERFACE
  cxx_std_17
)
