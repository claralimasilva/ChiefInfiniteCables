#ifndef NEWTON_RAPHSON_H
#define NEWTON_RAPHSON_H

namespace Metodos {
    double newtonRaphson(double a, double d0, double epsilon, int maxIter);
    double f(double d, double a);
    double df(double d, double a);
}

#endif
