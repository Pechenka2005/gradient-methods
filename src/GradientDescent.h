//
// Created by SoKoL on 13.04.2021.
//

#ifndef GRADIENT_METHODS_GRADIENTDESCENT_H
#define GRADIENT_METHODS_GRADIENTDESCENT_H
#include "Function.h"
#include <vector>

class GradientDescent : Function {
private:

    static int countIteration;
    Function function;
public:
    explicit GradientDescent(Function function);
public:
    static std::vector<double> evaluate(double learningRate, double eps, std::vector<double> x);

};


#endif //GRADIENT_METHODS_GRADIENTDESCENT_H
