#ifndef FUNCAO_H
#define FUNCAO_H

namespace Metodos {

    /**
     * @brief Função do Tema 2: f(d) = a * e^d - 4d²
     * 
     * @param d deslocamento
     * @param a amplitude
     * @return valor da função
     */
    double f(double d, double a);

    /**
     * @brief Derivada da função: f'(d) = a * e^d - 8d
     */
    double df(double d, double a);

    /**
     * @brief Segunda derivada da função: f''(d) = a * e^d - 8
     */
    double d2f(double d, double a);
}

#endif
