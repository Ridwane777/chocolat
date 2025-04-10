/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** The header file
*/

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>

#ifndef MY_H
    #define MY_H

int check_dig(char d);
int str_index(char *s, int n);
void print_tab(char *numbers, char *str);
int my_strlen(char *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int n);
char *my_strcat(char *dest, char *src);
char *my_strcpy(char *dest, char *src);
char *my_strdup(char *src);
char **alloc_array(void);
char **alloc(void);
char **find_word(char **arr, char *word);
int my_strisalpha(char *str);
int is_digits(char *s);
char **print_zero(char *key);
char **print_one(char *key);
char **print_two(char *key);
char **print_tree(char *key);
char **print_four(char *key);
char **print_five(char *key);
char **print_six(char *key);
char **print_seven(char *key);
char **print_eigth(char *key);
char **print_nine(char *key);
#endif
