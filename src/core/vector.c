#include "core/vector.h"

vector gen_vector(point a, point b)
{
    vector return_vector = {
        .x = b.x - a.x,
        .y = b.y - a.y,
        .z = b.z - a.z,
    };
    return return_vector;
}