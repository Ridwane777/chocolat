/*
** EPITECH PROJECT, 2025
** is_digits
** File description:
** is_digits
*/

#include "../include/my.h"

int is_digits(char *s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < 48 || s[i] > 57)
            return 1;
    }
    return 0;
}
