#include <iostream>

#define SIZE 50;

int main(void) {
    char num[50];
    int len = 0;
    bool flag = true;
    std::cin >> num;
    for (int i = 0; num[i] != '\0'; i++)
        len++;

    for (int i = 0; i < len / 2; i++) {
        if (num[i] != num[len-1-i]) {
            flag = false;
            break;
        }
    }

    flag ? std::cout << "is palindrom" << std::endl
         : std::cout << "is not palindrom" << std::endl;
         
    return 0;
}