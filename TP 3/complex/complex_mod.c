#include <math.h>
#include "complex.h"

// Module of a complex number (sum the squares of the real and imaginary part)

double complex_mod(complex* z){
    return sqrt( z->x * z->x + z->y * z->y );
}