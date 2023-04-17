#include <iostream>

bool is_good(char *num, int len);

int main(void) {
    char num[50];
    std::cin >> num;
    int len = 0;
    while (num[len++] != '\0')
    ;
    is_good(num, len) ? std::cout << "Yes" << std::endl
                      : std::cout << "No" << std::endl;

    return 0;
}

bool is_good(char *num, int len) {
    bool flag = true;
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (num[i] == num[j]) {
                flag = false;
                break;
            }
        }
    }
    return flag;
}