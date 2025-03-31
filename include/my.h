/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h
*/

#include <string.h>
#include <stdarg.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <math.h>
#ifndef MY_H
    #define MY_H
typedef struct {
    long double s_x;
    long double s_y;
    long double sq_x;
    long double sq_y;
    long double x_y;
    long double moy_x;
    long double moy_y;
    long double a1;
    long double b1;
    long double a2;
    long double b2;
    long double rt_mean;
    long double rt_mean2;
    long double r;
    int nb;
    char **name;
} data_t;
int count_words2(char const *str);
char **lecture(void);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
double my_getnbr(char const *str);
char **open_file(char const *filepath);
char **my_str_to_word_array(char const *str);
int count_words(char const *str);
int analyse_str(char c);
char **spe_str_to_word_array(char const *str);
int count_words(char const *str);
int analyse_str2(char c);
char *my_strncpy(char *dest, char const *src, int n);
int check(char *s1, char *s2);
int my_free(char **str);
int is_alpha(char *str);
int recup_arg(char **str, char *av);
int check_index(int index);
int check_args(int ac, char **av);
data_t *opr(int ac, char **av);
long long x_sum(char *str);
long long y_sum(char *str);
long long square_x(char *str);
long long square_y(char *str);
long long product_sum(char *str);
int print(char **map);
int usage(void);
data_t *rms_dev(int ac, char *av[], data_t *data);
data_t *all_data(int ac, char **av, data_t *data);
#endif
