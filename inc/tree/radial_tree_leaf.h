#ifndef A_RADIAL_TREE_LEAF
#define A_RADIAL_TREE_LEAF

#include "point.h"

typedef struct radial_tree_leaf_
{
    struct radial_tree_leaf *rightSipling;
    point coordinates;
} radial_tree_leaf;

#endif /* A_RADIAL_TREE_LEAF */