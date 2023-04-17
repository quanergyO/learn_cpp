#include <iostream>
#include <limits>

void inputArray(uint64_t *arr, size_t size);
bool isNumberSimple(uint64_t number);
uint64_t findMinSimpleNumber(uint64_t *arr, size_t size);
void sortArray(uint64_t *arr, size_t size);
void outputArray(uint64_t *arr, size_t size);

int main(void) {
    size_t size;
    std::cin >> size;
    uint64_t *arr = new uint64_t[size];
    inputArray(arr, size);
    uint64_t indexBefore = findMinSimpleNumber(arr, size);
    sortArray(arr, size);
    outputArray(arr, size);
    uint64_t indexAfter = findMinSimpleNumber(arr, size);
    
    std::cout << "index before = " << indexBefore 
              << " index after = " << indexAfter << std::endl;

    return 0;
}

void sortArray(uint64_t *arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            if (arr[i] < arr[j]) {
                uint64_t tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

uint64_t findMinSimpleNumber(uint64_t *arr, size_t size) {
    uint64_t min = std::numeric_limits<uint64_t>::max();
    size_t index;
    bool isFind = false;
    for (size_t i = 0; i < size; ++i) {
        if (isNumberSimple(arr[i])) {
            if (arr[i] < min) {
                min = arr[i];
                index = i;
                isFind = true;
            }
        }
    }
    if (!isFind) {
        throw std::invalid_argument("There are no numbers that satisfy the condition");
    }
    return index;
}

bool isNumberSimple(uint64_t number) {
    if (number == 1 or number == 0)
        return false;
    for (size_t divider = 2; divider < number; ++divider) {
        if (number % divider == 0)
            return false;
    }
    return true;
}

void inputArray(uint64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void outputArray(uint64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}