#include <iostream>
#include <cmath>

int num_marsen(int x);

int main(void) {
    int num;
    std::cin >> num;
    int n = 1;
    int marsen;
    while ((marsen = num_marsen(n++)) < num)
    ;
    (marsen == num) ? std::cout << "Yes" << std::endl
                    : std::cout << "No" << std::endl;    

    return 0;
}

int num_marsen(int x) {
    return pow(2, x) - 1;
}