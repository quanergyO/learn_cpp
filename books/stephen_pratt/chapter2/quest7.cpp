#include <iostream>

void outputTime(int h, int m);

int main(void) {
    int hours, minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    outputTime(hours, minutes);
    return 0;
}

void outputTime(int h, int m) {
    std::cout << "Time: " << h << ":" << m << std::endl;
}
