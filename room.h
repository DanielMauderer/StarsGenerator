#ifndef A_RADIAL_TREE_ROOM
#define A_RADIAL_TREE_ROOM

#include "point.h"

typedef struct room_
{
    point *a1;
    point *a2;
    point *a3;
    point *a4;
    point *b1;
    point *b2;
    point *b3;
    point *b4;
} room;

bool is_point_in_room(room *room, point *point);

#endif