#include "lab1_class.h"
#include <iostream>
#include <cmath>

void ComplexNumber::output() {
    printf("%.2lf%+.2lfi\n", this->x, this->y);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) {
    double res_x = this->x + other.x;
    double res_y = this->y + other.y;
    ComplexNumber result(res_x, res_y);
    return result;
}

ComplexNumber ComplexNumber::operator- (const ComplexNumber& other) {
    double res_x = this->x - other.x;
    double res_y = this->y - other.y;
    ComplexNumber result(res_x, res_y);
    return result;
}

ComplexNumber ComplexNumber::operator* (const ComplexNumber& other) {
    double res_x = this->x * other.x - this->y * other.y;
    double res_y = this->x * other.y + other.x * this->y;
    ComplexNumber result(res_x, res_y);
    return result;
}

ComplexNumber ComplexNumber::operator/ (const ComplexNumber& other) {
    double res_x = (this->x * other.x + this->y * other.y) / (other.x * other.x + other.y * other.y);
    double res_y = (other.x * this->x - this->x * other.y) / (other.x * other.x + other.y * other.y);
    ComplexNumber result(res_x, res_y);
    return result;
}

void ComplexNumber::sqrtComplexNumber() {
    double res_x = std::sqrt((std::sqrt(std::pow(this->x, 2)
                 + std::pow(this->y, 2)) + this->x) / 2);
    
    double res_y = std::sqrt((std::sqrt(std::pow(this->x, 2)
                 + std::pow(this->y, 2)) - this->x) / 2);
    this->x = res_x;
    this->y = res_y;
}

