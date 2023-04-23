#include "lab3_class.h"
#include <cmath>

Vector::Vector(int64_t x, int64_t y) {
    this->x = x;
    this->y = y;
    this->len = this->length();
}

Vector Vector::operator+ (const Vector& other) {
    int64_t x = this->x + other.x;
    int64_t y = this->y + other.y;
    Vector result(x, y);
    return result;
}

int64_t Vector::operator* (const Vector& other) {
    int64_t result = this->x * this->y + other.x * other.y;
    return result;
}

Vector Vector::operator%(const Vector& other) {
    int64_t x = this->x * other.x;
    int64_t y = this->y * other.y;
    Vector result(x, y);
    return result;
}

size_t Vector::length() {
    size_t len = std::abs(std::sqrt(std::pow(this->x, 2) + std::pow(this->y, 2)));
    return len;
}

void Vector::output() {
    std::cout << this->x << " " << this->y << std::endl;
}