#include <iostream>
#include <iomanip>
#include "funcao.h"
#include "newtonRaphson.h"
#include "newtonModificado.h"
#include "secante.h"
#include "erro.h"

namespace Metodos {

    double newtonModificado(double a, double d0, double epsilon, int maxIter) {
        std::cout << "Executando Newton Modificado para f(d) = a·e^d - 4d²..." << std::endl;
        double d = d0;

        for (int i = 1; i <= maxIter; ++i) {
            double d_next = d - f(d, a) * df(d, a) / (df(d, a) * df(d, a) - f(d, a) * d2f(d, a));
            double erro = erro_absoluto(d_next, d);
            std::cout << "Iteração " << i << ": d = " << d_next << ", erro = " << erro << ", f(d) = " << f(d_next, a) << std::endl;

            if (erro < epsilon) break;
            d = d_next;
        }

        return d;
    }

}
