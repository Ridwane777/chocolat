/*
** EPITECH PROJECT, 2025
** 105demography
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac > 1) {
        if (ac == 2 && strcmp(av[1], "-h") == 0)
            usage();
        else {
	    opr(ac, av);
	}
    } else {
        return 84;
    }
}
