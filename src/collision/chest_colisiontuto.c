/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void chest_colision_tuto(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->coffre_tuto);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[7] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[7] !=
        true){
            a->potion[0].is_true = false;
            a->potion[1].is_true = true;
            a->chest_open[7] = true;
            a->potion[1].nb_potion += 1;
        }
    }
}
