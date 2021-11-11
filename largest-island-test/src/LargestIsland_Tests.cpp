#include <LargestIsland.h>
#include <gtest/gtest.h>

#include <vector>

using namespace std;

TEST(LargestIsland, TEST1) {
  ASSERT_EQ(largestIsland({{1, 0, 0}, {0, 0, 0}, {0, 0, 1}}), 1);
}

TEST(LargestIsland, TEST2) {
  ASSERT_EQ(largestIsland({{1, 1, 0}, {0, 1, 1}, {0, 0, 1}}), 5);
}

TEST(LargestIsland, TEST3) {
  ASSERT_EQ(largestIsland({{1, 0, 0}, {1, 0, 0}, {1, 0, 1}}), 3);
}

TEST(LargestIsland, TEST4) {
  ASSERT_EQ(largestIsland({{0, 0, 0}, {0, 1, 1}, {0, 1, 1}}), 4);
}

TEST(LargestIsland, TEST5) {
  ASSERT_EQ(largestIsland({{1, 0, 0}, {0, 0, 1}, {0, 0, 1}}), 2);
}

TEST(LargestIsland, TEST6) {
  ASSERT_EQ(largestIsland({{1, 0, 0}, {0, 1, 1}, {0, 0, 1}}), 4);
}

TEST(LargestIsland, TEST7) {
  ASSERT_EQ(largestIsland({{1, 0}, {0, 1}, {0, 0}}), 2);
}

TEST(LargestIsland, TEST8) { ASSERT_EQ(largestIsland({{1}}), 1); }

TEST(LargestIsland, TEST9) { ASSERT_EQ(largestIsland({{1}, {0}, {1}}), 1); }

TEST(LargestIsland, TEST10) {
  ASSERT_EQ(largestIsland({{1, 1, 1}, {0, 1, 1}, {0, 0, 1}}), 6);
}

TEST(LargestIsland, TEST11) {
  ASSERT_EQ(
      largestIsland(
        {
              {1, 1, 0, 0, 1, 1, 1 },
              {0, 1, 1, 0, 1, 1, 1 },
              {0, 0, 1, 0, 1, 0, 1 },
              {1, 0, 1, 0, 0, 0, 0 },
              {1, 0, 1, 0, 1, 1, 1 },
              {1, 0, 0, 0, 1, 1, 1 },
              {1, 0, 1, 0, 1, 1, 1 },
        }
    ), 9);
}

TEST(LargestIsland, TEST12) {
  ASSERT_EQ(
      largestIsland(
        {
              {1, 1, 1, 1, 1, 1, 1 },
              {1, 0, 0, 0, 0, 0, 1 },
              {1, 0, 1, 1, 1, 0, 1 },
              {1, 0, 1, 0, 1, 0, 1 },
              {1, 0, 1, 1, 1, 0, 1 },
              {1, 0, 0, 0, 0, 0, 1 },
              {1, 1, 1, 1, 1, 1, 1 },
        }
    ), 24);
}
