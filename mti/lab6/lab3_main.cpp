#include "lab3_class.h"

int main(void) {
    int64_t x1, y1, x2, y2, mul;
    std::cin >> x1 >> y1 >> x2 >> y2;
    Vector v1(x1, y1), v2(x2, y2);
    Vector sum, scaMul;
    sum = v1 + v2;
    scaMul = v1 % v2;
    mul = v1 * v2;
    sum.output();
    scaMul.output();
    std::cout << mul << std::endl;


    return 0;
}