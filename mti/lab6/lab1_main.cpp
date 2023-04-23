#include "lab1_class.h"
#include <iostream>

int main(void) {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    ComplexNumber a(x1, y1);
    ComplexNumber b(x2, y2);
    ComplexNumber sum, sub, div, mul, sqrtNum;
    sum = a + b;
    sum.output();
    sub = a - b;
    sub.output();
    mul = a * b;
    mul.output();
    div = a / b;
    div.output();
    a.sqrtComplexNumber();
    a.output();

    return 0;
}
