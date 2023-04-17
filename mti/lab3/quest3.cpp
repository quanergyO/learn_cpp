#include <iostream>

#define SIZE 17

void input_array(int *array, int len);

int main(void) {
    int *array = new int[SIZE];
    input_array(array, SIZE);
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += (array[i] % 10) + (array[i] / 10);
    }
    std::cout << "sum = " << sum << std::endl;

    delete[] array;

    return 0;
}

void input_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cin >> array[i];
    }
}