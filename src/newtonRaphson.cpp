#include <cmath>
#include <iostream>
#include "metodos.h"
#include "funcao.h"
#include "erro.h"


namespace Metodos {
    double newtonRaphson(double a, double d0, double epsilon, int maxIter) {
        double d = d0;
        for (int i = 1; i <= maxIter; ++i) {
            double fd = f(d, a);
            double dfd = a * exp(d) - 8 * d;

            if (dfd == 0) {
                std::cerr << "Derivada zero na iteração " << i << ". Método falhou.\n";
                break;
            }

            double d_next = d - fd / dfd;
            double erro = erro_absoluto(d_next, d);
            std::cout << "Iteração " << i << ": d = " << d_next << ", erro = " << erro << ", f(d) = " << f(d_next, a) << "\n";

            if (erro < epsilon)
                return d_next;

            d = d_next;
        }
        return d;
    }
}
