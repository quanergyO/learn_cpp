#include <iostream>

int main(void) {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    double answer = (double)(a + b) / (double)(c + d);
    printf("%.2lf\n", answer);
    return 0;
}