#ifndef A_RADIAL_TREE_ROOM
#define A_RADIAL_TREE_ROOM

#include "core/room.h"
#include "tree/radial_tree_leaf.h"

typedef struct radial_tree_room_
{
    struct radial_tree_room_ *prev_room;
    struct radial_tree_room_ *next_room;
    radial_tree_leaf *root_leaf;
    room room;
} radial_tree_room;

#endif /* A_RADIAL_TREE_ROOM */