#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include "funcao.h"
#include "newtonRaphson.h"
#include "newtonModificado.h"
#include "secante.h"
#include "erro.h"

namespace Metodos {

    double newtonRaphson(double a, double d0, double epsilon, int maxIter) {
        std::cout << "Executando Método de Newton-Raphson para f(d) = a·e^d - 4d²..." << std::endl;
        double d = d0;

        for (int i = 1; i <= maxIter; ++i) {
            double derivada = df(d, a);

            if (std::abs(derivada) < 1e-12) {
                std::cout << "ERRO: Derivada próxima de zero. O método falhou." << std::endl;
                return std::numeric_limits<double>::quiet_NaN();
            }

            double d_next = d - f(d, a) / derivada;
            double erro = erro_absoluto(d_next, d);
            
            d = d_next;
            
            std::cout << "Iteração " << i << ": d = " << d << ", erro = " << erro << ", f(d) = " << f(d, a) << std::endl;

            if (erro < epsilon) {
                std::cout << "\nConvergência atingida com a precisão desejada." << std::endl;
                break;
            }

            if (i == maxIter) {
                std::cout << "\nNúmero máximo de iterações atingido." << std::endl;
            }
        }
        return d;
    }

}

        