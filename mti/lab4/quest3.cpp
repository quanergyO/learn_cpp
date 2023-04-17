#include <iostream>
#include <string>
#include <cctype>

int main(void) {
    std::string str;
    std::getline(std::cin, str);

    for (size_t i = 0; i < str.length(); ++i) {
        if (std::isalpha(str[i])) {
            str[i] = '*';
        }
    }

    std::cout << str << std::endl;

    return 0;
}