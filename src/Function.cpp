//
// Created by SoKoL on 14.04.2021.
//

#include "Function.h"

double Function::evaluate(const std::vector<double>& x) {
    return 0.5 * MatrixOperation::mul(MatrixOperation::mul(x, A), x) + MatrixOperation::mul(B, x) + C;
}

int Function::getN() const {
    return n;
}

Function::Function(const std::vector<std::vector<double>> &a, const std::vector<double> &b, double c) {
    Function::A = a;
    Function::B = b;
    Function::C = c;
    Function::n = (int)a.size() * 1000;

}

std::vector<double> Function::getGradient(const std::vector<double> &x) {
    return MatrixOperation::add(MatrixOperation::mul(x, A), B);
}

std::vector<double> Function::createNewValue(const std::vector<double>& x, const std::vector<double>& gradient,
                                                    double learningRate) {
    int n = x.size();
    std::vector<double> coordinates(n);
    for (int i = 0; i < n; i++) {
        coordinates[i] = x[i] - learningRate * gradient[i];
    }
    return coordinates;
}

double Function::getGradientValue(const std::vector<double>& gradient) {
    double ans = 0;

    for (auto i : gradient) {
        ans += i * i;
    }
    return ans;
}

std::vector<std::vector<double>> Function::getA() {
    return A;
}

Function::Function() = default;
