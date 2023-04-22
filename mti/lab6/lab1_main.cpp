#include "lab1_class.h"

int main(void) {
    ComplexNumber a(5, 2);
    ComplexNumber b(3, -4);
    ComplexNumber sum, sub, div, mul;
    sum = a + b;
    sum.output();
    sub = a - b;
    sub.output();
    div = a / b;
    div.output();
    mul = a * b;
    mul.output();

    return 0;
}
