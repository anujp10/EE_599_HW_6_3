#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <set>

class Graph {
public:
  Graph(std::map <int, std::set<int>> &vertices) : v_(vertices) {}
  std::map <int, std::set<int>> v_;

  std::vector <int> DFS_ALL();
  void DFS_node(int node, std::vector <bool> &vertices_visited, std::vector <int> &result);
};

#endif