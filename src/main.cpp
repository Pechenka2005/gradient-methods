#include <iostream>
#include <vector>
#include "Function.h"
#include "FastestDescent.h"
#include "ConjugateGradients.h"
#include "GradientDescent.h"
using namespace std;


int main() {
    for (int i = 10; i <= 10000; i += 50) {
        vector<vector<double>> a(i);
        for (auto j : a) {
            j.resize(i);
        }
        for (int j = 0; j < i; j++) {
            a[j][j] = 2;
        }

        vector<double> b(i);
        double c = 0;
        vector<double> x(i, 50);
        Function function = Function(a, b, c);
        vector<double> ansGradient = GradientDescent::evaluate(0.001, 0.00001, x),
        ansConjugate = ConjugateGradients::evaluate(0.0000, x),
        ansFastest;
        ansFastest = FastestDescent::evaluate(0.0001, x);

    }
    return 0;
}
