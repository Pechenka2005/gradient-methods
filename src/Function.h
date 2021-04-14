//
// Created by llSoK on 13.04.2021.
//

#ifndef GRADIENT_METHODS_FUNCTION_H
#define GRADIENT_METHODS_FUNCTION_H
/*
 * А сlass is a wrapper over a math function
*/

class Function {
public:
    /*
     * The method that evaluates the function
     * param1: argument to evaluate the function
     */
    static double evaluate(double x);
};
#endif //GRADIENT_METHODS_FUNCTION_H
