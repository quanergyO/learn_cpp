#include <iostream>
#include <limits>

void inputArray(double *arr, size_t size);
void outputArray(double *arr, size_t size);
size_t findFirstZero(double *arr, size_t size);
size_t findLastZero(double *arr, size_t size);
size_t findMax(double *arr, size_t size);
size_t findMin(double *arr, size_t size);
double averageArithmetic(double *arr, size_t start, size_t end);
void swapTwoItemInArray(double *arr, size_t index1, size_t index2);

int main(void) {
    size_t size;
    std::cin >> size;
    double *arr = new double[size];
    inputArray(arr, size);
    size_t indexFirstZero = findFirstZero(arr, size);
    size_t indexLastZero = findLastZero(arr, size);
    double average = averageArithmetic(arr, indexFirstZero, indexLastZero);
    size_t indexMaxNumber = findMax(arr, size);
    size_t indexMinNumber = findMin(arr, size);
    swapTwoItemInArray(arr, 0, indexMaxNumber);
    swapTwoItemInArray(arr, size-1, indexMinNumber);
    outputArray(arr, size);
    std::cout << "average = " << average << std::endl;

    delete[] arr;

    return 0;
}

void swapTwoItemInArray(double *arr, size_t index1, size_t index2) {
    double tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
}

double averageArithmetic(double *arr, size_t start, size_t end) {
    double sum = 0;
    for (size_t i = start + 1; i < end; ++i) {
        sum += arr[i];
    }

    return sum / (end - start - 1);
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

size_t findLastZero(double *arr, size_t size) {
    size_t index;
    bool isHaveZero = false;
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            index = i;
            isHaveZero = true;
        }
    }
    if (!isHaveZero)
        throw std::invalid_argument("No zero in array!");
    return index;
}

size_t findFirstZero(double *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            return i;
        }
    }
    throw std::invalid_argument("No zero in array!");
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
