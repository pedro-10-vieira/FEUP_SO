#include "complex.h"

// Conjugate of a complex (change the imaginary part signal)

complex * complex_conj(complex * c) {
    return complex_new(c->x, -c->y);
}