#include <iostream>

int main(void) {
    int a, b;
    std::cin >> a >> b;
    std::cout << "sum: " << a + b << std::endl;
    std::cout << "mul: " << a * b << std::endl;
    std::cout << "dif: " << a - b << std::endl;
    std::cout << "mid: " << (double)(a + b) / 2 << std::endl;
    return 0;
}