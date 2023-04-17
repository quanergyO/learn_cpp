#include <iostream>
#include <cmath>

int find_index(double *array, int len, double S);
void input_array(double *array, int len);

int main(void) {
    int n;
    double S;
    std::cin >> n;
    double *array = new double[n];
    input_array(array, n);
    std::cin >> S;
    int index = find_index(array, n, S);

    std::cout << "index = " << index <<
    " value = " << array[index] << std::endl;

    delete[] array;

    return 0;
}

int find_index(double *array, int len, double S) {
    int find = 0;
    double max_range = abs(S - array[0]);
    for (int i = 1; i < len; i++) {
        double range = abs(S - array[i]);
        if (range > max_range) {
            find = i;
            max_range = range;
        }
    }

    return find;
}

void input_array(double *array, int len) {
    for (int i = 0; i < len; i++) {
        std::cin >> array[i];
    }
}