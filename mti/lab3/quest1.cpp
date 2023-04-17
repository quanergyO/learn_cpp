#include <iostream>

#define SIZE 10 

void input_array(int *array, int len);
void output_array(int *array, int len);

int main(void) {
    int *array1 = new int[SIZE];
    int *array2 = new int[SIZE];
    int *array3 = new int[SIZE];
    input_array(array1, SIZE);
    input_array(array2, SIZE);
    for (int i = 0; i < SIZE; i++) {
        (i % 2 == 0) ? array3[i] = array1[i+1]
                     : array3[i] = array2[i-1];
    }
    output_array(array3, SIZE);

    delete[] array1;
    delete[] array2;
    delete[] array3;
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