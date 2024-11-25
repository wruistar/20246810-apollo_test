#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    // 设置控制台输出的编码为 UTF-8
    #ifdef _WIN32
        system("chcp 65001");
    #endif
    
    std::cout.imbue(std::locale(""));
    
    Solution solution;
    
    // 测试用例
    std::vector<std::vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };
    
    std::cout << "原始矩阵：" << std::endl;
    for (const auto& row : board) {
        for (char c : row) {
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }
    
    solution.solve(board);
    
    std::cout << "\n处理后的矩阵：" << std::endl;
    for (const auto& row : board) {
        for (char c : row) {
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
} 