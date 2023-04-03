#include <iostream>

double celToFahr(double cel);

int main(void) {
    std::cout << "Please enter a Celsius value: ";
    double celsius;
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " << celToFahr(celsius) << " degrees Fahrenheit." << std::endl;
    
    return 0;
}

double celToFahr(double cel) {
    return 1.8 * cel + 32;
}
