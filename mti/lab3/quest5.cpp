#include <iostream>

#define SIZE 10

void input_array(int *array, int len);
void output_array(int *array, int len);

int main(void) {
    int *X = new int[SIZE];
    int *Y = new int[SIZE];
    int *S = new int[SIZE];
    input_array(X, SIZE);
    input_array(Y, SIZE);
    int index = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (X[i] == Y[j]) {
                S[index++] = X[i];
                break;
            }
        }
    }

    output_array(S, index);

    delete[] X;
    delete[] Y;
    delete[] S;

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