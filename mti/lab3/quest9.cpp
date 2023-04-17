#include <iostream>

#define SIZE 12

void input_array(double *array, int len);
int sort_array(double *array, int len);
void output_array(double *array, int len);

int main(void) {
    double *array = new double[SIZE];
    input_array(array, SIZE);
    int answer = sort_array(array, SIZE);
    std::cout << answer << std::endl;
    output_array(array, SIZE);
    delete[] array;

    return 0;
}

int sort_array(double *array, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (array[i] < array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                count++;
            }
        }
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