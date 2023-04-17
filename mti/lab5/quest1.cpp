#include <iostream>
#include <limits>

void inputArray(int64_t* arr, size_t size);
void outputArray(int64_t* arr, size_t size);
int64_t* sumTwoArray(int64_t* arr1, size_t size1, int64_t* arr2, size_t size2);
bool isPerfectNumber(int64_t number);
int64_t findIndexLastPerfectNumber(int64_t* arr, size_t size);
double arithmeticAverage(int64_t* arr, size_t size, int64_t index);


int main(void) {
    size_t SIZE1, SIZE2;
    std::cin >> SIZE1 >> SIZE2;
    int64_t* arr1 = new int64_t[SIZE1];
    int64_t* arr2 = new int64_t[SIZE2];
    inputArray(arr1, SIZE1);
    inputArray(arr2, SIZE2);

    int64_t* newArray = sumTwoArray(arr1, SIZE1, arr2, SIZE2);
    int64_t index = findIndexLastPerfectNumber(newArray, SIZE1 + SIZE2);
    double average = arithmeticAverage(newArray, SIZE1 + SIZE2, index);
    std::cout << average << std::endl;

    delete[] arr1;
    delete[] arr2;
    delete[] newArray;

    return 0;
}

double arithmeticAverage(int64_t* arr, size_t size, int64_t index) {
    double average = 0.0;
    for (int64_t i = index + 1; i < static_cast<int64_t>(size); ++i) {
        average += arr[i];
    }

    return average / (size - index - 1);
}

int64_t findIndexLastPerfectNumber(int64_t* arr, size_t size) {
    /*
        return index in array. If number not found return maxNumber<int64_t> - 1
    */
    int64_t index = std::numeric_limits<int64_t>::max() - 1;
    for (int64_t i = 0; i < size; ++i) {
        if (isPerfectNumber(arr[i])) {
            index = i;
        }
    }

    return index;
}

bool isPerfectNumber(int64_t number) {
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

int64_t* sumTwoArray(int64_t* arr1, size_t size1, int64_t* arr2, size_t size2) {
    int64_t* arr = new int64_t[size1 + size2];
    size_t index = 0;
    for (size_t i = 0; i < size1; ++i) {
        arr[index++] = arr1[i];
    }

    for (size_t i = 0; i < size2; ++i) {
        arr[index++] = arr2[i];

    }

    return arr;
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
