#include <iostream>
#include <cmath>

void inputArray(double *arr, size_t size);
void outputArray(double *arr, size_t size);
double findMax(double *arr, size_t size, size_t &count);
double findMin(double *arr, size_t size, size_t &count);

int main(void) {
    size_t size;
    std::cin >> size;
    double *arr = new double[size];
    inputArray(arr, size);
    size_t countMax, countMin;
    double maxNumber = findMax(arr, size, countMax);
    double minNumber = findMin(arr, size, countMin);
    std::cout << "Min value = " << minNumber << " count = " << countMin << std::endl;
    std::cout << "Max value = " << maxNumber << " count = " << countMax << std::endl;

    delete[] arr;

    return 0;
}

double findMin(double *arr, size_t size, size_t &countS) {
    double epsilon = std::numeric_limits<double>::epsilon();
    double min = std::abs(arr[0]);
    size_t count = 1;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = std::abs(arr[i]);
            count = 1;
        }
        else if (std::abs(arr[i] - min) < epsilon) {
            count++;
        }
    }
    countS = count;

    return min;
}

double findMax(double *arr, size_t size, size_t &countS) {
    double epsilon = std::numeric_limits<double>::epsilon();
    double max = std::abs(arr[0]);
    size_t count = 1;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = std::abs(arr[i]);
            count = 1;
        }
        else if (std::abs(arr[i] - max) < epsilon) {
            count++;
        }
    }
    countS = count;

    return max;
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
