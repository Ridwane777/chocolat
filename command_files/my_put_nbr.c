/*
** EPITECH PROJECT, 2024
** my_put_nbr.c
** File description:
** Display digits
*/

#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"
int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10) {
        my_putchar(nb + '0');
    } else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-1 * nb);
    } else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return 0;
}
