#include "lab1_class.h"

int main(void) {
    ComplexNumber a(5, 2);
    ComplexNumber b(3, -4);
    ComplexNumber sum, sub, div, mul;
    sum = a + b;
    sum.output();
    sub = a - b;
    sub.output();
    mul = a * b;
    mul.output();
    div = a / b;
    div.output();

    return 0;
}
