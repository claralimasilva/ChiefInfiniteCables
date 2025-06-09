#include <iostream>
#include <iomanip>
#include "metodos.h"
#include "erro.h"
#include "newtonRaphson.h"
#include "newtonModificado.h"
#include "secante.h"

void executarNewtonRaphson() {
    double a, d0, epsilon;
    int maxIter = 1000;

    std::cout << "\n[Newton-Raphson]\n";
    std::cout << "a: "; std::cin >> a;
    std::cout << "d0: "; std::cin >> d0;
    std::cout << "epsilon: "; std::cin >> epsilon;

    double raiz = Metodos::newtonRaphson(a, d0, epsilon, maxIter);

    std::cout << "\nRaiz aproximada: " << std::fixed << std::setprecision(10) << raiz << std::endl;
    std::cout << "f(d): " << Metodos::f(raiz, a) << std::endl;
}

void executarNewtonModificado() {
    double a, d0, epsilon;
    int maxIter = 1000;

    std::cout << "\n[Newton Modificado]\n";
    std::cout << "a: "; std::cin >> a;
    std::cout << "d0: "; std::cin >> d0;
    std::cout << "epsilon: "; std::cin >> epsilon;

    double raiz = Metodos::newtonModificado(a, d0, epsilon, maxIter);

    std::cout << "\nRaiz aproximada: " << std::fixed << std::setprecision(10) << raiz << std::endl;
    std::cout << "f(d): " << Metodos::f(raiz, a) << std::endl;
}

void executarSecante() {
    double a, d0, epsilon;
    int maxIter = 1000;

    std::cout << "\n[Secante]\n";
    std::cout << "a: "; std::cin >> a;
    std::cout << "d0: "; std::cin >> d0;
    std::cout << "epsilon: "; std::cin >> epsilon;

    double d1 = d0 + 0.1;
    std::cout << "(Usando d1 = d0 + 0.1 = " << d1 << ", maxIter = " << maxIter << ")\n";

    double raiz = Metodos::secante(a, d0, d1, epsilon, maxIter);

    std::cout << "\nRaiz aproximada: " << std::fixed << std::setprecision(10) << raiz << std::endl;
    std::cout << "f(d): " << Metodos::f(raiz, a) << std::endl;
}

int main() {
    int opcao;
    do {
        std::cout << "\n==============================\n";
        std::cout << " MÉTODOS NUMÉRICOS - MENU \n";
        std::cout << "==============================\n";
        std::cout << "1. Newton-Raphson\n";
        std::cout << "2. Newton Modificado\n";
        std::cout << "3. Secante\n";
        std::cout << "0. Sair\n";
        std::cout << "==============================\n";
        std::cout << "Escolha: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: executarNewtonRaphson(); break;
            case 2: executarNewtonModificado(); break;
            case 3: executarSecante(); break;
            case 0: std::cout << "Saindo...\n"; break;
            default: std::cout << "Opção inválida.\n"; break;
        }
    } while (opcao != 0);

    return 0;
}
