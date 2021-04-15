//
// Created by SoKoL on 13.04.2021.
//

#include "FastestDescent.h"

std::vector<double> FastestDescent::evaluate(double eps, std::vector<double> x) {
    std::vector<double> gradient;
    countIteration = 0;
    do {
        countIteration++;
        gradient = Function::getGradient(x);
        double learningRate = evaluateLearningRate(gradient, x, eps);
        x = Function::createNewValue(x, gradient, learningRate);


    } while (Function::getGradientValue(gradient) >= eps);
    return x;
}

double FastestDescent::evaluateLearningRate(std::vector<double> gradient, std::vector<double> x, double eps) {
    double phi = 1.6180339887, x1, x2, y1, y2, left = 0, right = 0.01;
    x1 = right - ((right - left) / phi);
    x2 = left + ((right - left) / phi);
    y1 = Function::evaluate(Function::createNewValue(x, gradient, x1));
    y2 = Function::evaluate(Function::createNewValue(x, gradient, x2));
    while (abs(right - left) > eps) {
        if (y1 <= y2) {
            right = x2;
            x2 = x1;
            x1 = right - ((right - left) / phi);
            y2 = y1;
            y1 = Function::evaluate(Function::createNewValue(x, gradient, x1));
        } else {
            left = x1;
            x1 = x2;
            x2 = left + ((right - left) / phi);
            y1 = y2;
            y2 = Function::evaluate(Function::createNewValue(x, gradient, x2));
        }
    }
    return (right + left) / 2;
}
}