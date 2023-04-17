#include <iostream>

#define SIZE1 7
#define SIZE2 9

void input_array(int *array, int len);
void output_array(int *array, int len);
void sort_array(int *array, int len);

int main(void) {
    int *array1 = new int[SIZE1];
    int *array2 = new int[SIZE2];
    int *array3 = new int[SIZE1 + SIZE2];
    input_array(array1, SIZE1);
    input_array(array2, SIZE2);
    sort_array(array1, SIZE1);
    sort_array(array2, SIZE2);
    int index1 = 0, index2 = 0;
    for (int i = 0; i < SIZE1+SIZE2; i++) {
        if (array1[index1] < array2[index2] && index1 < SIZE1)
            array3[i] = array1[index1++];
        else
            array3[i] = array2[index2++];
    }

    output_array(array3, SIZE1 + SIZE2);

    delete[] array1;
    delete[] array2;
    delete[] array3;

    return 0;
}

void sort_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (array[i] < array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
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