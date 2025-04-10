/*
** EPITECH PROJECT, 2025
** print_value
** File description:
** print_value
*/

#include "../include/my.h"

char **print_tree2(char **o, char *key)
{
    strcpy(o[3], o[1]);
    strcpy(o[4], o[0]);
    return o;
}

char **print_tree(char *key)
{
    char **o = alloc();

    if (key == NULL)
        key = "0";
    o[0][0] = *key;
    o[0][1] = *key;
    o[0][2] = *key;
    o[0][3] = *key;
    o[0][4] = ' ';
    o[1][0] = ' ';
    o[1][1] = ' ';
    o[1][2] = ' ';
    o[1][3] = ' ';
    o[1][4] = *key;
    o[2][0] = ' ';
    o[2][1] = *key;
    o[2][2] = *key;
    o[2][3] = *key;
    o[2][4] = ' ';
    return print_tree2(o, key);
}
