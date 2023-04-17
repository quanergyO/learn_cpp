#include <iostream>

#define SIZE 14

void input_array(double *array, int len);
void output_array(double *array, int len);
int change_by_half(double *array, int len);

int main(void) {
    double *array = new double[SIZE];
    input_array(array, SIZE);

    int count = change_by_half(array, SIZE);
    std::cout << count << std::endl;
    output_array(array, SIZE);
    
    delete[] array;

    return 0;
}

int change_by_half(double *array, int len) {
    int count = 0;
    for (int i = 0, j = len / 2; i < len / 2; i++, j++) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        count++;
    }

    return count;
}

void output_array(double *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void input_array(double *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cin >> array[i];
    }
}