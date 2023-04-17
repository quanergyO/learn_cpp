#include <iostream>

int main(void) {
    int num;
    std::cin >> num;
    int n = 1;
    bool flag = false;
    for (int i = 1; i <= num; i++) {
        for (int j = i + 1; j <= num; j++) {
            for (int k = j + 1; k <= num; k++) {
                if (i * j * k == num) {
                    flag = true;
                    goto OUT_OF_CYCLE; // запретный плод сладок
                }
            }
        }
    }
OUT_OF_CYCLE:
    flag ? std::cout << "Yes" << std::endl
         : std::cout << "No" << std::endl;

    return 0;
}