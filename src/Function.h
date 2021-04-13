//
// Created by llSoK on 13.04.2021.
//

#include "Function.h"
#include <vector>
#include <utility>

/*
 * Class describing Fibonacci method on a given interval
 */
class Fibonacci : Function {
private:
    double a, b, eps;
    int maxNumberOfFib = 50;
    int fib[100]{};

    /*
     * finding the number of the fibonacci
     * number to execute the method
     */
    int find_n();

    /*
     * finding the fibonacci number
     * to execute the method
     */
    void find_fibonacci();

    /*
     * finding the first division point of the current segment
     * param1: left border current interval
     * param2: right border current interval
     * param3: iteration number
     */
    double find_x1(double a, double b, int n) const;

    /*
     * finding the second division point of the current segment
     * param1: left border current interval
     * param2: right border current interval
     * param3: iteration number
     */
    double find_x2(double a, double b, int n) const;

    std::vector<std::pair<double, double> > intervals;

public:
    /*
     * Constructor
     * param1: Left border a given interval
     * param2: Right border a given interval
     * param3: (epsilon) accuracy
     */
    Fibonacci(double a, double b, double eps) {
        this->a = a;
        this->b = b;
        this->eps = eps;
    }

    void setValue(double a, double b, double eps);

    /*
     * A method that computes the minimum of a given
     * function using Fibonacci method
     */
    double evaluate();

    std::vector<std::pair<double, double> > getIntervals();
};

#ifndef GRADIENT_METHODS_FUNCTION_H
#define GRADIENT_METHODS_FUNCTION_H

#endif //GRADIENT_METHODS_FUNCTION_H
