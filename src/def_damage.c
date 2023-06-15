/*
** EPITECH PROJECT, 2023
** def_damage.c
** File description:
** def_damage
*/
#include "rpg1.h"

void def_damge_end(all_t *a)
{
    if (a->isfight4 == true) {
        a->life_ed4 -= 20;
        if (a->life_ed4 <= 0) {
            a->life_ed4 = 0;
            a->isedead4 = true;
        }
    }
    if (a->nb_rect_port == 2){
        a->rectangle[7].size.x -= 20;
        if (a->rectangle[7].size.x <= 0) {
            a->rectangle[7].size.x = 0;
            a->isdead = true;
        }
    }
}

void def_damge_suite(all_t *a)
{
    if (a->isfight2 == true) {
        a->life_ed2 -= 20;
        if (a->life_ed2 <= 0) {
            a->life_ed2 = 0;
            a->isedead2 = true;
        }
    }
    if (a->isfight3 == true) {
        a->life_ed3 -= 20;
        if (a->life_ed3 <= 0) {
            a->life_ed3 = 0;
            a->isedead3 = true;
        }
    }
    def_damge_end(a);
}

void def_damage(all_t *a)
{
    if (a->isfight_tuto == true) {
        a->life_ed -= 20;
        if (a->life_ed <= 0) {
            a->life_ed = 0;
            a->isetd = true;
        }
    }
    if (a->isfight1 == true) {
        a->life_ed1 -= 20;
        if (a->life_ed1 <= 0) {
            a->life_ed1 = 0;
            a->isedead1 = true;
        }
    }
    def_damge_suite(a);
}
