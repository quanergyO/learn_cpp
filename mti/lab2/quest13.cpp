#include <iostream>

int main(void) {
    int num;
    std::cin >> num;
    bool is_simple = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_simple = false;
            break;
        }
    }
    is_simple ? std::cout << "Yes" << std::endl
              : std::cout << "No" << std::endl;

    return 0;
}