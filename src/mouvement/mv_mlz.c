/*
** EPITECH PROJECT, 2022
** mv_mlz.c
** File description:
** mv_mlz.c
*/

#include "rpg1.h"

void mv_lz_left(all_t *a)
{
    if (a->is_mlz_open == true)
        moove_left_lz(a);
    if (a->isinh1_lz == true)
        h1_left_lz(a);
    if (a->isinh2_lz == true)
        h2_left_lz(a);
    if (a->isinh3_lz == true)
        h3_left_lz(a);
    if (a->isindonj_lz == true)
        dj_left_lz(a);
}

void mv_lz_right(all_t *a)
{
    if (a->is_mlz_open == true)
        moove_right_lz(a);
    if (a->isinh1_lz == true)
        h1_right_lz(a);
    if (a->isinh2_lz == true)
        h2_right_lz(a);
    if (a->isinh3_lz == true)
        h3_right_lz(a);
    if (a->isindonj_lz == true)
        dj_right_lz(a);
}

void mv_lz_up(all_t *a)
{
    if (a->is_mlz_open == true)
        moove_up_lz(a);
    if (a->isinh1_lz == true)
        h1_up_lz(a);
    if (a->isinh2_lz == true)
        h2_up_lz(a);
    if (a->isinh3_lz == true)
        h3_up_lz(a);
    if (a->isindonj_lz == true)
        dj_up_lz(a);
}

void mv_lz_down(all_t *a)
{
    if (a->is_mlz_open == true)
        moove_down_lz(a);
    if (a->isinh1_lz == true)
        h1_down_lz(a);
    if (a->isinh2_lz == true)
        h2_down_lz(a);
    if (a->isinh3_lz == true)
        h3_down_lz(a);
    if (a->isindonj_lz == true)
        dj_down_lz(a);
}
