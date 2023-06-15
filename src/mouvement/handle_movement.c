/*
** EPITECH PROJECT, 2023
** handle_movement.c
** File description:
** desc
*/

#include "rpg1.h"

void handle_left_movement(all_t *a)
{
    if (a->map_porc_open == true && a->nb_rect_port == 1)
        moove_porc_right(a, a->map_second[0].sprite,
        a->map_second[1].img);
    if (a->map_porc_open == true && a->nb_rect_port == 2)
        moove_porc_right(a, a->map_second[2].sprite,
        a->map_second[3].img);
    if (a->map_porc_open == true && a->nb_rect_port == 3)
        moove_porc_right(a, a->map_second[4].sprite,
        a->map_second[5].img);
}

void handle_right_movement(all_t *a)
{
    if (a->map_porc_open == true && a->nb_rect_port == 1)
        moove_porc_left(a, a->map_second[0].sprite,
        a->map_second[1].img);
    if (a->map_porc_open == true && a->nb_rect_port == 2)
        moove_porc_left(a, a->map_second[2].sprite,
        a->map_second[3].img);
    if (a->map_porc_open == true && a->nb_rect_port == 3)
        moove_porc_left(a, a->map_second[4].sprite,
        a->map_second[5].img);
}

void handle_up_movement(all_t *a)
{
    if (a->map_porc_open == true && a->nb_rect_port == 1)
        moove_porc_up(a, a->map_second[0].sprite,
        a->map_second[1].img);
    if (a->map_porc_open == true && a->nb_rect_port == 2)
        moove_porc_up(a, a->map_second[2].sprite,
        a->map_second[3].img);
    if (a->map_porc_open == true && a->nb_rect_port == 3)
        moove_porc_up(a, a->map_second[4].sprite,
        a->map_second[5].img);
}

void handle_down_movement(all_t *a)
{
    if (a->map_porc_open == true && a->nb_rect_port == 1)
        moove_porc_down(a, a->map_second[0].sprite,
        a->map_second[1].img);
    if (a->map_porc_open == true && a->nb_rect_port == 2)
        moove_porc_down(a, a->map_second[2].sprite,
        a->map_second[3].img);
    if (a->map_porc_open == true && a->nb_rect_port == 3)
        moove_porc_down(a, a->map_second[4].sprite,
        a->map_second[5].img);
}
