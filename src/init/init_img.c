/*
** EPITECH PROJECT, 2023
** init_img.c
** File description:
** init_img
*/
#include "rpg1.h"

void init_imgh(all_t *a)
{
    a->im_h1 = sfImage_createFromFile("asset/house_1_image.png");
    a->im_h2 = sfImage_createFromFile("asset/house2_image.png");
    a->im_h3 = sfImage_createFromFile("asset/house3_image.png");
    a->im_h4 = sfImage_createFromFile("asset/house4_image.png");
    a->im_h5 = sfImage_createFromFile("asset/house5_image.png");
    a->col_h1 = sfImage_getPixel(a->im_h1, 0, 0);
    a->col_h2 = sfImage_getPixel(a->im_h2, 0, 0);
    a->col_h3 = sfImage_getPixel(a->im_h3, 0, 0);
    a->col_h4 = sfImage_getPixel(a->im_h4, 0, 0);
    a->col_h5 = sfImage_getPixel(a->im_h5, 0, 0);
}
