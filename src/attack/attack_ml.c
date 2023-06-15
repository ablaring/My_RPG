/*
** EPITECH PROJECT, 2023
** attack_ml.c
** File description:
** attack_ml
*/
#include "rpg1.h"

void attack_ml4(all_t *a)
{
    int x = a->event.mouseButton.x;
    int y = a->event.mouseButton.y;
    sfFloatRect en_dj = sfSprite_getGlobalBounds(a->edmlp[3]);
    if (sfFloatRect_contains(&en_dj, x, y) && a->isedefeated4 == false &&
        a->isedead4 == false) {
        anim_hammer1(a);
    }
}

void attack_ml3(all_t *a)
{
    int x = a->event.mouseButton.x;
    int y = a->event.mouseButton.y;
    sfFloatRect en_dj = sfSprite_getGlobalBounds(a->edmlp[2]);
    if (sfFloatRect_contains(&en_dj, x, y) && a->isedefeated3 == false &&
        a->isedead3 == false) {
        anim_hammer1(a);
    }
}

void attack_ml2(all_t *a)
{
    int x = a->event.mouseButton.x;
    int y = a->event.mouseButton.y;
    sfFloatRect en_dj = sfSprite_getGlobalBounds(a->edmlp[1]);
    if (sfFloatRect_contains(&en_dj, x, y) && a->isedefeated2 == false &&
        a->isedead2 == false) {
        anim_hammer1(a);
    }
}

void attack_ml1(all_t *a)
{
    int x = a->event.mouseButton.x;
    int y = a->event.mouseButton.y;
    sfFloatRect en_dj = sfSprite_getGlobalBounds(a->edmlp[0]);
    if (sfFloatRect_contains(&en_dj, x, y) && a->isedefeated1 == false &&
        a->isedead1 == false) {
        anim_hammer1(a);
    }
}
