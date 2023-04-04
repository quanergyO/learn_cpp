#include <iostream>

int main(void) {
    double ligthYears;
    std::cout << "Enter the number of ligth years: ";
    std::cin >> ligthYears;
    std::cout << ligthYears << " ligth years = "  << ligthYears * 63240 << " astronomical units." << std::endl;
    return 0;
}
