#include <iostream>

class Matrix {
public:
    Matrix() {}
    Matrix(size_t rows, size_t cols) {
        this->rows = rows;
        this->cols = cols;
        this->elements = new int*[this->rows];
        if (this->elements == nullptr) {
            throw std::invalid_argument("Memory allocation error\n");
        }
        this->elements[0] = new int[this->rows * this->cols];
        if (this->elements[0] == nullptr) {
            throw std::invalid_argument("Memory allocation error\n");
        }
        for (size_t i = 0; i < this->rows; ++i) {
            this->elements[i] = this->elements[0] + i * cols;
        }
    }
    Matrix(size_t rows, size_t cols, int *elements) : Matrix(rows, cols) {
        size_t index = 0;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                this->elements[i][j] = elements[index++];
            }
        }
    }
    ~Matrix() {
        delete[] this->elements[0];
        delete[] this->elements;
    }

    void inputMatrix();
    int64_t determiner();
    void output();

    Matrix operator+ (const Matrix &other);
    Matrix operator- (const Matrix &other);
    Matrix operator* (const Matrix &other);
    Matrix operator% (int64_t num);

private:
    size_t rows;
    size_t cols;
    int **elements;
};

int main(void) {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl << a * b << std::endl;
    return 0;
}