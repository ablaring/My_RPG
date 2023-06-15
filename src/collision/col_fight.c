/*
** EPITECH PROJECT, 2023
** col_fight.c
** File description:
** col_fight
*/
#include "rpg1.h"

void col_fight_ml_suite2(all_t *a, int x, int y, sfIntRect rect1)
{
    sfFloatRect hitbox3 = sfCircleShape_getGlobalBounds(a->circle);
    if (sfFloatRect_contains(&hitbox3, x, y) && a->nb_rect_port == 2)
        a->isfight5 = true;
    else {
        a->isfight5 = false;
        sfSprite_setTextureRect(a->perso_hammer, rect1);
    }
}

void col_fight_ml_suite(all_t *a, int x, int y, sfIntRect rect1)
{
    sfFloatRect hitbox3 = sfCircleShape_getGlobalBounds(a->ed_ml_hb[2]);
    sfFloatRect hitbox4 = sfCircleShape_getGlobalBounds(a->ed_ml_hb[3]);
    if (sfFloatRect_contains(&hitbox3, x, y) && a->isindjml == true)
        a->isfight3 = true;
    else {
        a->isfight3 = false;
        sfSprite_setTextureRect(a->perso_hammer, rect1);
    }
    if (sfFloatRect_contains(&hitbox4, x, y) && a->isindjml == true)
        a->isfight4 = true;
    else {
        a->isfight4 = false;
        sfSprite_setTextureRect(a->perso_hammer, rect1);
    }
    col_fight_ml_suite2(a, x, y, rect1);
}

void col_fight_ml(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfIntRect rect1 = {0, 126, 128, 126};
    sfFloatRect hitbox1 = sfCircleShape_getGlobalBounds(a->ed_ml_hb[0]);
    sfFloatRect hitbox2 = sfCircleShape_getGlobalBounds(a->ed_ml_hb[1]);
    if (sfFloatRect_contains(&hitbox1, x, y) && a->isindjml == true)
        a->isfight1 = true;
    else {
        a->isfight1 = false;
        sfSprite_setTextureRect(a->perso_hammer, rect1);
    }
    if (sfFloatRect_contains(&hitbox2, x, y) && a->isindjml == true)
        a->isfight2 = true;
    else {
        a->isfight2 = false;
        sfSprite_setTextureRect(a->perso_hammer, rect1);
    }
    col_fight_ml_suite(a, x, y, rect1);
}
