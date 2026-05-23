cmake_minimum_required(VERSION 3.28)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)

project(TypeTraitsWrapper LANGUAGES CXX)

add_library(TypeTraitsWrapper INTERFACE)

target_include_directories(TypeTraitsWrapper INTERFACE 
  $<BUILD_LOCAL_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/>
)

target_compile_features(TypeTraitsWrapper INTERFACE
  cxx_std_17
)

set_target_properties(TypeTraitsWrapper PROPERTIES
  CXX_VISIBILITY_PRESET hidden
  VISIBILITY_INLINES_HIDDEN ON
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF
)
