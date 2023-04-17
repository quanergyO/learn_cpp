#include <iostream>

void inputArray(int64_t *arr, size_t size);
void outputArray(int64_t *arr, size_t size);
int64_t *concatTwoArray(int64_t *arr1, size_t size1, int64_t *arr2, size_t size2, size_t &size3);
bool isNumberSimple(int64_t number);


int main(void) {
    size_t size1, size2;
    std::cin >> size1 >> size2;
    int64_t *arr1 = new int64_t[size1];
    int64_t *arr2 = new int64_t[size2];
    inputArray(arr1, size1);
    inputArray(arr2, size2);
    size_t size3;
    int64_t *newArray = concatTwoArray(arr1, size1, arr2, size2, size3);
    outputArray(newArray, size3);


    delete[] arr1;
    delete[] arr2;
    delete[] newArray;

    return 0;
}

bool isNumberSimple(int64_t number) {
    if (number == 1 or number == 0)
        return false;
    for (size_t divider = 2; divider < number; ++divider) {
        if (number % divider == 0)
            return false;
    }
    return true;
}

int64_t *concatTwoArray(int64_t *arr1, size_t size1, int64_t *arr2, size_t size2, size_t &size3) {
    int64_t *newArray = new int64_t[size1 + size2];
    size_t index = 0;
    for (size_t i = 0; i < size1; ++i) {
        if (arr1[i] >= 0)
            newArray[index++] = arr1[i];
    }
    for (size_t i = 0; i < size2; ++i) {
        if (arr2[i] >= 0)
            newArray[index++] = arr2[i];
    }
    size3 = index;
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