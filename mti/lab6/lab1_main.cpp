#include "lab1_class.h"

int main(void) {
    ComplexNumber a(5, 2);
    ComplexNumber b(3, 8);
    ComplexNumber c;
    c = a + b;
    c.output();
    return 0;
}
