//
// Created by SoKoL on 13.04.2021.
//

#ifndef GRADIENT_METHODS_GRADIENTDESCENT_H
#define GRADIENT_METHODS_GRADIENTDESCENT_H
#include "Function.h"
#include "GradientMethods.h"

class GradientDescent : Function, GradientMethods {
private:
    double gradient = 0;

public:
   double evaluate(double learningRate, double eps, double x);
};


#endif //GRADIENT_METHODS_GRADIENTDESCENT_H
