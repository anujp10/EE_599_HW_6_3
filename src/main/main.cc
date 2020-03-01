#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::map<int, std::set<int>> vertices{
        {0, {1, 2, 5}},
        {1, {2, 3}},
        {2, {0, 1, 3}},
        {3, {1, 2, 4}},
        {4, {3}},
        {5, {0}},
        {6, {3}}};

    std::vector <int> result;

    Graph g(vertices);

    result = g.DFS_ALL();

    for (auto &n : result)
        std::cout << n << " ";
    std::cout << std::endl;
}
