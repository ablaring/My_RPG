/*
** EPITECH PROJECT, 2023
** init_bool.c
** File description:
** init_bool
*/
#include "rpg1.h"

void init_values(all_t *a)
{
    a->save_x = 0;
    a->save_y = 0;
    a->check = 0;
    a->life_max = 100;
    a->life_actu = 100;
    a->count_text = 0;
    a->life_ed = 50;
    a->life_max_ed = 50;
}

void init_bool(all_t *a)
{
    a->is_mlp_open = false;
    a->isinh1 = false;
    a->isinh2 = false;
    a->isinh3 = false;
    a->isinh4 = false;
    a->isinh5 = false;
    a->is_menu_open = true;
    a->is_setting_click = false;
    a->isqq = false;
    a->istq = true;
    a->isdq = false;
    a->isuq = false;
    a->iszq = false;
    a->isintuto = false;
    a->isindonjt = false;
    a->isfight_tuto = false;
    a->ischatting = false;
    a->iskeypressed = false;
    a->iseddefeat = false;
    a->isetd = false;
}
