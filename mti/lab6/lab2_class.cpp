#include "lab2_class.h"
#include <iostream>

void Fraction::output() {
    std::cout << this->numerator << "\n-\n" << this->denominator << "\n\n";
}

void Fraction::reducion() {
    int64_t min = this->numerator > this->denominator ?
                  this->denominator : this->numerator;
    for (size_t i = min; i > 1; --i) {
        if (this->numerator % i == 0 && this->denominator % i == 0) {
            this->numerator /= i;
            this->denominator /= i;
            i++;
        }
    }
}

Fraction Fraction::operator+ (const Fraction& other) {
    int64_t denominator = this->denominator * other.denominator;
    int64_t numerator = this->numerator * other.denominator +
                        other.numerator * this->denominator;
    Fraction result(numerator, denominator);
    return result;
}

Fraction Fraction::operator- (const Fraction& other) {
    int64_t denominator = this->denominator * other.denominator;
    int64_t numerator = this->numerator * other.denominator -
                        other.numerator * this->denominator;
    Fraction result(numerator, denominator);
    return result;
}

Fraction Fraction::operator* (const Fraction& other) {
    int64_t numerator = this->numerator * other.numerator;
    int64_t denominator = this->denominator * other.denominator;
    Fraction result(numerator, denominator);
    return result;
}

Fraction Fraction::operator/ (const Fraction& other) {
    if (other.numerator == 0) {
        throw std::invalid_argument("Division by zero");
    }
    int64_t numerator = this->numerator * other.denominator;
    int64_t denominator = this->denominator * other.numerator;
    Fraction result(numerator, denominator);
    return result;
}
