/*
** EPITECH PROJECT, 2023
** regen_potion.c
** File description:
** desc
*/

#include "rpg1.h"

void regen(all_t *a)
{
    for (size_t i = 0; i < 20; i++){
        a->life_actu += 1;
        if (a->life_actu >= a->life_max){
            a->life_actu = a->life_max;
        }
    }
}

void anim_potion(all_t *a, int nb)
{
    a->timing_p.time = sfClock_getElapsedTime(a->timing_p.clock);
    float seconds = a->timing_p.time.microseconds / 1000000.0;
    if (seconds > 2 && sfMouse_isButtonPressed(sfMouseLeft)){
        sfMusic_play(a->potion_song);
        a->potion[nb].nb_potion -= 1;
        regen(a);
        sfClock_restart(a->timing_p.clock);
    }
}
