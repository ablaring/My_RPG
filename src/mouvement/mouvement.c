/*
** EPITECH PROJECT, 2023
** mouvement.c
** File description:
** mouvement
*/
#include "rpg1.h"

void in_setting(all_t *a)
{
    a->is_mlp_open = false;
    a->isintuto = false;
    a->isindonjt = false;
    a->isingm = true;
    a->is_mlz_open = false;
    a->map_porc_open = false;
    a->isinh1 = false;
    a->isinh2 = false;
    a->isinh3 = false;
    a->isinh4 = false;
    a->isinh5 = false;
    a->isindonjt = false;
    a->isindonj_lz = false;
    a->isinh1_lz = false;
    a->isinh2_lz = false;
    a->isinh3_lz = false;
    a->nb_rect_port = 1;
}

void in_setting2(all_t *a)
{
    if (a->isinh4 == true)
        a->check = 9;
    if (a->isinh5 == true)
        a->check = 10;
    if (a->isinh1_lz == true)
        a->check = 12;
    if (a->isinh2_lz == true)
        a->check = 13;
    if (a->isinh3_lz == true)
        a->check = 14;
    if (a->isindonj_lz == true)
        a->check = 15;
    if (a->nb_rect_port == 2)
        a->check = 16;
    if (a->nb_rect_port == 3)
        a->check = 17;
}

void in_setting3(all_t *a)
{
    if (a->is_mlp_open == true)
        a->check = 1;
    if (a->isintuto == true)
        a->check = 2;
    if (a->isindonjt == true)
        a->check = 3;
    if (a->is_mlz_open == true)
        a->check = 4;
    if (a->map_porc_open == true)
        a->check = 5;
    if (a->isinh1 == true)
        a->check = 6;
    if (a->isinh2 == true)
        a->check = 7;
    if (a->isinh3 == true)
        a->check = 8;
}

void moove(all_t *a)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && a->isingm == false &&
        a->is_menu_open == false && a->is_setting_click == false) {
        in_setting3(a);
        in_setting2(a);
        in_setting(a);
        return;
    }
    mv_right_left(a);
    mv_up_down(a);
}
