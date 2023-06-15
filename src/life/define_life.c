/*
** EPITECH PROJECT, 2023
** define_life.c
** File description:
** define_life_rect
*/
#include "rpg1.h"

void define_life(all_t *a)
{
    a->size_x_life = (a->life_actu * 253) / a->life_max;
    sfVector2f size_rect_life = {a->size_x_life, 26};
    sfRectangleShape_setSize(a->life_rect, size_rect_life);
}
