#include <iostream>
#include <iomanip>
#include "funcao.h"
#include "newtonRaphson.h"
#include "newtonModificado.h"
#include "secante.h"
#include "erro.h"

namespace Metodos {

    double secante(double a, double d0, double d1, double epsilon, int maxIter) {
        std::cout << "Executando Método da Secante para f(d) = a·e^d - 4d²..." << std::endl;
        double f0 = f(d0, a);
        double f1 = f(d1, a);

        for (int i = 1; i <= maxIter; ++i) {
            if (erro_absoluto(f1, f0) < 1e-12) break;

            double d2 = d1 - f1 * (d1 - d0) / (f1 - f0);
            double erro = erro_absoluto(d2, d1);
            std::cout << "Iteração " << i << ": d = " << d2 << ", erro = " << erro << ", f(d) = " << f(d2, a) << std::endl;

            if (erro < epsilon) break;

            d0 = d1;
            f0 = f1;
            d1 = d2;
            f1 = f(d1, a);
        }

        return d1;
    }

}
