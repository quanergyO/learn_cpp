#include <iostream>

int * number_factors(int x, int *len);
bool is_good(int *arr1, int len1, int *arr2, int len2);

int main(void) {
    int num1, num2;
    std::cin >> num1 >> num2;
    int len1, len2;
    int* num1_factors = number_factors(num1, &len1);
    int* num2_factors = number_factors(num2, &len2);
    is_good(num1_factors, len1, num2_factors, len2) ?
    std::cout << "Yes" << std::endl :
    std::cout << "No" << std::endl;

    delete[] num1_factors;
    delete[] num2_factors;
    return 0;
}

bool is_good(int *arr1, int len1, int *arr2, int len2) {
    int count_divisors = 0;
    bool flag;
    for (int i = 0; i < len1; i++) {
        int tmp = arr1[i];
        for (int j = 0; j < len2; j++) {
            if (tmp == arr2[j]) {
                count_divisors++;
                break;
            }
        }
    }
    (count_divisors > 1) ? flag = true : flag = false;

    return flag;
}

int * number_factors(int x, int *len) {
    int *array = new int[x/2];
    int i = 0;
    int divisor = 2;
    while (x != 1) {
        while (x % divisor == 0) {
            array[i++] = divisor;
            x /= divisor;
        }
        divisor++;
    }
    *len = i;

    return array;
}