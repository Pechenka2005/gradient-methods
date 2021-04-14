//
// Created by SoKoL on 13.04.2021.
//

#include "GradientDescent.h"

double GradientDescent::evaluate(double learningRate, double eps, double x) {
    double gradientFunction = findGradient();
    double fx = Function::evaluate(x), fy;
    while (gradientFunction > eps) {
        double y = x - learningRate * gradientFunction;
        fy = Function::evaluate(y);
        if (fy < fx) {
            x = y;
            fx = fy;
        } else {
            learningRate /= 2;
        }
        gradientFunction = findGradient();
    }
    return 0;

}
