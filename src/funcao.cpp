#include <cmath>
#include "funcao.h"

namespace Metodos {

    // f(d) = a * e^d - 4d²
    double f(double d, double a) {
        return a * std::exp(d) - 4 * d * d;
    }

    // f'(d) = a * e^d - 8d
    double df(double d, double a) {
        return a * std::exp(d) - 8 * d;
    }

    // f''(d) = a * e^d - 8
    double d2f(double d, double a) {
        return a * std::exp(d) - 8;
    }

}
