/*
** EPITECH PROJECT, 2023
** check_col.c
** File description:
** check_col
*/
#include "rpg1.h"

int check_col1(all_t *a)
{
    if (a->isintuto == true) {
        col_dt(a);
        collision_port_tuto(a);
        return 1;
    }
    if (a->isindonjt == true) {
        col_djt(a);
        col_fight_tuto(a);
        return 1;
    }
    if (a->isindjml == true) {
        col_donjon_int(a);
        col_fight_ml(a);
        return 1;
    }
    if (a->isindjtop == true) {
        col_donjon_int1(a);
        return 1;
    }
    return 0;
}

void check_col2(all_t *a)
{
    if (a->isinh4 == true) {
        col_int4(a);
        return;
    }
    if (a->isinh5 == true) {
        col_int5(a);
        return;
    }
    if (check_col1(a) == 1)
        return;
    check_col_lz(a);
}

void check_col(all_t *a)
{
    if (a->is_mlp_open == true) {
        col_door1(a);
        col_donjon_mlp(a);
        return;
    }
    if (a->isinh1 == true) {
        col_int1(a);
        return;
    }
    if (a->isinh2 == true) {
        col_int2(a);
        return;
    }
    if (a->isinh3 == true) {
        col_int3(a);
        return;
    }
    check_col2(a);
}
