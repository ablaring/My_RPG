/*
** EPITECH PROJECT, 2023
** desc
** File description:
** globla_bound.c
*/

#include "rpg1.h"

void destroy_suite(all_t *a)
{
    sfSprite_destroy(a->adw);
    sfSprite_destroy(a->setting);
    sfText_destroy(a->options);
    sfSprite_destroy(a->back_gmenu);
    sfSprite_destroy(a->exit_button);
    sfSprite_destroy(a->setting_button);
    sfSprite_destroy(a->life);
    sfSprite_destroy(a->potion[2].sprite);
    sfImage_destroy(a->im_h1);
    sfImage_destroy(a->im_h2);
    sfImage_destroy(a->im_h3);
    sfImage_destroy(a->im_h4);
    sfImage_destroy(a->im_h5);
    for (int i = 0; i <= 5; i++)
    sfSprite_destroy(a->house_lp[i]);
    destroy_house_lz(a);
}

void destroy_menu(all_t *a)
{
    sfSprite_destroy(a->back_menu);
    sfText_destroy(a->title);
    sfText_destroy(a->play);
    sfText_destroy(a->settings);
    sfText_destroy(a->settings_title);
    sfSprite_destroy(a->fleche);
    sfText_destroy(a->size);
    sfText_destroy(a->window_size);
    sfText_destroy(a->full_screen);
    sfText_destroy(a->sound);
    sfText_destroy(a->qq);
    sfText_destroy(a->tq);
    sfText_destroy(a->dq);
    sfText_destroy(a->uq);
    sfText_destroy(a->zq);
    sfSprite_destroy(a->au);
    sfSprite_destroy(a->ad);
    sfSprite_destroy(a->auw);
    destroy_suite(a);
}

void destroy_all2(all_t *a)
{
    for (int i = 0; i < 6; i++)
        sfSprite_destroy(a->utils_perso[i].sprite);
    free(a->utils_perso);
    for (int i = 0; i < 3; i++)
        sfSprite_destroy(a->potion[i].sprite);
    free(a->potion);
    sfClock_destroy(a->timing_p.clock);
    sfClock_destroy(a->timing_boss.clock);
    sfMusic_destroy(a->potion_song);
    sfCircleShape_destroy(a->circle);
    for (int i = 0; i < 4; i++)
        sfRectangleShape_destroy(a->rectangle[i].rect);
    for (int i = 0; i < 4; i++) {
        sfSprite_destroy(a->map_second[i].sprite);
        sfImage_destroy(a->map_second[i].img);
    }
    free(a->map_second);
    for (int i = 0; i < a->nb_bot; i++)
        sfSprite_destroy(IMG[i].sprite);
    destroy_menu(a);
}

void destroy_tuto(all_t *a)
{
    sfSprite_destroy(a->fc);
    for (int i = 0; i <= 5; i++)
        sfText_destroy(a->chat_tuto[i]);
    free(a->chat_tuto);
    free(a->str_chat);
    sfSprite_destroy(a->pp_hammer2);
    sfSprite_destroy(a->perso_hammer);
    sfSprite_destroy(a->head_ancetre);
    sfSprite_destroy(a->parchemin);
    sfSprite_destroy(a->portail_tuto);
    sfClock_destroy(a->clock_tuto);
    sfRectangleShape_destroy(a->pt_hitbox);
    sfSprite_destroy(a->map_tuto);
    sfImage_destroy(a->img_tuto);
    sfRectangleShape_destroy(a->door_tuto);
    sfSprite_destroy(a->donjt);
    sfImage_destroy(a->donjt_img);
    sfClock_destroy(a->clock3);
}

void destroy_all(all_t *a)
{
    sfSprite_destroy(a->first_map);
    sfSprite_destroy(a->portail);
    sfSprite_destroy(a->portail_porc);
    sfImage_destroy(a->im_comp);
    sfClock_destroy(a->clock2);
    sfClock_destroy(a->clock);
    for (int i = 0; i < 6; i++)
        sfSprite_destroy(a->house_lp[i]);
    free(a->house_lp);
    free(a->pos_house_x);
    free(a->pos_house_y);
    sfSprite_destroy(IMG[0].sprite);
    sfRectangleShape_destroy(IMG[0].rectangle);
    free(IMG);
    for (int i = 0; i < 2; i++)
        sfRectangleShape_destroy(a->rectangle[i].rect);
    free(a->rectangle);
    sfMusic_destroy(a->menu_music);
    sfSprite_destroy(a->pp);
    destroy_tuto(a);
}
