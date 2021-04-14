//
// Created by SoKoL on 15.04.2021.
//

#ifndef GRADIENT_METHODS_MATRIXOPERATION_H
#define GRADIENT_METHODS_MATRIXOPERATION_H

#include <vector>

class MatrixOperation {
protected:
    static std::vector<double> mul(std::vector<double> a, std::vector<std::vector<double>> b);
    static std::vector<double> mul(std::vector<std::vector<double>> a,  std::vector<double> b);
    static double mul(std::vector<double> a, std::vector<double> b);
    static std::vector<double> mul(std::vector<double> a, double b);
    static std::vector<double> add(std::vector<double> a, std::vector<double> b);
    static std::vector<double> sub(std::vector<double> a, std::vector<double> b);

};


#endif //GRADIENT_METHODS_MATRIXOPERATION_H
