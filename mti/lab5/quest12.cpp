#include <iostream>

typedef struct {
    size_t even;
    size_t odd;
} _size;

void inputArr(int64_t *arr, size_t size);
void removeItem(int64_t *arr, size_t &size, size_t indexRemove);
void removeZero(int64_t *arr, size_t &size);
_size calculateSizes(int64_t *arr, size_t size);
void sortUp(int64_t *arr, size_t size);
void sortDown(int64_t *arr, size_t size);
void outputArray(int64_t *arr, size_t size);


int main(void) {
    size_t size;
    std::cin >> size;
    int64_t *arr = new int64_t[size];
    inputArr(arr, size);
    removeZero(arr, size);
    _size sizes = calculateSizes(arr, size);
    int64_t *arrEven = new int64_t[sizes.even];
    int64_t *arrOdd = new int64_t[sizes.odd];
    for (size_t i = 0, indexEven = 0, indexOdd = 0; i < size; ++i) {
        arr[i] % 2 == 0 ? arrEven[indexEven++] = arr[i]
                   : arrOdd[indexOdd++] = arr[i]; 
    }
    sortDown(arrEven, sizes.even);
    sortUp(arrOdd, sizes.odd);
    outputArray(arrEven, sizes.even);
    outputArray(arrOdd, sizes.odd);

    delete[] arr;
    delete[] arrEven;
    delete[] arrOdd;

    return 0;
}

void sortDown(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[i] < arr[j]) {
                int64_t tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void sortUp(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int64_t tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

_size calculateSizes(int64_t *arr, size_t size) {
    _size sizes = {0, 0};
    for (size_t i = 0; i < size; ++i) {
        arr[i] % 2 == 0 ? sizes.even++ : sizes.odd++;
    }

    return sizes;
}

void removeZero(int64_t *arr, size_t &size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            removeItem(arr, size, i);
            i--;
        }
    }
}

void inputArr(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void removeItem(int64_t *arr, size_t &size, size_t indexRemove) {
    size--;
    for (size_t i = indexRemove; i < size; ++i) {
        arr[i] = arr[i+1];
    }
}

void outputArray(int64_t *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}