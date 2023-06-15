/*
** EPITECH PROJECT, 2023
** init_chat.c
** File description:
** init_chat
*/
#include "rpg1.h"

void init_chat1(all_t *a)
{
    char *str = "Hello young adventurer and welcome to the world of Furtopia ";
    char *str2 = "Foothills. I am Makai, I am your ancestor and I\n will be";
    char *str3 = " your guide throughout this adventure. In the past this";
    char *str4 = " world was ruled by 4 species: sheep, wolves, pigs \nand ";
    char *str5 = "lizards, only the other 3 species eradicated the sheep. ";
    char *str6 = "You are the only survivor of this people because \nof the ";
    char *str7 = "mutation that our family has and that makes us have wings.";
    char *str_fin = my_strcat(str, str2);
    char *str_fin1 = my_strcat(str_fin, str3);
    char *str_fin2 = my_strcat(str_fin1, str4);
    char *str_fin3 = my_strcat(str_fin2, str5);
    char *str_fin4 = my_strcat(str_fin3, str6);
    a->str_chat[0] = my_strcat(str_fin4, str7);
    char *str8 = "Your goal in this adventure is to destroy the respective ";
    char *str9 = "kings of the other tribes and to take revenge. ";
    char *str10 = "\n\nBut before that, let me explain some things to you:";
    char *str_fin5 = my_strcat(str8, str9);
    a->str_chat[1] = my_strcat(str_fin5, str10);
}

void init_chat2(all_t *a)
{
    char *str = "First of all, use the arrows on your keyboard to move ";
    char *str1 = "around:";
    a->str_chat[2] = my_strcat(str, str1);
    char *str2 = "You will notice that some doors are blue and others orange. ";
    char *str3 = "The blue doors are not accessible and the \n orange ones ";
    char *str4 = "allow access to the interior of the houses. Finally, the ";
    char *str5 = "red houses here are dungeons, \nso I'll let you go there and";
    char *str6 = "we'll meet there.";
    char *str_fin = my_strcat(str2, str3);
    char *str_fin2 = my_strcat(str_fin, str4);
    char *str_fin3 = my_strcat(str_fin2, str5);
    a->str_chat[3] = my_strcat(str_fin3, str6);
}

void init_chat3(all_t *a)
{
    char *str = "Here you are in a dungeon. In the dungeons you will find your";
    char *str1 = " enemies the minotaurs and the boss \nof your world. \n";
    char *str2 = "To fight the enemies you have to enter their hitboxes, shown";
    char *str3 = " here in red, and left-click on the enemy. \nChests will be ";
    char *str4 = "present containing life and strength potions that will allow";
    char *str5 = " you to regain your strength.";
    char *str_fin = my_strcat(str, str1);
    char *str_fin2 = my_strcat(str_fin, str2);
    char *str_fin3 = my_strcat(str_fin2, str3);
    char *str_fin4 = my_strcat(str_fin3, str4);
    a->str_chat[4] = my_strcat(str_fin4, str5);
    char *str6 = "Kill the enemy to unlock the new level and meet me there\n";
    a->str_chat[5] = str6;
}
