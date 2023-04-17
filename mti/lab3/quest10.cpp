#include <iostream>

#define SIZE 11

void input_array(int *array, int len);
void output_array(int *array, int len);
int sum_conditions(int *array, int len);
void change_elements(int *array, int len, int sum);

int main(void) {
    int *array = new int[SIZE];
    input_array(array, SIZE);
    int sum = sum_conditions(array, SIZE);
    change_elements(array, SIZE, sum);
    output_array(array, SIZE);

    delete[] array;

    return 0;
}

void change_elements(int *array, int len, int sum) {
    for (int i = 0; i < len; i++) {
        if (array[i] % 3 == 0) {
            array[i] = sum;
        }
    }
}

int sum_conditions(int *array, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if ((array[i] * -1) % 2 == 1 && array[i] < 0) {
            sum += array[i];
        }
    }
    return sum;
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