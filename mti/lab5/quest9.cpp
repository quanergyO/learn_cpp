#include <iostream>

void inputArray(double *arr, size_t size);
void outputArray(double *arr, size_t size);
double averageArithmetic(double *arr, size_t size);
void removeItemFromArray(double *arr, size_t size, size_t indexToRemove);
void removeNegativeNumbers(double *arr, size_t &size);

int main(void) {
    size_t size;
    std::cin >> size;
    double *arr = new double[size];
    inputArray(arr, size);
    std::cout << averageArithmetic(arr, size) << std::endl;
    removeNegativeNumbers(arr, size);
    outputArray(arr, size);
    std::cout << averageArithmetic(arr, size) << std::endl;

    delete[] arr;

    return 0;
}

void removeNegativeNumbers(double *arr, size_t &size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            removeItemFromArray(arr, size, i);
            size--;
            i--;
        }
    }
}

void removeItemFromArray(double *arr, size_t size, size_t indexToRemove) {
    for (size_t i = indexToRemove; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
}

double averageArithmetic(double *arr, size_t size) {
    double sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

void outputArray(double *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void inputArray(double *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}
