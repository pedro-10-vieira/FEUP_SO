#include <math.h>

#include "vector.h"

// Module of a vector. Square root of the sum of the squares of the coordinates.

double vector_mod(vector* v) {
    return sqrt(pow(v->x, 2) + pow(v->y, 2) + pow(v->z, 2));
}