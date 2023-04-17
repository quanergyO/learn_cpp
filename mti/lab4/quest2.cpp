#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::getline(std::cin, str);
    size_t count;
    bool isSpace = false;
    str.empty() ? count = 0 : count = 1;
    for (char symbol : str) {
        if (symbol == ' ') {
            isSpace = true;
            continue;
        }
        if (isSpace) {
            count++;
            isSpace = false;
        }
    }

    std::cout << count << std::endl;

    return 0;
}