#include <iostream>
#include <string>

int main(void) {
    std::string str;
    for (char symbol = 'a'; symbol <= 'z'; ++symbol)
        str += symbol;
    std::cout << str << std::endl;
    
    return 0;
}