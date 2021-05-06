#include <iomanip>
#include <algorithm>
#include <iostream>
#include <vector>
#include "Function.h"
#include "FastestDescent.h"
#include "ConjugateGradients.h"
#include "GradientDescent.h"
using namespace std;


int main() {
    for (int i = 10; i <= 1000; i += 50) {
        vector<vector<double>> a(i);
        for (int j = 0; j < i; j++) {
            a[j].resize(i);
        }
        for (int j = 0; j < i; j++) {
            a[j][j] = 2;
        }

        vector<double> b(i);
        double c = 0;
        vector<double> x(i, 3);
        Function function = Function(a, b, c);
        GradientDescent gradientDescent = GradientDescent(function);
        ConjugateGradients conjugateGradients = ConjugateGradients(function);
        FastestDescent fastestDescent = FastestDescent(function);
        vector<double> ansGradient = gradientDescent.evaluate(0.1, 0.0000001, x);
        std::cout << fixed << setprecision(3);
        std::cout << "result for Gradient: ";
        for (double j : ansGradient) {
            std::cout << j << " ";
        }
        std::cout << "\n";
        vector<double>ansConjugate = conjugateGradients.evaluate(0.0001, x);
        std::cout << "result for Conjurugate: ";
        for (double j : ansConjugate) {
            std::cout << j << " ";
        }
        std::cout << "\n";
        vector<double>ansFastest = fastestDescent.evaluate(0.0001, x);
        std::cout << "result for Fastest: ";
        for (double j : ansFastest) {
            std::cout << j << " ";
        }
        std::cout << "\n";

    }
    return 0;
}
