#ifndef LAB1_CLASS_H
#define LAB1_CLASS_H

class ComplexNumber {
public:
    ComplexNumber() {}
    ComplexNumber(double x, double y) {
    this->x = x;
    this->y = y;
}
    ~ComplexNumber() {}

    void output();
    void sqrtComplexNumber();
    ComplexNumber operator+ (const ComplexNumber& other);
    ComplexNumber operator- (const ComplexNumber& other);
    ComplexNumber operator* (const ComplexNumber& other);
    ComplexNumber operator/ (const ComplexNumber& other);

private:
    double x;
    double y;
};


#endif