#include <iostream>

void inputArray(uint64_t* arr, size_t size);
void outputArray(uint64_t* arr, size_t size);
bool isPerfectNumber(uint64_t number);
void removeItem(uint64_t *array, size_t &size, size_t indexToRemove);

int main(void) {
    size_t SIZE;
    std::cin >> SIZE;
    uint64_t* arr = new uint64_t[SIZE];
    inputArray(arr, SIZE);
    for (size_t i = 0; i < SIZE; ++i) {
        if (isPerfectNumber(arr[i])) {
            removeItem(arr, SIZE, i);
            i--;
        }
    }
    outputArray(arr, SIZE);

    delete[] arr;

    return 0;
}

void removeItem(uint64_t *array, size_t &size, size_t indexToRemove) {
    for (size_t i = indexToRemove; i < size - 1; ++i) {
        array[i] = array[i + 1];
    }
    size--;
}

bool isPerfectNumber(uint64_t number) {
    int64_t sum = 0;
    bool isPerfect;
    for (size_t i = 1; i < number / 2 + 1; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    sum == number ? isPerfect = true : isPerfect = false;

    return isPerfect;
}

void outputArray(uint64_t* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void inputArray(uint64_t* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}