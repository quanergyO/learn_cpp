#include <iostream>
#include <string>

int main(void) {
    std::string str;
    for (char symbol = 'A'; symbol <= 'Z'; ++symbol)
        str += symbol;
    std::cout << str << std::endl;
    
    return 0;
}