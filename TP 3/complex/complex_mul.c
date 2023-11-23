#include "complex.h"

// Multiplication of complex numbers. Distributive property.

complex* complex_mul(complex* z, complex* w){
    return complex_new(z->x * w->x - z->y * w->y,
    z->x * w->y + z->y * w->x);
}