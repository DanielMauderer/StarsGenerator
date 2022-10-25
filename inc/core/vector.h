#ifndef A_RADIAL_TREE_ROOM
#define A_RADIAL_TREE_ROOM

#include "point.h"

typedef struct vector_
{
    double x;
    double y;
    double z;
} vector;

vector gen_vector(point a, point b);

#endif