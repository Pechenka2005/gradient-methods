//
// Created by llSoK on 13.04.2021.
//

#ifndef GRADIENT_METHODS_FUNCTION_H
#define GRADIENT_METHODS_FUNCTION_H
/*
 * А сlass is a wrapper over a math function
*/

#include <vector>

class Function {
private:
    std::vector<std::vector<double>> matrix;
    std::vector<double> coefficients;
    int n;
public:
    /*
     * The method that evaluates the function
     * param1: argument to evaluate the function
     */
    static double evaluate(std::vector<double> x);
    std::vector<std::vector<double>> getMatrix();
    std::vector<double> getLineMatrix(int index);
    int getN() const;
    double getCoefficient(int index);
};

#endif //GRADIENT_METHODS_FUNCTION_H
