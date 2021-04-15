//
// Created by SoKoL on 13.04.2021.
//

#include "GradientDescent.h"
#include <vector>

std::vector<double> GradientDescent::evaluate(double learningRate, double eps, std::vector<double> x) {

    std::vector<double> gradient;
    countIteration = 0;
    double Fx = Function::evaluate(x);
    do {
        gradient = Function::getGradient(x);
        while (true) {
            std::vector<double> y = Function::createNewValue(x, gradient, learningRate);
            double Fy = Function::evaluate(y);
            if (Fx < Fy) {
                x = y;
                Fx = Fy;
                break;
                countIteration++;
            } else {
                learningRate /= 2;
            }
        }
    } while (Function::getGradientValue(gradient) >= eps);
    return x;

}
