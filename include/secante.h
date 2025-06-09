#ifndef SECANTE_H
#define SECANTE_H

namespace Metodos {
    double secante(double a, double d0, double d1, double epsilon, int maxIter);
    double f(double d, double a);
}

#endif
