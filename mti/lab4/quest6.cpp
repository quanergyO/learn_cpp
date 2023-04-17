#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::string tmpStr;
    std::getline(std::cin, str);
    for (char symbol : str) {
        tmpStr += symbol;
        if (symbol == '*')
            tmpStr += ' ';
    }
    str = tmpStr;
    std::cout << str << std::endl;

    return 0;
}