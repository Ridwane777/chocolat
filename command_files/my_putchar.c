/*
** EPITECH PROJECT, 2024
** my_putcharf.c
** File description:
** Display characters
*/
#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
