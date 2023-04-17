#include <iostream>

int * find_dividers(int num, int *len);
bool is_coincidences(int *div1, int len1, int *div2, int len2);

int main(void) {
    int num1, num2;
    std::cin >> num1 >> num2;
    int len1 = 0, len2 = 0;
    int * dividers1 = find_dividers(num1, &len1);
    int * dividers2 = find_dividers(num2, &len2);
    (is_coincidences(dividers1, len1, dividers2, len2)) ?
    std::cout << "No" << std::endl :
    std::cout << "Yes" << std::endl;

    delete[] dividers1;
    delete[] dividers2;

    return 0;
}

bool is_coincidences(int *div1, int len1, int *div2, int len2) {
    bool flag = false;
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (div1[i] == div2[j]) {
                flag = true;
                return flag;
            }
        }
    }
    return flag;
}

int * find_dividers(int num, int *len) {
    int * array = new int[num/2];
    int k = 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            array[k++] = i;
        }
    }
    *len = k;

    return array;
}