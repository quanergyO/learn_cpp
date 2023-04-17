#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::getline(std::cin, str);
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            str.insert(i, " ");
            i++;
        }
    }

    std::cout << str << std::endl;

    return 0;
}