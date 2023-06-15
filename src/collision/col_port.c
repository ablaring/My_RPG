/*
** EPITECH PROJECT, 2023
** col_port.c
** File description:
** col_port
*/
#include "rpg1.h"

void collision_port_tuto(all_t *a)
{
    int x = sfSprite_getPosition(a->pp).x;
    int y = sfSprite_getPosition(a->pp).y;
    sfFloatRect rect_port = sfRectangleShape_getGlobalBounds(a->pt_hitbox);
    if (sfFloatRect_contains(&rect_port, x, y) && a->iseddefeat == true &&
        sfKeyboard_isKeyPressed(sfKeyE)) {
        a->isintuto = false;
        a->is_mlz_open = true;
    }
}
