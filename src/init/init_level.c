/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** init
*/
#include "rpg1.h"

void init_level(all_t *a)
{
    a->timing_lvl.clock = sfClock_create();
    a->rectangle[4].size = (sfVector2f){425, 20};
    a->rectangle[4].rect = create_rect_shape((sfVector2f){750, 40},
    a->rectangle[4].size, sfGreen, 1);
    a->rectangle[5].size = (sfVector2f){425, 20};
    a->rectangle[5].rect = create_rect_shape((sfVector2f){750, 40},
    a->rectangle[5].size, sfGreen, 1);
    a->rectangle[6].size = (sfVector2f){212, 20};
    a->rectangle[6].rect = create_rect_shape((sfVector2f){750, 40},
    a->rectangle[6].size, sfGreen, 1);
    a->lvl1 = 0;
    a->lvl2 = 1;
    sfRectangleShape_setFillColor(a->rectangle[6].rect, sfGreen);
    sfRectangleShape_setFillColor(a->rectangle[5].rect, sfBlack);
}

void init_potion_suite(all_t *a)
{
    a->horl_potion.clock = sfClock_create();
    a->potion[2].scale = (sfVector2f){3, 3};
    a->potion[2].pos = (sfVector2f){800,
    800};
    a->potion[2].sprite = my_getsprite("asset/potion_life.png",
    a->potion[2].pos, a->potion[2].scale);
    a->game_over = my_getsprite("asset/game-over.jpeg", (sfVector2f){0, 0},
    (sfVector2f){3.3, 3.3});
}
