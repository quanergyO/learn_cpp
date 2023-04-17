#include <iostream>

void inputArray(int64_t *arr, size_t size);
void outputArray(int64_t *arr, size_t size);
int64_t *concatTwoArray(int64_t *arr1, size_t size1, int64_t *arr2, size_t size2);
void sortArray(int64_t *arr, size_t size);
int64_t findMax(int64_t *arr, size_t size);

int main(void) {
    size_t size1, size2;
    std::cin >> size1 >> size2;
    int64_t *arr1 = new int64_t[size1];
    int64_t *arr2 = new int64_t[size2];
    inputArray(arr1, size1);
    inputArray(arr2, size2);
    int64_t *newArray = concatTwoArray(arr1, size1, arr2, size2);
    sortArray(newArray, size1 + size2);
    outputArray(newArray, size1 + size2);
    int64_t maxValue = findMax(newArray, size1 + size2);
    std::cout << maxValue << std::endl;

    delete[] arr1;
    delete[] arr2;
    delete[] newArray;

    return 0;
}

int64_t findMax(int64_t *arr, size_t size) {
    int64_t max = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

void sortArray(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i; j < size; ++j) {
            if (arr[i] < arr[j]) {
                int64_t tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int64_t *concatTwoArray(int64_t *arr1, size_t size1, int64_t *arr2, size_t size2) {
    int64_t *newArray = new int64_t[size1 + size2];
    size_t index = 0;
    for (size_t i = 0; i < size1; ++i) {
        newArray[index++] = arr1[i];
    }
    for (size_t i = 0; i < size2; ++i) {
        newArray[index++] = arr2[i];
    }

    return newArray;
}

void outputArray(int64_t* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void inputArray(int64_t* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}