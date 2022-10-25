#ifndef A_RADIAL_TREE_ROOM
#define A_RADIAL_TREE_ROOM

#include "room.h"
#include "radial_tree_leaf.h"

typedef struct radial_tree_room_
{
    radial_tree_room *prev_room;
    radial_tree_room *next_room;
    radial_tree_leaf *root_leaf;
    room room;
} radial_tree_room;

#endif /* A_RADIAL_TREE_ROOM */