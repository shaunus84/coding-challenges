add_library(largest-island STATIC
 LargestIsland.h
 LargestIsland.cpp)

target_include_directories(largest-island PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_features(largest-island INTERFACE cxx_std_17)