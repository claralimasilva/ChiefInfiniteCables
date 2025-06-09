#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "newtonRaphson.h"
#include "funcao.h"

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Uso: ./newton <a> <d0> <epsilon>\n";
        return 1;
    }

    double a = std::atof(argv[1]);
    double d0 = std::atof(argv[2]);
    double epsilon = std::atof(argv[3]);
    int maxIter = 1000;

    std::cout << "Executando Newton-Raphson...\n";
    double raiz = Metodos::newtonRaphson(a, d0, epsilon, maxIter);

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Valor final de d: " << raiz << std::endl;
    std::cout << "Valor de f(d): " << Metodos::f(raiz, a) << std::endl;

    return 0;
}
