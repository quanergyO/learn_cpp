#ifndef LAB2_CLASS_H
#define LAB2_CLASS_H
#include <cstdint>
#include <functional>

class Fraction {
public:
    Fraction() {}
    Fraction(int64_t numerator, int64_t denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    ~Fraction() {}

    void output();
    void reducion();
    Fraction operator+ (const Fraction& other);
    Fraction operator- (const Fraction& other);
    Fraction operator* (const Fraction& other);
    Fraction operator/ (const Fraction& other);
    
private:
    int64_t numerator;
    int64_t denominator;
};

#endif