/*
** EPITECH PROJECT, 2025
** isalpha.c
** File description:
** The function that checks undercase
*/

#include "../include/my.h"

int my_strisalpha(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if ((str[a] < 97 || str[a] > 122) &&
            (str[a] < 65 || str[a] > 90))
            return 1;
    }
    return 0;
}
