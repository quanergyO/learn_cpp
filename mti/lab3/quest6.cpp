#include <iostream>

#define SIZE 16

void input_array(double *array, int len);
double calculate_answer(double *array, int len);

int main(void) {
    double *Z = new double[SIZE];
    input_array(Z, SIZE);
    double answer = calculate_answer(Z, SIZE);
    std::cout << answer << std::endl;

    delete[] Z;
    return 0;
}

double calculate_answer(double *array, int len) {
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0)
            sum1 += array[i];
        if (i % 3 == 0)
            sum2 += array[i];
    }

    return sum1 - sum2;
}

void input_array(double *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cin >> array[i];
    }
}