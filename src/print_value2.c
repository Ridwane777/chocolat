/*
** EPITECH PROJECT, 2025
** print_value
** File description:
** print_value
*/

#include "../include/my.h"

char **print_two2(char **o, char *key)
{
    o[3][0] = ' ';
    o[3][1] = *key;
    o[3][2] = ' ';
    o[3][3] = ' ';
    o[3][4] = ' ';
    o[4][0] = *key;
    o[4][1] = *key;
    o[4][2] = *key;
    o[4][3] = *key;
    o[4][4] = *key;
    return o;
}

char **print_two(char *key)
{
    char **o = alloc();

    if (key == NULL)
        key = "0";
    o[0][0] = ' ';
    o[0][1] = *key;
    o[0][2] = *key;
    o[0][3] = *key;
    o[0][4] = ' ';
    o[1][0] = *key;
    o[1][1] = ' ';
    o[1][2] = ' ';
    o[1][3] = ' ';
    o[1][4] = *key;
    o[2][0] = ' ';
    o[2][1] = ' ';
    o[2][2] = ' ';
    o[2][3] = *key;
    o[2][4] = ' ';
    return print_two2(o, key);
}
