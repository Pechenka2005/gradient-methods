//
// Created by SoKoL on 13.04.2021.
//

#include "GradientMethods.h"

double GradientMethods::findGradient(std::vector<double> a, std::vector<double> x, double b, int n) {
    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] * x[i]);
    }

    return ans + b;
}
