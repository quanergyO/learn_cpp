#include <iostream>

#define SIZE 9

void input_array(int *array, int len);

int main(void) {
    int *R = new int[SIZE];
    input_array(R, SIZE);
    int max = INT_MIN;
    int max_index = -1;
    for (int i = 0; i < SIZE; i++) {
        if (R[i] % 2 == 1 && R[i] > max) {
            max = R[i];
            max_index = i;
        }
    }
    (max_index == -1) ? std::cout << "There are no such items" << std::endl
                      : std::cout << max_index << std::endl;

    delete[] R;
    
    return 0;
}

void input_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cin >> array[i];
    }
}