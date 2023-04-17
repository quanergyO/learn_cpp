#include <iostream>

int main(void) {
    char name[50];
    int year;
    char live[100];
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "How old are you? ";
    std::cin >> year;
    std::cout << "Where are you live? ";
    std::cin >> live;

    std::cout << "This is " << name << std::endl;
    std::cout << "It is " << year << std::endl;
    std::cout << "(S)he live in " << live << std::endl;
    return 0;
}