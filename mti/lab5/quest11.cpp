#include <iostream>
#include <limits>

void inputArray(int64_t *arr, size_t size);
size_t findFirstZero(int64_t *arr, size_t size);
size_t findLastZero(int64_t *arr, size_t size);
double avarageValue(int64_t *arr, size_t start, size_t end);
size_t findMaxNumber(int64_t *arr, size_t size);
size_t findMinNumber(int64_t *arr, size_t size);
void swapToItems(int64_t *arr, size_t index1, size_t index2);
void outputArray(int64_t *arr, size_t size);


int main(void) {
    size_t size;
    std::cin >> size;
    int64_t *arr = new int64_t[size];
    inputArray(arr, size);
    size_t indexFirstZero = findFirstZero(arr, size);
    size_t indexLastZero = findLastZero(arr, size);
    double avgValue = avarageValue(arr, indexFirstZero, indexLastZero);
    size_t indexMaxNumber = findMaxNumber(arr, size);
    size_t indexMinNumber = findMinNumber(arr, size);
    swapToItems(arr, indexMaxNumber, indexMinNumber);
    outputArray(arr, size);

    delete[] arr;

    return 0;
}

void swapToItems(int64_t *arr, size_t index1, size_t index2) {
    int64_t tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
}

size_t findMinNumber(int64_t *arr, size_t size) {
    int64_t min = arr[0];
    size_t index = 0;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }

    return index;
}

size_t findMaxNumber(int64_t *arr, size_t size) {
    int64_t max = arr[0];
    size_t index = 0;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    return index;
}

double avarageValue(int64_t *arr, size_t start, size_t end) {
    double sum = 0.0;
    for (size_t i = start; i < end; ++i) {
        sum += arr[i];
    }
    return sum / (end - start - 1);
}

size_t findLastZero(int64_t *arr, size_t size) {
    size_t index;
    bool isHaveZero = false;
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            index = i;
            isHaveZero = true;
        }
    }
    if (!isHaveZero)
        throw std::invalid_argument("No zeros in array!");
    return index;
}

size_t findFirstZero(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == 0)
            return i;
    }
    throw std::invalid_argument("No zeros in array!");
}

void inputArray(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void outputArray(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}