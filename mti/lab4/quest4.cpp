#include <iostream>
#include <string>
#include <cctype>

int main(void) {
    std::string str;
    std::string str2;
    std::getline(std::cin, str);
    for (size_t i = 0; i < str.length(); ++i) {
        if (!std::isalpha(str[i])) {
            str2 += str[i];
        }
    }
    str = str2;

    std::cout << str << std::endl;

    return 0;
}