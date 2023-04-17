#include <iostream>

void inputArray(double *arr, size_t size);
void outputArray(double *arr, size_t size);
size_t findMax(double *arr, size_t size);
size_t findMin(double *arr, size_t size);
void sortArrayByAscending(double *arr, size_t start, size_t end);
void sortArrayByDescending(double *arr, size_t start, size_t end);

int main(void) {
    size_t size;
    std::cin >> size;
    double *arr = new double[size];
    inputArray(arr, size);
    size_t indexMinNumber = findMin(arr, size);
    size_t indexMaxNumber = findMax(arr, size);
    sortArrayByAscending(arr, 0, indexMinNumber);
    outputArray(arr, size);
    sortArrayByDescending(arr, indexMaxNumber, size-1);
    outputArray(arr, size);

    delete[] arr;

    return 0;
}

void sortArrayByDescending(double *arr, size_t start, size_t end) {
    for (size_t i = start; i < end; ++i) {
        for (size_t j = i; j < end; ++j) {
            if (arr[i] < arr[i]) {
                std::cout << "i = " << i << " j = " << j << std::endl;
                double tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void sortArrayByAscending(double *arr, size_t start, size_t end) {
    for (size_t i = start; i < end; ++i) {
        for (size_t j = i; j < end; ++j) {
            if (arr[i] > arr[j]) {
                double tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
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
