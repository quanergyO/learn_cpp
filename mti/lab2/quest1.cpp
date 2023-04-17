#include <iostream>

int main(void) {
    int num;
    int n = 0;
    int sum = 0;
    std::cin >> num;
    int cp_num = num;
    while (cp_num != 0) {
        cp_num /= 10;
        n++;
    }
    cp_num = num;
    while (cp_num != 0) {
        int last = cp_num % 10;
        int step = 1;
        for (int i = 0; i < n; i++) {
            step *= last;
        }
        cp_num /= 10;
        sum += step;
    }

    (sum == num) ? std::cout << "is an amstrong number" << std::endl
                 : std::cout << "is not an amstrong number" << std::endl;

    return 0;
}