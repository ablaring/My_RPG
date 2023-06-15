/*
** EPITECH PROJECT, 2023
** display_potion
** File description:
** desc
*/

#include "rpg1.h"

void diplay_lvl(all_t *a)
{
    set_int_to_text(a->text_lvl1, a->lvl1);
    set_int_to_text(a->text_lvl2, a->lvl2);
    sfRenderWindow_drawText(a->window, a->text_lvl1, NULL);
    sfRenderWindow_drawText(a->window, a->text_lvl2, NULL);
}

void display_potion(all_t *a)
{
    if (a->potion[0].is_true == true){
        set_int_to_text(a->text, a->potion[0].nb_potion);
        sfRenderWindow_drawSprite(a->window, a->potion[0].sprite, NULL);
        sfRenderWindow_drawText(a->window, a->text, NULL);
        if (a->potion[0].nb_potion > 0 && sfMouse_isButtonPressed(sfMouseLeft))
            anim_potion(a, 0);
    }
    if (a->potion[1].is_true == true){
        set_int_to_text(a->text, a->potion[1].nb_potion);
        sfRenderWindow_drawSprite(a->window, a->potion[1].sprite, NULL);
        sfRenderWindow_drawText(a->window, a->text, NULL);
        if (a->potion[1].nb_potion > 0 && sfMouse_isButtonPressed(sfMouseLeft))
            anim_potion(a, 1);
    }
    if (a->colision_object[0].is_true == true)
        sfRenderWindow_drawSprite(a->window, a->utils_perso[6].sprite, NULL);
    if (a->colision_object[0].is_true == true)
        sfRenderWindow_drawSprite(a->window, a->utils_perso[6].sprite, NULL);
    diplay_lvl(a);
}
