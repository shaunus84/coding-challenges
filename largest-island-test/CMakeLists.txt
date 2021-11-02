add_executable(largest-island-test
				src/main.cpp
				src/LargestIsland_Tests.cpp)

target_link_libraries(largest-island-test PRIVATE gtest_main largest-island)