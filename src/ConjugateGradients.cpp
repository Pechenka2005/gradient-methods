//
// Created by SoKoL on 15.04.2021.
//

#include "ConjugateGradients.h"
#include "MatrixOperation.h"


std::vector<double> ConjugateGradients::evaluate(double eps, std::vector<double> x) {
    std::vector<double> gradient = Function::getGradient(x);
    std::vector<double> y = MatrixOperation::mul(gradient, -1);
    do {
        for(int i = 0; i < Function::getN() && Function::getGradientValue(gradient) > eps; i++) {
            countIteration++;
            double learningRate = pow(Function::getGradientValue(x), 2) /
                    MatrixOperation::mul(MatrixOperation::mul(Function::getA(), y), y);
            std::vector<double> newX = Function::createNewValue(x, gradient, learningRate);
            std::vector<double>newGradient = Function::createNewValue(gradient, MatrixOperation::mul(getA(), y), learningRate);
            double b = (i == 0) ? 0 : pow(Function::getGradientValue(Function::getGradient(newX)), 2) /
                    pow(Function::getGradientValue(Function::getGradient(x)), 2);
            std::vector<double> newY = MatrixOperation::add(MatrixOperation::mul(newGradient, -1), MatrixOperation::mul(y, b));
            x = newX;
            y = newY;
            gradient = newGradient;
        }

    } while (Function::getGradientValue(gradient) > eps);
    return x;
}

ConjugateGradients::ConjugateGradients(Function function) {
    this->function = function;
    countIteration = 0;
}
