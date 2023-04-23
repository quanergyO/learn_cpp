#ifndef LAB3_CLASS_H
#define LAB3_CLASS_H
#include <iostream>

class Vector {
public:
    Vector() {}
    Vector(int64_t x, int64_t y);
    ~Vector() {}

    Vector operator+ (const Vector& other);
    int64_t operator* (const Vector& other);
    Vector operator%(const Vector& other);

    size_t length();
    void output();

private:
    int64_t x;
    int64_t y;
    size_t len;
};

#endif