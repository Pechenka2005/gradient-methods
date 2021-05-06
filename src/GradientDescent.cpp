//
// Created by SoKoL on 13.04.2021.
//

#include "GradientDescent.h"
#include <utility>
#include <vector>
#include <iostream>

std::vector<double> GradientDescent::evaluate(double learningRate, double eps, std::vector<double>& x) {

    std::vector<double> gradient;
    int countIteration = 0;
    double Fx = function.evaluate(x);
    do {
        gradient = function.getGradient(x);
        countIteration++;
        while (true) {
            std::vector<double> y = function.createNewValue(x, gradient, learningRate);
            double Fy = function.evaluate(y);
            if (Fy < Fx) {
                countIteration++;
                x = y;
                Fx = Fy;
                break;
            } else {
                learningRate /= 2;
            }
        }
    } while (function.getGradientValue(gradient) >= eps && countIteration <= 1000);
    return std::cout << "CountIteration: " << countIteration << "\n", x;

}

GradientDescent::GradientDescent(Function function){
    this->function = std::move(function);
}