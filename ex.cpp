#include <iostream>
#include <cassert>

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution solver;

    assert(solver.sum(12, 5) == 17);
    assert(solver.sum(-10, 4) == -6);

    std::cout << "Sucesso" << std::endl;
    return 0;
}