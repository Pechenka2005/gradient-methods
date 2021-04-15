//
// Created by SoKoL on 13.04.2021.
//

#ifndef GRADIENT_METHODS_FASTESTDESCENT_H
#define GRADIENT_METHODS_FASTESTDESCENT_H

#include "Function.h"
#include <cmath>

class FastestDescent : Function {
private:
    int countIteration;
    double evaluateLearningRate(std::vector<double> gradient, std::vector<double> x, double eps);
public:
    std::vector<double> evaluate(double eps, std::vector<double> x);
};
#endif //GRADIENT_METHODS_FASTESTDESCENT_H
