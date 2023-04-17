#include <iostream>

int main(void) {
    int num1, num2;
    std::cin >> num1 >> num2;
    int flag = true;
    int max = (num1 > num2) ? num1 : num2;
    for (int i = 2; i <= max; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            flag = false;
            break;
        }
    }
    flag ? std::cout << "Yes" << std::endl
         : std::cout << "No" << std::endl;

    return 0;
}
