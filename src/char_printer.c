/*
** EPITECH PROJECT, 2025
** the function tha print characters
** File description:
** char_printer.c
*/

#include "../include/my.h"

char **fill_tab2(char **tab, char *key, int p)
{
    if (p == 8)
        tab = print_eigth(key);
    if (p == 9)
        tab = print_nine(key);
    return tab;
}

char **fill_tab(char *key, int p)
{
    char **tab = NULL;

    if (p == 0)
        tab = print_zero(key);
    if (p == 1)
        tab = print_one(key);
    if (p == 2)
        tab = print_two(key);
    if (p == 3)
        tab = print_tree(key);
    if (p == 4)
        tab = print_four(key);
    if (p == 5)
        tab = print_five(key);
    if (p == 6)
        tab = print_six(key);
    if (p == 7)
        tab = print_seven(key);
    return fill_tab2(tab, key, p);
}

char ***char_printer(char *numbers, char *str)
{
    int pos = 0;
    int id = 0;
    char car;
    char ***tab = malloc(sizeof(char **) * (strlen(numbers) + 1));

    tab[strlen(numbers)] = NULL;
    for (int i = 0; numbers[i] != '\0'; i++) {
        pos = check_dig(numbers[i]);
        if (str == NULL) {
            tab[i] = fill_tab(NULL, pos);
        } else {
            id = str_index(str, pos);
            car = str[id];
            tab[i] = fill_tab(&car, pos);
        }
    }
    return tab;
}

void print_tab(char *numbers, char *str)
{
    char ***tab = char_printer(numbers, str);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < strlen(numbers) - 1; j++) {
            printf("%s ", tab[j][i]);
        }
        printf("%s\n", tab[strlen(numbers) - 1][i]);
    }
}
