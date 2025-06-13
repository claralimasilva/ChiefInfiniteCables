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

    double newtonModificado(double a, double d0, double epsilon, int maxIter) {
        std::cout << "Executando Newton com Inclinação Fixa para f(d) = a·e^d - 4d²..." << std::endl;
        double d = d0;

        double denominador_fixo = df(d0, a);

        if (std::abs(denominador_fixo) < 1e-12) {
            std::cout << "ERRO: A primeira derivada no ponto inicial (d0) é zero. O método falhou." << std::endl;
            return std::numeric_limits<double>::quiet_NaN();
        }

        std::cout << "Usando denominador fixo f'(d0) = " << denominador_fixo << std::endl;

        for (int i = 1; i <= maxIter; ++i) {
            double f_val = f(d, a);
            
            double d_next = d - f_val / denominador_fixo;
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