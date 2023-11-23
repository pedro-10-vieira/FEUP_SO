#include "complex.h"

// Subtraction of complex numbers. Subtract the real and imaginary parts.

complex* complex_sub(complex * c1, complex * c2) {
    return complex_new(c1->x - c2->x, c1->y - c2->y);
}