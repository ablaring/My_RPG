/*
** EPITECH PROJECT, 2023
** check_img.c
** File description:
** desc
*/

#include "rpg1.h"


int my_getmusic_checked(char *filepath)
{
    sfMusic *music = sfMusic_createFromFile(filepath);
    if (!music) {
        return 84;
    }
    sfMusic_destroy(music);
    return 0;
}

int my_gettext_checked(char *filepath)
{
    sfFont *font = sfFont_createFromFile(filepath);
    if (!font) {
        return 84;
    }
    sfFont_destroy(font);
    return 0;
}

int check_music(void)
{
    char *assets_music[] = {"asset/menu_music.ogg",
    "asset/minecraft_potion.ogg"};
    for (int i = 0; assets_music[i] != NULL; ++i) {
        if (my_getmusic_checked(assets_music[i]) == 84)
            return 84;
    }
    return 0;
}

int check_text(void)
{
    char *assets_text[] = {"asset/ancient.ttf, asset/Baxoe.ttf"};
    for (int i = 0; assets_text[i] != NULL; ++i) {
        if (my_gettext_checked(assets_text[i]) == 84)
            return 84;
    }
    return 0;
}
