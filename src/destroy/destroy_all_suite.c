/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void destroy_house_lz2(all_t *a)
{
    sfSprite_destroy(a->dj_lz);
    sfRectangleShape_destroy(a->door_dj_lz);
    sfRectangleShape_destroy(a->door_indj_lz);
    sfImage_destroy(a->donj_comp_lz);
    sfRectangleShape_destroy(a->coffre_dj_lz);
}

void destroy_house_lz(all_t *a)
{
    sfSprite_destroy(a->h1_lz);
    sfRectangleShape_destroy(a->door1_lz);
    sfRectangleShape_destroy(a->door_in_h1);
    sfSprite_destroy(a->portail2_lz);
    sfClock_destroy(a->clock_port2_lz);
    sfImage_destroy(a->h1_comp_lz);
    sfSprite_destroy(a->h2_lz);
    sfRectangleShape_destroy(a->door2_lz);
    sfRectangleShape_destroy(a->door_in_h2);
    sfImage_destroy(a->h2_comp_lz);
    sfRectangleShape_destroy(a->coffre_h2_lz);
    sfSprite_destroy(a->h3_lz);
    sfRectangleShape_destroy(a->door3_lz);
    sfRectangleShape_destroy(a->door_in_h3);
    sfImage_destroy(a->h3_comp_lz);
    sfRectangleShape_destroy(a->coffre_h3_lz);
    destroy_house_lz2(a);
}
