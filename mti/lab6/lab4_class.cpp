#include "lab4_class.h"

void Matrix::output() {
    for (size_t i = 0; i < this->rows; ++i) {
        for (size_t j = 0; j < this->cols; ++j) {
            std::cout << this->elements[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matrix::inputMatrix() {
    for (size_t i = 0; i < this->rows; ++i) {
        for (size_t j = 0; j < this->cols; ++j) {
            std::cin >> this->elements[i][j];
        }
    }
}

Matrix Matrix::operator+ (const Matrix &other) {
    if (this->cols != other.cols && this->rows != other.cols) {
        throw std::invalid_argument("Matrices in defferent sizes\n");
    }
    Matrix result(this->rows, this->cols);
    for (size_t i = 0; i < this->cols; ++i) {
        for (size_t j = 0; j < this->rows; j++) {
            result.elements[i][j] = this->elements[i][j] +
                                    other.elements[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator- (const Matrix &other) {
    if (this->cols != other.cols && this->rows != other.cols) {
        throw std::invalid_argument("Matrices in defferent sizes\n");
    }
    Matrix result(this->rows, this->cols);
    for (size_t i = 0; i < this->cols; ++i) {
        for (size_t j = 0; j < this->rows; ++j) {
            result.elements[i][j] = this->elements[i][j] -
                                    other.elements[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator% (int64_t num) {
    Matrix result(this->rows, this->cols);
    for (size_t i = 0; i < this->cols; ++i) {
        for (size_t j = 0; j < this->rows; ++j) {
            result.elements[i][j] = this->elements[i][j] * num;
        }
    }
    return result;
}

Matrix Matrix::operator* (const Matrix &other) {
    if (this->cols != other.rows) {
        throw std::invalid_argument("Can't multiplie this matricies");
    }
    Matrix result(this->rows, other.cols);
    for (size_t i = 0; i < this->rows; ++i) {
        for (size_t j = 0; j < other.cols; ++j) {
            for (size_t k = 0; j < this->cols; ++k) {
                result.elements[i][j];
            }
        }
    }
}