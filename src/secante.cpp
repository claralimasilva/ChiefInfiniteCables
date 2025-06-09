#include <cmath>
#include <iostream>
#include "metodos.h"
#include "funcao.h"
#include "erro.h"


namespace Metodos {
    double secante(double a, double d0, double d1, double epsilon, int maxIter) {
        double f0 = f(d0, a);
        double f1 = f(d1, a);

        for (int i = 1; i <= maxIter; ++i) {
            if (erro_absoluto(f1, f0) < 1e-12) {
                std::cerr << "Diferença entre f(d1) e f(d0) muito pequena. Método falhou.\n";
                break;
            }

            double d2 = d1 - f1 * (d1 - d0) / (f1 - f0);
            double erro = erro_absoluto(d2, d1);

            std::cout << "Iteração " << i << ": d = " << d2 << ", erro = " << erro << ", f(d) = " << f(d2, a) << "\n";

            if (erro < epsilon)
                return d2;

            d0 = d1;
            f0 = f1;
            d1 = d2;
            f1 = f(d1, a);
        }
        return d1;
    }
}
