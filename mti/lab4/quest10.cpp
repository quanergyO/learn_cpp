#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::getline(std::cin, str);
    std::string newString;
    for (int i = str.length() - 1; i >= 0; --i) {
        newString += str[i];
    }

    std::cout << newString << std::endl;


    return 0;
}