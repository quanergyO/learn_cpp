#include <iostream>

int fib_rec(int n);

int main(void) {
    int num, fib;
    int n = 1;
    std::cin >> num;
    while ((fib = fib_rec(n++)) < num)
    ;
    (fib == num) ? std::cout << "is fibonaci" << std::endl
                 : std::cout << "is not fibonaci" << std::endl;
    return 0;
}

int fib_rec(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fib_rec(n-1) + fib_rec(n-2);
}