/*
** EPITECH PROJECT, 2025
** additionnal_functions
** File description:
** more functions
*/

#include "../include/my.h"

int check(char *s1, char *s2)
{
    char *p = strstr(s1, s2);

    if (p)
        return 1;
    else
        return 0;
}

int is_alpha(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            return 1;
        } else {
            return -1;
        }
    }
}

int recup_arg(char **str, char *av)
{
    int i = 0;

    for (i = 0; str[i] != NULL; i++) {
        if (check(str[i], av) == 1)
            return i;
    }
    return -1;
}

int check_index(int index)
{
    if (index != -1) {
        return index;
    } else {
        exit(84);
    }
}

int check_args(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        if (strlen(av[i]) != 3 || is_alpha(av[i]) != 1)
            return -1;
    }
    return 0;
}
