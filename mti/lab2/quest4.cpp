#include <iostream>
#include <cmath>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;
    Point b;
} Line;

double calculate_line(Line line);
bool is_rectangular(double a, double b, double c);

int main(void) {
    Point p1, p2;
    Point p3 = {0, 0};    
    std::cin >> p1.x >> p1.y >> p2.x >> p2.y;
    Line l1 = {p1, p2};
    Line l2 = {p1, p3};
    Line l3 = {p2, p3};
    double a = calculate_line(l1);
    double b = calculate_line(l2);
    double c = calculate_line(l3);
    is_rectangular(a, b, c) ? std::cout << "Yes" << std::endl
                            : std::cout << "No" << std::endl;

    return 0;
}

bool is_rectangular(double a, double b, double c) {
    bool flag = 0;
    if (a * a == b * b + c * c)
        flag = 1;
    else if (b * b == a * a + c * c)
        flag = 1;
    else if (c * c == a * a + b * b)
        flag = 1;
    return flag;
}

double calculate_line(Line line) {
    double dif_x = (line.b.x - line.a.x) * (line.b.x - line.a.x);
    double dif_y = (line.b.y - line.b.y) * (line.b.y - line.b.y);
    double res = sqrt(dif_x + dif_y);
    return res;
}
