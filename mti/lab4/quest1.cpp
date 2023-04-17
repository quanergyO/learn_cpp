#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::getline(std::cin, str);
    for (size_t i = str.length() - 1; i > 0; --i) {
        if (str[i-1] == ' ' and str[i] == ' ') {
            str.erase(i, 1);
        }
    }
    std::cout << str << std::endl;

    return 0;
}