/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void key_e(all_t *a, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyE &&
        !a->keyPressedE) {
        a->keyPressedE = sfTrue;
        a->keyProcessedE = sfFalse;
    } else if (event.type == sfEvtKeyReleased && event.key.code == sfKeyE) {
        a->keyPressedE = sfFalse;
    }
}

void rect_global_bound(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->rectangle[0].rect);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (a->keyPressedE && !a->keyProcessedE && a->nb_rect_port == 0) {
            switch_map_porc(a);
            a->keyProcessedE = sfTrue;
            return;
        }
        if (a->keyPressedE && !a->keyProcessedE && a->nb_rect_port == 1) {
            a->nb_rect_port = 0;
            switch_map_lp(a);
            a->keyProcessedE = sfTrue;
            return;
        }
    }
}

void chest_colision_porc(all_t *a)
{
    sfFloatRect global_bounds = sfRectangleShape_getGlobalBounds(COLI[0].rect);
    sfFloatRect global_bounds2 = sfRectangleShape_getGlobalBounds(COLI[1].rect);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue) {
        sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE))
            COLI[0].is_true = true;
    }
    if (sfFloatRect_contains(&global_bounds2, a->pp_x, a->pp_y) == sfTrue) {
        if (COLI[1].is_true != true)
            sfRenderWindow_drawSprite(a->window, IMG[2].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE) && COLI[1].is_true !=
        true){
            a->potion[0].is_true = true;
            a->potion[1].is_true = false;
            COLI[1].is_true = true;
            a->potion[0].nb_potion += 2;
        }
    }
    chest_colision_porc_suite(a);
}

void attack_boss(all_t *a)
{
    a->timing_boss.time = sfClock_getElapsedTime(a->timing_boss.clock);
    float seconds = a->timing_boss.time.microseconds / 1000000.0;
    if (seconds > 1.05){
        a->life_actu -= 10;
        sfClock_restart(a->timing_boss.clock);
    }
}

void colision_dongeon(all_t *a)
{
    sfFloatRect global_bounds =
    sfRectangleShape_getGlobalBounds(a->rectangle[1].rect);
    sfFloatRect global_bounds_2 =
    sfCircleShape_getGlobalBounds(a->circle);
    if (sfFloatRect_contains(&global_bounds, a->pp_x, a->pp_y) == sfTrue &&
    a->map_porc_open == true && COLI[0].is_true == true &&
    a->one_time != true)
        switch_dungeon_porc(a);
    if (sfFloatRect_contains(&global_bounds_2, a->pp_x, a->pp_y) == sfTrue &&
        a->map_porc_open == true) {
        anim_boss_porc(a, 1);
        attack_boss(a);
        combat_ml5(a);
    }else{
        IMG[1].rect = (sfIntRect){250, 1800, 60, 70};
        sfSprite_setTextureRect(IMG[1].sprite, IMG[1].rect);
    }
    colision_dongeon_suite(a);
}
