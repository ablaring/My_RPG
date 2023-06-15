/*
** EPITECH PROJECT, 2023
** draw_text.c
** File description:
** draw_text
*/
#include "rpg1.h"

void draw_text1(all_t *a)
{
    if (a->count_text == 4) {
        sfRenderWindow_drawText(a->window, a->chat_tuto[4], NULL);
    }
    if (a->count_text == 5) {
        sfRenderWindow_drawText(a->window, a->chat_tuto[5], NULL);
    }
}

void draw_text(all_t *a)
{
    if (a->ischatting == true && a->isingm == false) {
        sfRenderWindow_drawSprite(a->window, a->parchemin, NULL);
        sfRenderWindow_drawSprite(a->window, a->head_ancetre, NULL);
        if (a->count_text == 0) {
            sfRenderWindow_drawText(a->window, a->chat_tuto[0], NULL);
        }
        if (a->count_text == 1) {
            sfRenderWindow_drawText(a->window, a->chat_tuto[1], NULL);
        }
        if (a->count_text == 2) {
            sfRenderWindow_drawText(a->window, a->chat_tuto[2], NULL);
            sfRenderWindow_drawSprite(a->window, a->fc, NULL);
        }
        if (a->count_text == 3) {
            sfRenderWindow_drawText(a->window, a->chat_tuto[3], NULL);
        }
        draw_text1(a);
    }
}
