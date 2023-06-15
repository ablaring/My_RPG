/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void chest_colision_lp(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->coffre1_mlp);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[3] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[3] !=
        true){
            a->chest_open[3] = true;
        }
    }
}

void chest_colision_lp2(all_t *a)
{
    sfFloatRect global_bounds2 =
    sfRectangleShape_getGlobalBounds(a->coffre2_mlp);
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[4] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[4] !=
        true){
            a->potion[1].is_true = false;
            a->potion[0].is_true = true;
            a->chest_open[4] = true;
            a->potion[0].nb_potion += 1;
        }
    }
}

void chest_colision_lp3(all_t *a)
{
    sfFloatRect global_bounds2 =
    sfRectangleShape_getGlobalBounds(a->coffre3_mlp);
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[5] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[5] !=
        true){
            a->potion[1].is_true = false;
            a->potion[0].is_true = true;
            a->chest_open[5] = true;
            a->potion[0].nb_potion += 1;
        }
    }
}

void chest_colision_lp5(all_t *a)
{
    sfFloatRect global_bounds2 =
    sfRectangleShape_getGlobalBounds(a->coffre5_mlp);
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue) {
        if (a->chest_open[6] != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->chest_open[6] !=
        true){
            a->potion[1].is_true = false;
            a->potion[0].is_true = true;
            a->chest_open[6] = true;
            a->potion[0].nb_potion += 1;
        }
    }
}
