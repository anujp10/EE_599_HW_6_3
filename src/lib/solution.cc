#include "solution.h"
#include <stack>

void Graph::DFS_node(int node, std::vector<bool> &vertices_visited, std::vector<int> &result)
{
  std::stack<int> stack_vertices;

  stack_vertices.push(node);

  while (!stack_vertices.empty())
  {
    node = stack_vertices.top();
    stack_vertices.pop();

    if (vertices_visited[node] != true) {
      result.push_back(node);
      vertices_visited[node] = true;
    }

    for (auto it = v_.at(node).rbegin(); it != v_.at(node).rend(); it++) {
      if (vertices_visited[*it] != true)
        stack_vertices.push(*it);
    }
  }
}

std::vector<int> Graph ::DFS_ALL()
{
  std::vector<bool> vertices_visited(v_.size(), false);
  std::vector<int> result;
  
  if (v_.size() < 1)
    return result;

  for (unsigned int i = 0; i < v_.size(); i++)
  {
    if (vertices_visited[i] != true)
      DFS_node(i, vertices_visited, result);
  }

  return result;
}