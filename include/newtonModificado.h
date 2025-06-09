#ifndef NEWTON_MODIFICADO_H
#define NEWTON_MODIFICADO_H

namespace Metodos {
    double newtonModificado(double a, double d0, double epsilon, int maxIter);
    double f(double d, double a);
    double df(double d, double a);
    double d2f(double d, double a);
}

#endif
