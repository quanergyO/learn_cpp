#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::getline(std::cin, str);
    size_t length = str.length();
    for (size_t i = 0; i < length; ++i) {
        if (str[i] == '!') {
            str.insert(i, ",");
            i++;
        }
    }
    std::cout << str << std::endl;

    return 0;
}