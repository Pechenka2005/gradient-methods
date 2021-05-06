//
// Created by SoKoL on 15.04.2021.
//
#include <iostream>
#include <utility>
#include "ConjugateGradients.h"
#include "MatrixOperation.h"


std::vector<double> ConjugateGradients::evaluate(double eps, std::vector<double> x) {
    std::vector<double> gradient = function.getGradient(x);
    std::vector<double> y = MatrixOperation::mul(gradient, -1);
    int countIteration = 0;
    do {
        for(int i = 0; i < function.getN() && function.getGradientValue(gradient) > eps; i++) {
            countIteration++;
            double learningRate = pow(function.getGradientValue(x), 2) /
                    MatrixOperation::mul(MatrixOperation::mul(function.getA(), y), y);
            std::vector<double> newX = function.createNewValue(x, gradient, learningRate);
            std::vector<double>newGradient = function.createNewValue(gradient, MatrixOperation::mul(getA(), y), learningRate);
            double b = (i == 0) ? 0 : pow(function.getGradientValue(function.getGradient(newX)), 2) /
                    pow(function.getGradientValue(function.getGradient(x)), 2);
            std::vector<double> newY = MatrixOperation::add(MatrixOperation::mul(newGradient, -1), MatrixOperation::mul(y, b));
            x = newX;
            y = newY;
            gradient = newGradient;
        }

    } while (function.getGradientValue(gradient) > eps);
    return std::cout << countIteration, x;
}

ConjugateGradients::ConjugateGradients(Function function) {
    this->function = std::move(function);
}
