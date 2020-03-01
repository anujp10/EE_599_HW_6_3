#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(DFS_ALLShould, DFS_ALLReturn) {
  std::map<int, std::set<int>> vertices{
        {0, {1, 2, 5}},
        {1, {2, 3}},
        {2, {0, 1, 3}},
        {3, {1, 2, 4}},
        {4, {3}},
        {5, {0}},
        {6, {3}}};
  Graph g(vertices);

  std::vector <int> actual = g.DFS_ALL();
  std::vector <int> expected = {0, 1, 2, 3, 4, 5, 6};
  EXPECT_EQ(expected, actual);
}

TEST(DFS_ALLShould_1, DFS_ALLReturn_1) {
  std::map<int, std::set<int>> vertices{};
  Graph g(vertices);

  std::vector <int> actual = g.DFS_ALL();
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}