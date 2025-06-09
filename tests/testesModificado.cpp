#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "newtonModificado.h"
#include "funcao.h"

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Uso: ./modificado <a> <d0> <epsilon>\n";
        return 1;
    }

    double a = std::atof(argv[1]);
    double d0 = std::atof(argv[2]);
    double epsilon = std::atof(argv[3]);
    int maxIter = 1000;

    std::cout << "Executando Newton Modificado...\n";
    double raiz = Metodos::newtonModificado(a, d0, epsilon, maxIter);

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Valor final de d: " << raiz << std::endl;
    std::cout << "Valor de f(d): " << Metodos::f(raiz, a) << std::endl;

    return 0;
}
