#include <iostream>

int sum_factors(int num);

int main(void) {
    int num1, num2;
    std::cin >> num1 >> num2;
    int sum1 = sum_factors(num1);
    int sum2 = sum_factors(num2);
    (sum1 == num2 && sum2 == num1)  ?
    std::cout << "Yes" << std::endl :
    std::cout << "No" << std::endl;

    return 0;
}

int sum_factors(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    return sum;
}

