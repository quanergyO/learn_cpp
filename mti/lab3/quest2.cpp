#include <iostream>

void input_array(int *array, int len);
void output_array(int *array, int len);

int main(void) {
    const int SIZE = 8;
    int *array1 = new int[SIZE];
    int *array2 = new int[SIZE];
    input_array(array1, SIZE);
    for (int i = 0; i < SIZE; i++) {
        array2[i] = array1[i] % 10;
    }

    output_array(array2, SIZE);
    delete[] array1;
    delete[] array2;

    return 0;
}

void output_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void input_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cin >> array[i];
    }
}