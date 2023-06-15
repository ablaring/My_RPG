/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void chest_colision_lz(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->coffre_h2_lz);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[0] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[0] !=
        true){
            a->potion[0].is_true = false;
            a->potion[1].is_true = true;
            a->chest_open[0] = true;
            a->potion[1].nb_potion += 1;
        }
    }
}

void chest_colision_lz2(all_t *a)
{
    sfFloatRect global_bounds2 =
    sfRectangleShape_getGlobalBounds(a->coffre_dj_lz);
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[1] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[1] !=
        true){
            a->potion[1].is_true = false;
            a->potion[0].is_true = true;
            a->chest_open[1] = true;
            a->potion[0].nb_potion += 1;
        }
    }
}

void chest_colision_lz3(all_t *a)
{
    sfFloatRect global_bounds2 =
    sfRectangleShape_getGlobalBounds(a->coffre_h3_lz);
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[2] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[2] !=
        true)
            a->chest_open[2] = true;
    }
}
