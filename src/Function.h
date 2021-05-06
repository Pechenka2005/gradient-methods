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
    static std::vector<std::vector<double>> A;
    static std::vector<double> B;
    static double C;
    static int n;
public:
    Function(const std::vector<std::vector<double>> &a, const std::vector<double> &b, double c);

    Function();

public:
    /*
     * The method that evaluates the function
     * param1: argument to evaluate the function
     */
    static double evaluate(const std::vector<double>& x);

protected:
    static int getN();
    static std::vector<std::vector<double>> getA();

    static std::vector<double> createNewValue(const std::vector<double>& x, const std::vector<double>& gradient, double learningRate);
    static double getGradientValue(const std::vector<double>& gradient);
    static std::vector<double> getGradient(const std::vector<double>& x);
};

#endif //GRADIENT_METHODS_FUNCTION_H
