/*
** EPITECH PROJECT, 2023
** define_redirect.c
** File description:
** define_redirect
*/
#include "rpg1.h"

void def_redirect(all_t *a)
{
    if (a->check == 0) {
        a->is_menu_open = true; a->is_setting_click = false; return;
    } else {
        a->isingm = true; a->is_setting_click = false; return;
    }
}

void define_return4(all_t *a)
{
    if (a->check == 16) {
        a->nb_rect_port = 2;
        a->isingm = false;
    }
    if (a->check == 17) {
        a->nb_rect_port = 3;
        a->isingm = false;
    }
}

void define_return3(all_t *a)
{
    if (a->check == 10) {
        a->isinh5 = true;
        a->isingm = false;
    }
    if (a->check == 12) {
        a->isinh1_lz = true;
        a->isingm = false;
    }
    if (a->check == 13) {
        a->isinh2_lz = true;
        a->isingm = false;
    }
    if (a->check == 14) {
        a->isinh3_lz = true;
        a->isingm = false;
    }
    if (a->check == 15) {
        a->isindonj_lz = true;
        a->isingm = false;
    }
}

void define_return2(all_t *a)
{
    if (a->check == 5) {
        a->map_porc_open = true;
        a->isingm = false;
    }
    if (a->check == 6) {
        a->isinh1 = true;
        a->isingm = false;
    }
    if (a->check == 7) {
        a->isinh2 = true;
        a->isingm = false;
    }
    if (a->check == 8) {
        a->isinh3 = true;
        a->isingm = false;
    }
    if (a->check == 9) {
        a->isinh4 = true;
        a->isingm = false;
    }
}

void define_return(all_t *a)
{
    if (a->check == 1) {
        a->is_mlp_open = true;
        a->isingm = false;
    }
    if (a->check == 2) {
        a->isintuto = true;
        a->isingm = false;
    }
    if (a->check == 3) {
        a->isindonjt = true;
        a->isingm = false;
    }
    if (a->check == 4) {
        a->is_mlz_open = true;
        a->isingm = false;
    }
    define_return2(a);
    define_return3(a);
    define_return4(a);
}
