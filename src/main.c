/*
** EPITECH PROJECT, 2025
** the main
** File description:
** main.c
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac == 3 && strcmp(av[1], "-n") == 0 && is_digits(av[2]) == 0
        && strlen(av[2]) != 0) {
        print_tab(av[2], NULL);
        return 0;
    }
    if (ac == 5 && strcmp(av[1], "-s") == 0 && my_strisalpha(av[2]) == 0
        && strcmp(av[3], "-n") == 0 && is_digits(av[4]) == 0
        && strlen(av[2]) != 0 && strlen(av[4]) != 0) {
        print_tab(av[4], av[2]);
    }
    if (ac == 5 && strcmp(av[1], "-n") == 0 && is_digits(av[2]) == 0 &&
        strcmp(av[3], "-s") == 0 && my_strisalpha(av[4]) == 0 &&
        strlen(av[2]) != 0 && strlen(av[4]) != 0) {
        print_tab(av[2], av[4]);
    }
    return 84;
}
