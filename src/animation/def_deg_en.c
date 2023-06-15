/*
** EPITECH PROJECT, 2023
** def_deg_en.c
** File description:
** def_deg_en
*/
#include "rpg1.h"

void def_life4(all_t *a)
{
    if (a->isedefeated4 == false || a->isedead4 == false) {
        a->life_actu -= 8;
        if (a->life_actu <= 0)
            a->life_actu = 0;
    }
}

void def_life3(all_t *a)
{
    if (a->isedefeated3 == false || a->isedead3 == false) {
        a->life_actu -= 8;
        if (a->life_actu <= 0)
            a->life_actu = 0;
    }
}

void def_life2(all_t *a)
{
    if (a->isedefeated2 == false || a->isedead2 == false) {
        a->life_actu -= 8;
        if (a->life_actu <= 0)
            a->life_actu = 0;
    }
}

void def_life1(all_t *a)
{
    if (a->isedefeated1 == false || a->isedead1 == false) {
        a->life_actu -= 8;
        if (a->life_actu <= 0)
            a->life_actu = 0;
    }
}
