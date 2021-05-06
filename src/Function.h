//
// Created by llSoK on 13.04.2021.
//

#ifndef GRADIENT_METHODS_FUNCTION_H
#define GRADIENT_METHODS_FUNCTION_H
/*
 * А сlass is a wrapper over a math function
*/

#include <vector>
#include "MatrixOperation.h"

class Function {
private:
     std::vector<std::vector<double>> A;
     std::vector<double> B;
     double C;
     int n;
public:
    Function(const std::vector<std::vector<double>> &a, const std::vector<double> &b, double c);

    Function();

    /*
     * The method that evaluates the function
     * param1: argument to evaluate the function
     */
    double evaluate(const std::vector<double>& x);

    int getN() const;
    std::vector<std::vector<double>> getA();

    std::vector<double> createNewValue(const std::vector<double>& x, const std::vector<double>& gradient, double learningRate);
    double getGradientValue(const std::vector<double>& gradient);
    std::vector<double> getGradient(const std::vector<double>& x);
};

#endif //GRADIENT_METHODS_FUNCTION_H
