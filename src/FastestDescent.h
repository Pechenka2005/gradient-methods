//
// Created by SoKoL on 13.04.2021.
//

#ifndef GRADIENT_METHODS_FASTESTDESCENT_H
#define GRADIENT_METHODS_FASTESTDESCENT_H

#include "Function.h"
#include "GradientMethods.h"

class FastestDescent : Function, GradientMethods {
private:
    double gradient = 0;

public:
    double evaluate(double eps, double x);
};
#endif //GRADIENT_METHODS_FASTESTDESCENT_H
