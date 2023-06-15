/*
** EPITECH PROJECT, 2023
** define_text.c
** File description:
** define_text
*/
#include "rpg1.h"

void define(all_t *a)
{
    if (a->count_text == 0) {
        a->count_text = 1; return;
    }
    if (a->count_text == 1) {
        a->count_text = 2; return;
    }
    if (a->count_text == 2) {
        a->count_text = 3; return;
    }
    if (a->count_text == 3) {
        a->count_text = 4;
        a->ischatting = false; return;
    }
    if (a->count_text == 4) {
        a->count_text = 5; return;
    }
    if (a->count_text == 5) {
        a->count_text = 6;
        a->ischatting = false; return;
    }
}

void def_text(all_t *a)
{
    if (a->ischatting == true) {
        if (a->event.type == sfEvtKeyPressed && !a->iskeypressed) {
            define(a); a->iskeypressed = true;
        }
        if (a->event.type == sfEvtKeyReleased) {
            a->iskeypressed = false;
        }
    }
}
