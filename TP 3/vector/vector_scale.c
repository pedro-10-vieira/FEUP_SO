#include "vector.h"

// Scalar of a vector. Multiply each coordinate by a scalar.

vector* vector_scale(double s, vector* v) {
    return vector_new(s * v->x, s * v->y, s * v->z);
}