#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::getline(std::cin, str);
    str.append(std::to_string(str.length()));
    std::cout << str << std::endl;

    return 0;
}