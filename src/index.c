/*
** EPITECH PROJECT, 2025
** index
** File description:
** index
*/

#include "../include/my.h"

int check_dig(char d)
{
    return (d - 48);
}

int str_index(char *s, int n)
{
    int len = strlen(s);

    if (n < len)
        return n;
    else
        return 0;
}
