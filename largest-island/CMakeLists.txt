add_library(largest-island INTERFACE
LargestIsland.h)

target_include_directories(largest-island
	INTERFACE
	$<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_compile_features(largest-island INTERFACE cxx_std_17)