#include "lab1_class.h"
#include <iostream>

void ComplexNumber::output() {
    printf("%d%+di\n", this->x, this->y);
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

ComplexNumber ComplexNumber::operator* (const ComplexNumber& other) {
    int64_t res_x = this->x * other.x - this->y * other.y;
    int64_t res_y = this->x * other.y + other.x * this->y;
    ComplexNumber result(res_x, res_y);
    return result;
}

ComplexNumber ComplexNumber::operator/ (const ComplexNumber& other) {
    int64_t res_x = (this->x * other.x + this->y * other.y) / (other.x * other.x + other.y * other.y);
    int64_t res_y = (other.x * this->x - this->x * other.y) / (other.x * other.x + other.y * other.y);
    ComplexNumber result(res_x, res_y);
    return result;
}

//TODO operators (/, *) method (sqrt)

