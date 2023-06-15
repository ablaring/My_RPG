/*
** EPITECH PROJECT, 2023
** init_perso_attack
** File description:
** init perso attack
*/
#include "rpg1.h"

void init_perso_attack(all_t *a)
{
    a->x_ph = 935; a->y_ph = 330;
    sfVector2f sc_ph = {1.8, 1.8};
    sfVector2f pos_ph = {a->x_ph, a->y_ph};
    a->perso_hammer = my_getsprite("asset/pp_hammer.png", pos_ph, sc_ph);
    a->ph_rect = (sfIntRect) {0, -3, 128, 124};
    sfSprite_setTextureRect(a->perso_hammer, a->ph_rect);
    float x_origin = 34; float y_origin = 45;
    sfVector2f origin = {x_origin, y_origin};
    sfSprite_setOrigin(a->perso_hammer, origin);
    a->clock4 = sfClock_create();
    a->x_ph2 = 935; a->y_ph2 = 330;
    sfVector2f sc_ph2 = {1.8, 1.8};
    sfVector2f pos_ph2 = {a->x_ph2, a->y_ph2};
    a->pp_hammer2 = my_getsprite("asset/pp_hammer.png", pos_ph2, sc_ph2);
    a->hammer2_rect = (sfIntRect) {0, -3, 128, 124};
    sfSprite_setTextureRect(a->pp_hammer2, a->hammer2_rect);
    float x_origin2 = 34; float y_origin2 = 45;
    sfVector2f origin2 = {x_origin2, y_origin2};
    sfSprite_setOrigin(a->pp_hammer2, origin2);
    a->clock10 = sfClock_create();
}
