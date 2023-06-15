/*
** EPITECH PROJECT, 2022
** draw_map_lz.c
** File description:
** draw_map_lz.c
*/

#include "rpg1.h"

int lire_fichier(all_t *a)
{
    FILE *fichier = fopen("save_game.txt", "r");
    a->one_time_read = true;
    int nb = 0;
    if (fichier == NULL)
        return 84;
    char *ligne = NULL;
    size_t longueur_ligne = 0;
    ssize_t octet;
    while ((octet = getline(&ligne, &longueur_ligne, fichier)) != -1){
        change_save(a, nb, ligne);
        nb++;
    }
    free(ligne);
    fclose(fichier);
    return 0;
}

void save_algo_suite(all_t *a, int nb)
{
    nb = 1;
    if (a->isintuto == true)
        nb = 0;
    a->data_save = my_strcat(a->data_save, int_to_str(nb));
    a->data_save = my_strcat(a->data_save, "\n");
    nb = 1;
    if (a->map_porc_open == true)
        nb = 0;
    a->data_save = my_strcat(a->data_save, int_to_str(nb));
    a->data_save = my_strcat(a->data_save, "\n");
    a->data_save = my_strcat(a->data_save, int_to_str(a->lvl1));
    a->data_save = my_strcat(a->data_save, "\n");
    a->data_save = my_strcat(a->data_save, int_to_str(a->lvl2));
}

void save_algo(all_t *a)
{
    int nb = 1;
    if (a->is_mlp_open == true)
        nb = 0;
    a->data_save = my_strcat(a->data_save, int_to_str(nb));
    a->data_save = my_strcat(a->data_save, "\n");
    nb = 1;
    if (a->is_mlz_open == true)
        nb = 0;
    a->data_save = my_strcat(a->data_save, int_to_str(nb));
    a->data_save = my_strcat(a->data_save, "\n");
    save_algo_suite(a, nb);
}

void save_game(all_t *a)
{
    FILE *fptr;
    a->data_save = malloc(sizeof(char) * 500);
    a->data_save = "\n";
    save_algo(a);
    fptr = fopen("save_game.txt", "wb");
    if (fptr == NULL)
        return;
    fwrite(a->data_save, sizeof(char), my_strlen(a->data_save), fptr);
    fclose(fptr);
}
