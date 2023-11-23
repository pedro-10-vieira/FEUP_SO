#include <stdlib.h>

#include "complex.h"

// Creation of a new complex number with real part x and imaginary part y.

complex* complex_new(double x, double y) {
    complex* res = (complex*) malloc(sizeof(complex));
    res->x = x;
    res->y = y;
    return res;
}