/*
** EPITECH PROJECT, 2025
** print_value
** File description:
** print_value
*/

#include "../include/my.h"

char **alloc(void)
{
    char **s = malloc(sizeof(char *) * 6);

    for (int i = 0; i < 5; i++)
        s[i] = malloc(sizeof(char) * 6);
    s[5] = NULL;
    return s;
}

char **print_zero(char *key)
{
    char **z = alloc();

    if (key == NULL)
        key = "0";
    z[0][0] = ' ';
    z[0][1] = *key;
    z[0][2] = *key;
    z[0][3] = *key;
    z[0][4] = ' ';
    z[1][0] = *key;
    strcat(z[1], "   ");
    z[1][4] = *key;
    strcpy(z[2], z[1]);
    strcpy(z[3], z[1]);
    strcpy(z[4], z[0]);
    return z;
}

char **print_one2(char **o, char *key)
{
    strcpy(o[3], o[2]);
    o[4][0] = ' ';
    o[4][1] = *key;
    o[4][2] = *key;
    o[4][3] = *key;
    o[4][4] = *key;
    return o;
}

char **print_one(char *key)
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
    o[1][2] = *key;
    o[1][3] = *key;
    o[1][4] = ' ';
    o[2][0] = ' ';
    o[2][1] = ' ';
    o[2][2] = *key;
    o[2][3] = *key;
    o[2][4] = ' ';
    return print_one2(o, key);
}
