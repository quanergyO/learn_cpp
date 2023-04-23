#include "lab2_class.h"
#include <iostream>

int main(void) {
    int64_t n1, d1, n2, d2;
    std::cin >> n1 >> d1 >> n2 >> d2;
    if (d1 == 0 || d2 == 0)
        throw std::invalid_argument("Division by zero");
    Fraction a(n1, d1);
    Fraction b(n2, d2);
    Fraction sum, sub, div, mul;

    sum = a + b;
    sum.output();
    sub = a - b;
    sub.output();
    mul = a * b;
    mul.output();
    div = a / b;
    div.output();
    sum.reducion();
    sum.output();


    return 0;
}