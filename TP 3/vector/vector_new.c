#include "stdlib.h"

#include "vector.h"

// Creation of a new vector with coordinates (x, y, z).

vector* vector_new(double x, double y, double z) {
    vector* res = (vector*) malloc(sizeof(vector));
    res->x = x;
    res->y = y;
    res->z = z;
    return res;
}