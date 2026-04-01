/*
** EPITECH PROJECT, 2024
** strncpy
** File description:
** n copy
*/

#include "../include/my.h"
char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '\0') {
    dest[i] = src[i];
    i++;
    }
    dest[n] = '\0';
    return dest;
}
