#include <cmath>
#include "erro.h"

double erro_absoluto(double atual, double anterior) {
    return fabs(atual - anterior);
}
