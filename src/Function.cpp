//
// Created by SoKoL on 14.04.2021.
//

#include "Function.h"

double Function::evaluate(const std::vector<double>& x) {
    return 0.5 * MatrixOperation::mul(MatrixOperation::mul(x, A), x) + MatrixOperation::mul(B, x) + C;
}

double Function::getCoefficient(int index) {
    return coefficients[index];
}

int Function::getN() const {
    return n;
}

Function::Function(const std::vector<std::vector<double>> &a, const std::vector<double> &b,
                   const std::vector<double> &coefficients, double c) {
    Function::A = a;
    Function::B = b;
    Function::coefficients = coefficients;
    Function::C = c;
    Function::n = (int)a.size() * 1000;

}

std::vector<double> Function::getGradient(const std::vector<double> &x) {
    return MatrixOperation::add(MatrixOperation::mul(x, A), B);
}
