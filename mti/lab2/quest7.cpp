#include <iostream>

bool sumSquare(int n);

int main(void) {
    int num;
    std::cin >> num;
    sumSquare(num) ? std::cout << "Yes" << std::endl
                   : std::cout << "No" << std::endl;

    return 0;
}

bool sumSquare(int n) {
    for (int i = 1; i * i <= n; i++) {
        for (int j = 1; j * j <= n; j++) {
            if (i * i + j * j == n) {
                return true;
            }
        }
    }
    return false;
}