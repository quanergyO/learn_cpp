#include <iostream>

void output_1(void);
void output_2(void);

int main(void) {
    output_1(); 
    output_1();
    output_2();
    output_2();
    return 0;
}

void output_1(void) {
    std::cout << "There blind mice" << std::endl;
}

void output_2(void) {
    std::cout << "See how they run" << std::endl;
}
