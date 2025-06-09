#include <cmath>
#include "funcao.h"

namespace Metodos {
    double f(double d, double a) {
        return a * std::exp(d) - 4 * d * d;
    }
}
