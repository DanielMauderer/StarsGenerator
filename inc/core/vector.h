#ifndef A_VECTOR
#define A_VECTOR

#include "core/point.h"

typedef struct vector_
{
    double x;
    double y;
    double z;
} vector;

vector gen_vector(point a, point b);

#endif