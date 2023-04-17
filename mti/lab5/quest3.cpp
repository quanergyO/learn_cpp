#include <iostream>

void inputArray(double *arr, size_t size);
size_t findMax(double *arr, size_t size);
size_t findMin(double *arr, size_t size);
double calculateSumInRange(double *arr, size_t begin, size_t end);

int main(void) {
    size_t size;
    std::cin >> size;
    double *arr = new double[size];
    inputArray(arr, size);
    size_t indexMin, indexMax;
    indexMin = findMin(arr, size);
    indexMax = findMax(arr, size);
    double sum = calculateSumInRange(arr, indexMax, indexMin);
    std::cout << sum << std::endl;

    delete[] arr;

    return 0;
}

double calculateSumInRange(double *arr, size_t begin, size_t end) {
    double sum = 0.0;
    for (size_t i = begin + 1; i < end; ++i) {
        sum += arr[i];
    }

    return sum;
}

size_t findMin(double *arr, size_t size) {
    double min = arr[0];
    size_t index = 0;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }

    return index;
}

size_t findMax(double *arr, size_t size) {
    double max = arr[0];
    size_t index = 0;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    return index;
}

void inputArray(double *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}