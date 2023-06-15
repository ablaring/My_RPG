/*
** EPITECH PROJECT, 2023
** combat_ml.c
** File description:
** combat_ml
*/
#include "rpg1.h"

void combat_ml5(all_t *a)
{
    if (a->isfight5 == true) {
        anim_boss_porc(a, 1);
        attack_porc(a);
    }
}

void combat_ml4(all_t *a)
{
    if (a->isfight4 == true) {
        anim_enemy_ml4(a);
        attack_ml4(a);
    } else {
        sfIntRect rect = {0, 126, 128, 126};
        sfSprite_setTextureRect(a->edmlp[3], rect);
    }
}

void combat_ml3(all_t *a)
{
    if (a->isfight3 == true) {
        anim_enemy_ml3(a);
        attack_ml3(a);
    } else {
        sfIntRect rect = {0, 126, 128, 126};
        sfSprite_setTextureRect(a->edmlp[2], rect);
    }
}

void combat_ml2(all_t *a)
{
    if (a->isfight2 == true) {
        anim_enemy_ml2(a);
        attack_ml2(a);
    } else {
        sfIntRect rect = {0, 126, 128, 126};
        sfSprite_setTextureRect(a->edmlp[1], rect);
    }
}

void combat_ml1(all_t *a)
{
    if (a->isfight1 == true) {
        anim_enemy_ml1(a);
        attack_ml1(a);
    } else {
        sfIntRect rect = {0, 126, 128, 126};
        sfSprite_setTextureRect(a->edmlp[0], rect);
    }
}
