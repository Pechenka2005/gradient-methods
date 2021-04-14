//
// Created by SoKoL on 13.04.2021.
//

#include "GradientDescent.h"

double GradientDescent::evaluate(double learningRate, double eps, std::vector<double> x) {
    double gradientFunction = findGradient(Function::getLineMatrix(0), x,
                                           Function::getCoefficient(0), Function::getN());
    double fx = Function::evaluate(x), fy;
    int pos = 0;
    while (gradientFunction > eps) {
        std::vector<double> y = x - learningRate * gradientFunction;
        fy = Function::evaluate(y);
        if (fy < fx) {
            x = y;
            fx = fy;
        } else {
            learningRate /= 2;
        }
        pos++;
        gradientFunction = findGradient(Function::getLineMatrix(pos), x,
                                        Function::getCoefficient(pos), Function::getN());;
    }
    return 0;

}
