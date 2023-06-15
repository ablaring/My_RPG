/*
** EPITECH PROJECT, 2022
** draw_map_lz.c
** File description:
** draw_map_lz.c
*/

#include "rpg1.h"

void chang_save_sec(all_t *a, int nb, char *ligne)
{
    if (nb == 3 && my_getnbr(ligne) == 0)
        a->isintuto = true;
    else if (nb == 3)
        a->isintuto = false;
    if (nb == 4 && my_getnbr(ligne) == 0){
        switch_map_porc(a);
        a->ischatting = false;
    }else if (nb == 4)
        a->map_porc_open = false;
    if (nb == 5)
        a->lvl1 = my_getnbr(ligne);
    if (nb == 6)
        a->lvl2 = my_getnbr(ligne);
}

void change_save(all_t *a, int nb, char *ligne)
{
    if (nb == 1 && my_getnbr(ligne) == 0){
        a->is_mlp_open = true;
        a->ischatting = false;
    }else if (nb == 1)
        a->is_mlp_open = false;
    if (nb == 2 && my_getnbr(ligne) == 0){
        a->is_mlz_open = true;
        a->ischatting = false;
    }else if (nb == 2)
        a->is_mlz_open = false;
    chang_save_sec(a, nb, ligne);
}
