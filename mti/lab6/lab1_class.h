#ifndef LAB1_CLASS_H
#define LAB1_CLASS_H
#include <cstdint>

class ComplexNumber {
public:
    ComplexNumber() {}
    ComplexNumber(int64_t x, int64_t y) {
    this->x = x;
    this->y = y;
}
    ~ComplexNumber() {}

    void output();
    ComplexNumber operator+ (const ComplexNumber& other);
    ComplexNumber operator- (const ComplexNumber& other);
    ComplexNumber operator* (const ComplexNumber& other);
    ComplexNumber operator/ (const ComplexNumber& other);

private:
    int64_t x;
    int64_t y;
};


#endif