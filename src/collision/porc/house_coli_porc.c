/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void house_colisporc(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->colision_object[2].rect);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue){
        a->nb_rect_port = 3;
        a->before_pos.x = a->x_back;
        a->before_pos.y = a->y_back;
        a->x_back = -800;
        a->y_back = -950;
    }
}

void inside_housse(all_t *a)
{
    sfFloatRect global_bounds2 =
    sfRectangleShape_getGlobalBounds(a->rectangle[9].rect);
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue){
        switch_map_porc_before(a);
    }
}

void colision_dongeon_suite(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->rectangle[8].rect);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue &&
    a->map_porc_open == true && a->nb_rect_port == 2) {
        a->one_time = false;
        switch_map_porc_before(a);
    }
}

void chest_colision_porc_suite(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->colision_object[3].rect);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        if (a->colision_object[3].is_true != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->colision_object[3].is_true !=
        true){
            a->potion[0].is_true = false;
            a->potion[1].is_true = true;
            a->colision_object[3].is_true = true;
            a->potion[1].nb_potion += 1;
        }
    }
}

void chest_colision_porc_house(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->rectangle[10].rect);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        if (a->rectangle[10].is_true != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && a->rectangle[10].is_true !=
        true){
            a->potion[1].is_true = false;
            a->potion[0].is_true = true;
            a->rectangle[10].is_true = true;
            a->potion[0].nb_potion += 1;
        }
    }
}
