/*
** EPITECH PROJECT, 2023
** init_life_strength.c
** File description:
** init_life_strength
*/
#include "rpg1.h"

void init_life_strength1(all_t *a)
{
    a->x_strength = 98; a->y_strength = 110; a->size_x_strength = 253.00;
    sfVector2f pos_strength_rect = {a->x_strength, a->y_strength};
    sfVector2f size_strength_rect = {a->size_x_strength, 26};
    sfVector2f pos_strength_ref = {98, 110};
    a->size_lref = 253;
    sfVector2f size_st_ref = {a->size_lref, 26};
    a->strength_rect = my_getrect(pos_strength_rect, size_strength_rect,
                                sfColor_fromRGB(251, 163, 0));
    sfRectangleShape_setOutlineColor(a->strength_rect, sfTransparent);
    a->strength_ref = my_getrect(pos_strength_ref, size_st_ref, sfTransparent);
    sfRectangleShape_setOutlineColor(a->strength_ref,
                                    sfColor_fromRGB(128, 128, 128));
}

void init_life_strength(all_t *a)
{
    a->lf_x = 20; a->lf_y = 20; sfVector2f sc_life = {0.07, 0.07};
    sfVector2f pos_life = {a->lf_x, a->lf_y};
    a->life = my_getsprite("asset/coeur.png", pos_life, sc_life);
    a->st_x = 20; a->st_y = 90; sfVector2f sc_strength = {0.07, 0.07};
    sfVector2f pos_strength = {a->st_x, a->st_y};
    a->strength = my_getsprite("asset/tools.png", pos_strength, sc_strength);
    a->x_life = 98; a->y_life = 40; a->size_x_life = 253.00;
    sfVector2f pos_life_rect = {a->x_life, a->y_life};
    sfVector2f size_life_rect = {a->size_x_life, 26};
    sfVector2f pos_life_ref = {98, 40};
    sfVector2f size_life_ref = {253, 26};
    a->life_rect = my_getrect(pos_life_rect, size_life_rect, sfRed);
    sfRectangleShape_setOutlineColor(a->life_rect, sfTransparent);
    a->life_ref = my_getrect(pos_life_ref, size_life_ref, sfTransparent);
    sfRectangleShape_setOutlineColor(a->life_ref,
                                    sfColor_fromRGB(128, 128, 128));
    init_life_strength1(a);
}
