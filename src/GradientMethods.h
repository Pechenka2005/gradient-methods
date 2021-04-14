//
// Created by SoKoL on 13.04.2021.
//

#ifndef GRADIENT_METHODS_GRADIENTMETHODS_H
#define GRADIENT_METHODS_GRADIENTMETHODS_H

#include <vector>

class GradientMethods {
protected:
    double findGradient(std::vector<double> a, std::vector<double> x, double b, int n);
};
#endif //GRADIENT_METHODS_GRADIENTMETHODS_H
