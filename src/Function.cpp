//
// Created by SoKoL on 14.04.2021.
//

#include "Function.h"

double Function::evaluate(std::vector<double> x) {
    return 0;
}

std::vector<std::vector<double>> Function::getMatrix() {
    return matrix;
}

double Function::getCoefficient(int index) {
    return coefficients[index];
}

std::vector<double> Function::getLineMatrix(int index) {
    return matrix[index];
}

int Function::getN() const {
    return n;
}
