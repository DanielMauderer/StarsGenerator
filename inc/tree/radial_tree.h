#ifndef A_RADIAL_TREE
#define A_RADIAL_TREE

#include "tree/radial_tree_room.h"

typedef struct radial_tree_
{
    int room_count;
    int depth;
    radial_tree_room **root_elements;
} radial_tree;

radial_tree *generate_tree(radial_tree *tree, int room_count, int max_value, int stars_per_room);
#endif /* A_RADIAL_TREE */