#include <stddef.h>
#include "tree/radial_tree.h"

radial_tree *generate_tree(int room_count, int standard_deviations, int stars_per_room)
{
    radial_tree_room **tree_roots = (radial_tree_room **)malloc(room_count * sizeof(radial_tree_room *));
    radial_tree_room *lastRoom = NULL;
    for (size_t i = 0; i < room_count; i++)
    {
        tree_roots[i]->prev_room = lastRoom;
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }

        tree_roots[i]->next_room = lastRoom;
        tree_roots[i]->root_leaf = NULL;
    }

    return (radial_tree *){

    };
}
