#include "complex.h"

// Addition of complex numbers. Add c1 and c2's real and imaginary parts

complex* complex_add(complex * c1, complex * c2) {
    return complex_new(c1->x + c2->x, c1->y + c2->y);
}