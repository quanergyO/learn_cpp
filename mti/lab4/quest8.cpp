#include <iostream>
#include <string>

int main(void) {
    std::string str1;
    std::string str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    std::string str3;
    for (size_t i = 0; i < str1.length(); ++i) {
        str3 += str1[i];
        str3 += str2[i];
    }
    std::cout << str3 << std::endl;

    return 0;
}
