#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

class Solution {
public:
    void solve(std::vector<std::vector<char>>& board);

private:
    int n, m;
    void dfs(std::vector<std::vector<char>>& board, int x, int y);
};

#endif 