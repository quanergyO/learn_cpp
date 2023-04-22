#include "lab1_class.h"
#include <iostream>

void ComplexNumber::output() {
    std::cout << "z = " << x << " + " << y << "i" << std::endl;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) {
    int64_t res_x = this->x + other.x;
    int64_t res_y = this->y + other.y;
    ComplexNumber result(res_x, res_y);
    return result;
}

ComplexNumber ComplexNumber::operator- (const ComplexNumber& other) {
    int64_t res_x = this->x - other.x;
    int64_t res_y = this->y - other.y;
    ComplexNumber result(res_x, res_y);
    return result;
}

//TODO operators (/, *) method (sqrt)

