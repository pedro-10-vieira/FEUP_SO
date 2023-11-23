#include <math.h>

#include "complex.h"

// Division of complex numbers. Multiply the numerator and the denominator with the conjugate of the denominator

complex * complex_div(complex * c1, complex * c2) {
    return complex_new(complex_mul(c1, complex_conj(c2))->x / (pow(c2->x, 2) + pow(c2->y, 2)), 
    complex_mul(c1, complex_conj(c2))->y / (pow(c2->x, 2) + pow(c2->y, 2)));
}